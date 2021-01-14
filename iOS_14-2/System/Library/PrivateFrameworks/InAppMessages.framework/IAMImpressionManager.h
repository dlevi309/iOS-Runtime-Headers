/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_transitionToInactiveState;
-(void)_handleApplicationDidBecomeActive;
-(id<IAMImpressionManagerDelegate>)delegate;
-(void)_handleApplicationWillResignActive;
-(void)_reportImpressionEventWithDictionary:(id)arg1 ;
-(void)_transitionToActiveState;
-(BOOL)_endImpressionForMessageWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2 displayEndTime:(id)arg3 ;
-(void)messageEntry:(id)arg1 didAppearFromTargetWithIdentifier:(id)arg2 atTime:(id)arg3 ;
-(void)_reportImpression:(id)arg1 ;
-(void)setDelegate:(id<IAMImpressionManagerDelegate>)arg1 ;
-(BOOL)_startImpressionForMessageEntry:(id)arg1 fromTargetWithIdentifier:(id)arg2 displayStartTime:(id)arg3 ;
-(void)messageWithIdentifier:(id)arg1 didDisappearFromTargetWithIdentifier:(id)arg2 atTime:(id)arg3 ;
-(void)dealloc;
@end

