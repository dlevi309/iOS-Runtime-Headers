/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/


@protocol IAMImpressionManagerDelegate;
#import <InAppMessages/InAppMessages-Structs.h>
@class NSMutableDictionary;

@interface IAMImpressionManager : NSObject {

	NSMutableDictionary* _activeImpressionForMessageIdentifierFromTargetIdentifier;
	NSMutableDictionary* _inactiveImpressionForMessageIdentifierFromTargetIdentifier;
	BOOL _isApplicationActive;
	os_unfair_lock_s _lock;
	id<IAMImpressionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IAMImpressionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<IAMImpressionManagerDelegate>)delegate;
-(void)setDelegate:(id<IAMImpressionManagerDelegate>)arg1 ;
-(void)_handleApplicationDidBecomeActive;
-(void)_handleApplicationWillResignActive;
-(BOOL)_startImpressionForMessageEntry:(id)arg1 fromTargetWithIdentifier:(id)arg2 displayStartTime:(id)arg3 ;
-(BOOL)_endImpressionForMessageWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2 displayEndTime:(id)arg3 ;
-(void)_reportImpression:(id)arg1 ;
-(void)_reportImpressionEventWithDictionary:(id)arg1 ;
-(void)_transitionToActiveState;
-(void)_transitionToInactiveState;
-(void)messageEntry:(id)arg1 didAppearFromTargetWithIdentifier:(id)arg2 ;
-(void)messageWithIdentifier:(id)arg1 didDisappearFromTargetWithIdentifier:(id)arg2 ;
@end

