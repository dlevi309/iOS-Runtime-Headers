/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/DeviceCheck.framework/DeviceCheck
*/


@interface DCDevice : NSObject

@property (getter=isSupported,readonly) BOOL supported; 
+(id)currentDevice;
-(BOOL)isSupported;
-(BOOL)_isSupportedReturningError:(id*)arg1 ;
-(void)generateTokenWithCompletionHandler:(/*^block*/id)arg1 ;
@end

