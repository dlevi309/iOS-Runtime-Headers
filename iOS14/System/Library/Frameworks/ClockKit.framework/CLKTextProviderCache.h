/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/


#import <ClockKit/ClockKit-Structs.h>
@class NSMutableDictionary;

@interface CLKTextProviderCache : NSObject {

	NSMutableDictionary* _cachesByStyle;

}
-(id)attributedStringAndSize:(CGSize*)arg1 forMaxWidth:(double)arg2 withStyle:(id)arg3 generator:(/*^block*/id)arg4 ;
-(id)attributedStringForIndex:(unsigned long long)arg1 withStyle:(id)arg2 generator:(/*^block*/id)arg3 ;
-(id)_cacheForStyle:(id)arg1 ;
@end

