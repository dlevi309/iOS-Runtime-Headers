/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol CCUIControlCenterSystemAgent <NSObject>
@required
-(BOOL)isOrientationLocked;
-(BOOL)isRingerMuted;
-(void)lockOrientation;
-(void)unlockOrientation;
-(void)setRingerMuted:(BOOL)arg1;
-(BOOL)isUILocked;

@end

