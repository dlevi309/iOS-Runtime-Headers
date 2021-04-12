/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>

@protocol CSModalHomeGestureParticipating;
@class NSString;

@interface SBDashBoardModalHomeAffordanceControllerClientBridge : NSObject <SBHomeGestureParticipantDelegate> {

	id<CSModalHomeGestureParticipating> _coverSheetModalHomeGestureParticipant;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(id)initWithCoverSheetModalHomeGestureParticipant:(id)arg1 ;
@end

