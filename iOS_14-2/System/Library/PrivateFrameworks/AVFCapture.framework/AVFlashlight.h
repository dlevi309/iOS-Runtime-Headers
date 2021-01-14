/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@class AVFlashlightInternal;

@interface AVFlashlight : NSObject {

	AVFlashlightInternal* _internal;

}

@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (getter=isOverheated,nonatomic,readonly) BOOL overheated; 
@property (nonatomic,readonly) float flashlightLevel; 
+(void)initialize;
+(BOOL)hasFlashlight;
-(BOOL)isAvailable;
-(BOOL)isOverheated;
-(void)turnPowerOff;
-(id)init;
-(void)_teardownFlashlight;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)_reconnectToServer;
-(BOOL)setFlashlightLevel:(float)arg1 withError:(id*)arg2 ;
-(void)_setupFlashlight;
-(BOOL)turnPowerOnWithError:(id*)arg1 ;
-(float)flashlightLevel;
-(void)dealloc;
@end

