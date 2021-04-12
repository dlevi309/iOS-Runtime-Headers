/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaDateClusterPredicate : OKMediaClusterPredicate {

	unsigned long long _type;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(id)initWithType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)title;
-(void)dealloc;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(unsigned long long)timeOfDay:(id)arg1 ;
-(id)timeOfDayAsString:(unsigned long long)arg1 ;
-(long long)hourInGMT:(id)arg1 ;
@end

