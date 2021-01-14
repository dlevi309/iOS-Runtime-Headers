/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

@class NSDictionary;


@protocol CABrightnessControl <NSObject,CABrightnessTransaction>
@property (nonatomic,readonly) BOOL brightnessAvailable; 
@property (nonatomic,readonly) BOOL whitePointAvailable; 
@property (nonatomic,readonly) BOOL whitePointD50XYZ; 
@property (nonatomic,readonly) NSDictionary * brightnessCapabilities; 
@required
-(BOOL)whitePointAvailable;
-(BOOL)brightnessAvailable;
-(BOOL)whitePointD50XYZ;
-(NSDictionary *)brightnessCapabilities;

@end

