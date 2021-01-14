/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canStartFaceTime;
-(id)init;
-(BOOL)inFaceTime;
-(BOOL)activeFaceTimeCallExists;
-(BOOL)inFaceTimeVideo;
-(BOOL)faceTimeInvitationExists;
-(void)endFaceTime;
-(void)_faceTimeStateChanged:(id)arg1 ;
-(id)activeFaceTimeCall;
-(id)incomingFaceTimeCall;
-(BOOL)hasFaceTimeCapability;
-(id)currentFaceTimeCall;
-(BOOL)faceTimeIsAvailable;
-(void)dealloc;
@end

