/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
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

