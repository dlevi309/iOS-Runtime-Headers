/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoardServices/FBSServiceFacility.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface FBInterfaceOrientationServiceServer : FBSServiceFacility {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _interestedClients;
	long long _interfaceOrientation;
	unsigned long long _sequenceNumber;

}
-(void)_queue_updateInterest:(unsigned)arg1 forClient:(id)arg2 withMessage:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 ;
-(id)init;
-(void)_queue_handleRegisterOrientationInterest:(id)arg1 fromClient:(id)arg2 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)_queue_handleRequestActiveOrientation:(id)arg1 fromClient:(id)arg2 ;
-(id)_prerequisiteMilestones;
-(void)noteInterfaceOrientationChanged:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
@end

