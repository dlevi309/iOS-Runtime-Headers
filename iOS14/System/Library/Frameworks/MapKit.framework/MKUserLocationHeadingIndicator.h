/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

@class UITraitCollection;


@protocol MKUserLocationHeadingIndicator <NSObject>
@property (assign,nonatomic) double minimumAccuracyRadius; 
@property (nonatomic,retain) UITraitCollection * traitCollection; 
@property (assign,nonatomic) unsigned long long mapType; 
@required
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(id)arg1;
-(unsigned long long)mapType;
-(void)setMapType:(unsigned long long)arg1;
-(void)setAccuracyRadius:(double)arg1 duration:(double)arg2;
-(void)updateHeading:(double)arg1;
-(void)setMinimumAccuracyRadius:(double)arg1;
-(double)minimumAccuracyRadius;
-(void)updateTintColor:(id)arg1;
-(void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;

@end

