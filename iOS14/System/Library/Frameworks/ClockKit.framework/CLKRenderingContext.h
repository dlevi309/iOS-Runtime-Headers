/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/


@class CLKDevice;

@interface CLKRenderingContext : NSObject {

	CLKDevice* _device;

}

@property (nonatomic,readonly) CLKDevice * device; 
+(id)sharedRenderingContext;
-(CLKDevice *)device;
-(void)setDevice:(CLKDevice *)arg1 ;
-(id)_init;
@end

