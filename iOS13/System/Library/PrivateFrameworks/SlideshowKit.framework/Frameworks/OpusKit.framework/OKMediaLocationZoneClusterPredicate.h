/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaLocationZoneClusterPredicate : OKMediaClusterPredicate {

	double _distance;

}

@property (readonly) double distance;              //@synthesize distance=_distance - In the implementation block
-(void)dealloc;
-(id)title;
-(double)distance;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(id)_containsInSet:(id)arg1 withinItems:(id)arg2 distance:(double)arg3 ;
-(id)_titleWithPlacemark:(id)arg1 ;
-(id)initWithDistance:(double)arg1 ;
@end

