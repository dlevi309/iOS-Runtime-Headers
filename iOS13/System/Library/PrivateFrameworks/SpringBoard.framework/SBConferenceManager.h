/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class TUCallCenter;

@interface SBConferenceManager : NSObject {

	BOOL _hasFaceTimeCapability;
	MGNotificationTokenStructRef _faceTimeCapabilityUpdateToken;
	TUCallCenter* _sharedCallCenter;

}
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)inFaceTime;
-(BOOL)faceTimeInvitationExists;
-(void)endFaceTime;
-(BOOL)activeFaceTimeCallExists;
-(void)_faceTimeStateChanged:(id)arg1 ;
-(id)incomingFaceTimeCall;
-(id)activeFaceTimeCall;
-(id)currentFaceTimeCall;
-(BOOL)hasFaceTimeCapability;
-(BOOL)faceTimeIsAvailable;
-(BOOL)inFaceTimeVideo;
-(BOOL)canStartFaceTime;
@end

