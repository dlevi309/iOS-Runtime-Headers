/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKClassroomLockScreenMonitoring <NSObject>
@property (getter=isClassroomLockScreenVisible,nonatomic,readonly) BOOL classroomLockScreenVisible; 
@required
+(id)sharedMonitor;
-(void)displayClassroomLockScreenWithLabel:(id)arg1 passcode:(id)arg2;
-(void)dismissClassroomLockScreen;
-(BOOL)isClassroomLockScreenVisible;

@end

