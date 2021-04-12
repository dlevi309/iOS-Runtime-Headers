/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CCUIControlCenterSystemAgent.h>

@class NSString;

@interface SBControlCenterSystemAgent : NSObject <CCUIControlCenterSystemAgent>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isOrientationLocked;
-(BOOL)isRingerMuted;
-(void)lockOrientation;
-(void)unlockOrientation;
-(void)setRingerMuted:(BOOL)arg1 ;
-(BOOL)isUILocked;
@end

