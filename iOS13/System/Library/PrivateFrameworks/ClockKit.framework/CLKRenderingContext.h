/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/


@class CLKDevice;

@interface CLKRenderingContext : NSObject {

	CLKDevice* _device;

}

@property (nonatomic,readonly) CLKDevice * device; 
+(id)sharedRenderingContext;
-(id)_init;
-(CLKDevice *)device;
-(void)setDevice:(CLKDevice *)arg1 ;
@end

