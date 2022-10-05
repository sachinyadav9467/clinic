import React from 'react';
import features from '../../Data/features';
import './Features.css';
const Features = () => {
	
	return (
		<section id="features">
			<div className="container">
				<div className="row">
					<div className="mt-4">
						<h4 className="mb-5 mt-5 text-center">
							Time and distance are no longer a matter of concern. Easily receive advice on physical
							illness or health issues through video calling.
						</h4>
					</div>
					<div className="col-md-12 align-self-center">
						<ul>
							{features.map((feature) => (
								<li key={feature.icon}>
									<div className="d-flex">
										<div className="icon">
											<span>{feature.icon}</span>
										</div>
										<div className="features-item-text">
											<h6>{feature.title}</h6>
											<p>{feature.description}</p>
										</div>
									</div>
								</li>
							))}
						</ul>
					</div>
					
				</div>
			</div>
		</section>
	);
};

export default Features;
