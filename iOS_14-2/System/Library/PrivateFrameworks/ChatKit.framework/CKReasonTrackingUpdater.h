/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKReasonTrackingUpdaterDelegate;
@class NSString, NSCountedSet;

@interface CKReasonTrackingUpdater : NSObject {

	BOOL _hasPendingDeferredUpdate;
	NSString* _name;
	id<CKReasonTrackingUpdaterDelegate> _delegate;
	NSCountedSet* _reasonsForNeedsUpdates;
	NSCountedSet* _reasonsForHoldingUpdates;

}

@property (nonatomic,retain) NSCountedSet * reasonsForNeedsUpdates;                            //@synthesize reasonsForNeedsUpdates=_reasonsForNeedsUpdates - In the implementation block
@property (nonatomic,retain) NSCountedSet * reasonsForHoldingUpdates;                          //@synthesize reasonsForHoldingUpdates=_reasonsForHoldingUpdates - In the implementation block
@property (assign,nonatomic) BOOL hasPendingDeferredUpdate;                                    //@synthesize hasPendingDeferredUpdate=_hasPendingDeferredUpdate - In the implementation block
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<CKReasonTrackingUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isHoldingUpdates; 
-(BOOL)needsUpdate;
-(id<CKReasonTrackingUpdaterDelegate>)delegate;
-(BOOL)isHoldingUpdatesForReason:(id)arg1 ;
-(void)_scheduleDeferredUpdateFollowingHoldForReason:(id)arg1 ;
-(void)_triggerNeedsUpdateFollowingHoldForReason:(id)arg1 ;
-(void)_handleReasonsForHoldingUpdatesChangeForReason:(id)arg1 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)arg2 ;
-(void)updateImmediatelyWithReason:(id)arg1 ;
-(void)updateImmediatelyIfNeeded;
-(NSCountedSet *)reasonsForNeedsUpdates;
-(void)setReasonsForNeedsUpdates:(NSCountedSet *)arg1 ;
-(NSCountedSet *)reasonsForHoldingUpdates;
-(void)setReasonsForHoldingUpdates:(NSCountedSet *)arg1 ;
-(BOOL)hasPendingDeferredUpdate;
-(void)setHasPendingDeferredUpdate:(BOOL)arg1 ;
-(NSString *)name;
-(void)setDelegate:(id<CKReasonTrackingUpdaterDelegate>)arg1 ;
-(id)description;
-(void)beginHoldingUpdatesForReason:(id)arg1 ;
-(id)initWithName:(id)arg1 delegate:(id)arg2 ;
-(void)endHoldingUpdatesForReason:(id)arg1 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)arg2 ;
-(void)setNeedsDeferredUpdateWithReason:(id)arg1 ;
-(void)endAllHoldsOnUpdatesForReason:(id)arg1 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)arg2 ;
-(BOOL)isHoldingUpdates;
-(void)setName:(NSString *)arg1 ;
@end

