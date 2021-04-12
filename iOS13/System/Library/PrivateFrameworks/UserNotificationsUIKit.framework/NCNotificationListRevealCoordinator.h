/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <libobjc.A.dylib/NCNotificationListViewScrollDelegate.h>

@protocol NCNotificationListRevealCoordinatorDelegate;
@class NSArray, UIImpactFeedbackGenerator, NSString;

@interface NCNotificationListRevealCoordinator : NSObject <NCNotificationListViewScrollDelegate> {

	BOOL _forceRevealed;
	BOOL _sectionRevealed;
	BOOL _sectionRevealedStateLocked;
	BOOL _shouldLimitTargetContentOffsetForNotificationListReveal;
	BOOL _hapticPrepared;
	int _revealState;
	id<NCNotificationListRevealCoordinatorDelegate> _delegate;
	double _revealPercentage;
	NSArray* _subLists;
	UIImpactFeedbackGenerator* _feedbackGenerator;

}

@property (assign,nonatomic) int revealState;                                                                  //@synthesize revealState=_revealState - In the implementation block
@property (assign,nonatomic) double revealPercentage;                                                          //@synthesize revealPercentage=_revealPercentage - In the implementation block
@property (nonatomic,retain) NSArray * subLists;                                                               //@synthesize subLists=_subLists - In the implementation block
@property (assign,getter=isSectionRevealed,nonatomic) BOOL sectionRevealed;                                    //@synthesize sectionRevealed=_sectionRevealed - In the implementation block
@property (assign,getter=isSectionRevealedStateLocked,nonatomic) BOOL sectionRevealedStateLocked;              //@synthesize sectionRevealedStateLocked=_sectionRevealedStateLocked - In the implementation block
@property (assign,nonatomic) BOOL shouldLimitTargetContentOffsetForNotificationListReveal;                     //@synthesize shouldLimitTargetContentOffsetForNotificationListReveal=_shouldLimitTargetContentOffsetForNotificationListReveal - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * feedbackGenerator;                                    //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,getter=isHapticPrepared,nonatomic) BOOL hapticPrepared;                                      //@synthesize hapticPrepared=_hapticPrepared - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationListRevealCoordinatorDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isForceRevealed,nonatomic) BOOL forceRevealed;                                        //@synthesize forceRevealed=_forceRevealed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NCNotificationListRevealCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<NCNotificationListRevealCoordinatorDelegate>)arg1 ;
-(void)setFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(id)_topView;
-(int)revealState;
-(void)setForceRevealed:(BOOL)arg1 ;
-(void)notificationListWillBeginDragging:(id)arg1 ;
-(void)notificationListDidScroll:(id)arg1 ;
-(void)notificationListViewWillEndDragging:(id)arg1 withTargetContentOffset:(inout CGPoint*)arg2 ;
-(void)setRevealPercentage:(double)arg1 ;
-(double)revealPercentage;
-(BOOL)_isRevealSectionVisibleForListView:(id)arg1 ;
-(BOOL)_shouldAllowNotificationListReveal;
-(void)setRevealState:(int)arg1 ;
-(void)setSectionRevealedStateLocked:(BOOL)arg1 ;
-(void)setShouldLimitTargetContentOffsetForNotificationListReveal:(BOOL)arg1 ;
-(BOOL)shouldLimitTargetContentOffsetForNotificationListReveal;
-(double)_settlingYPositionForReveal;
-(BOOL)isSectionRevealedStateLocked;
-(double)_updateRevealPercentageForNotificationListView:(id)arg1 ;
-(void)_prepareHaptic;
-(void)_releaseHaptic;
-(void)_performRevealForSubviewsIfNecessary;
-(BOOL)_revealSectionHasContent;
-(void)setSectionRevealed:(BOOL)arg1 ;
-(void)_performHaptic;
-(BOOL)isSectionRevealed;
-(id)_stringForRevealState:(int)arg1 ;
-(NSArray *)subLists;
-(id)_revealListView;
-(BOOL)isHapticPrepared;
-(void)setHapticPrepared:(BOOL)arg1 ;
-(BOOL)_isRevealed;
-(BOOL)isForceRevealed;
-(void)setSubLists:(NSArray *)arg1 ;
@end

