/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBNotificationHomeAffordanceControllerClient.h>

@protocol CSHomeGestureParticipating;
@class NSString;

@interface SBDashBoardHomeAffordanceControllerClientBridge : NSObject <SBNotificationHomeAffordanceControllerClient> {

	id<CSHomeGestureParticipating> _coverSheetHomeGestureParticipant;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(id)initWithCoverSheetHomeGestureParticipant:(id)arg1 ;
@end

