/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol CSQuickActionsDelegate <NSObject>
@required
-(BOOL)isPortrait;
-(BOOL)hasCamera;
-(BOOL)hasFlashlight;
-(BOOL)allowsFlashlight;
-(BOOL)allowsCameraPress;
-(void)touchBeganForButton:(id)arg1;
-(void)fireActionForButton:(id)arg1;
-(void)touchEndedForButton:(id)arg1;

@end

