//
//  mqttitudeFriendAnnotationView.h
//  mqttitude
//
//  Created by Christoph Krey on 15.09.13.
//  Copyright (c) 2013 Christoph Krey. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface mqttitudeFriendAnnotationView : MKAnnotationView
@property (strong, nonatomic) UIImage *personImage;
@property (strong, nonatomic) UIColor *circleColor;

@end
