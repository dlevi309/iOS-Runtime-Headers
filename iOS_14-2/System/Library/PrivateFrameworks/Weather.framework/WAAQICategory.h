/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


#import <Weather/Weather-Structs.h>
@class WAAQIColor;

@interface WAAQICategory : NSObject {

	WAAQIColor* _color;
	NSRange _range;

}

@property (nonatomic,readonly) NSRange range;                   //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) WAAQIColor * color;              //@synthesize color=_color - In the implementation block
-(NSRange)range;
-(WAAQIColor *)color;
-(id)initWithRange:(NSRange)arg1 color:(id)arg2 ;
@end

