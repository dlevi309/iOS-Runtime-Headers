/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaDateClusterPredicate : OKMediaClusterPredicate {

	unsigned long long _type;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(unsigned long long)type;
-(id)title;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(unsigned long long)timeOfDay:(id)arg1 ;
-(id)timeOfDayAsString:(unsigned long long)arg1 ;
-(long long)hourInGMT:(id)arg1 ;
@end

