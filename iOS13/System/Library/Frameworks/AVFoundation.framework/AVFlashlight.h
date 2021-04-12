/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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
-(id)init;
-(void)dealloc;
-(BOOL)isAvailable;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(float)flashlightLevel;
-(void)_setupFlashlight;
-(void)_teardownFlashlight;
-(BOOL)isOverheated;
-(BOOL)turnPowerOnWithError:(id*)arg1 ;
-(void)turnPowerOff;
-(BOOL)setFlashlightLevel:(float)arg1 withError:(id*)arg2 ;
-(void)_reconnectToServer;
@end

