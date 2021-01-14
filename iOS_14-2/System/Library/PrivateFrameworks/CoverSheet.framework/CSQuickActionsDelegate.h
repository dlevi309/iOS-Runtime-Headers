/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol CSQuickActionsDelegate <NSObject>
@required
-(void)fireActionForButton:(id)arg1;
-(BOOL)isPortrait;
-(BOOL)allowsFlashlightInteraction;
-(BOOL)allowsCameraPress;
-(void)touchBeganForButton:(id)arg1;
-(BOOL)hasCamera;
-(BOOL)allowsFlashlight;
-(void)touchEndedForButton:(id)arg1;
-(BOOL)hasFlashlight;

@end

