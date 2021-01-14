/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CCUIControlCenterSystemAgent.h>

@class NSString;

@interface SBControlCenterSystemAgent : NSObject <CCUIControlCenterSystemAgent>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRingerMuted:(BOOL)arg1 ;
-(void)lockOrientation;
-(BOOL)isRingerMuted;
-(void)unlockOrientation;
-(BOOL)isOrientationLocked;
-(BOOL)isUILocked;
@end

