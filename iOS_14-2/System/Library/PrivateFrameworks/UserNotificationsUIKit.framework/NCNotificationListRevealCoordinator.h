/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isHapticPrepared;
-(int)revealState;
-(void)setFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)setRevealPercentage:(double)arg1 ;
-(id)_topView;
-(double)revealPercentage;
-(BOOL)isSectionRevealedStateLocked;
-(BOOL)_revealSectionHasContent;
-(void)setRevealState:(int)arg1 ;
-(id<NCNotificationListRevealCoordinatorDelegate>)delegate;
-(void)setSubLists:(NSArray *)arg1 ;
-(id)_revealListView;
-(double)_updateRevealPercentageForNotificationListView:(id)arg1 ;
-(BOOL)_isRevealed;
-(void)_prepareHaptic;
-(void)setHapticPrepared:(BOOL)arg1 ;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(void)setSectionRevealed:(BOOL)arg1 ;
-(id)_stringForRevealState:(int)arg1 ;
-(void)setDelegate:(id<NCNotificationListRevealCoordinatorDelegate>)arg1 ;
-(NSArray *)subLists;
-(void)notificationListViewWillEndDragging:(id)arg1 withTargetContentOffset:(inout CGPoint*)arg2 ;
-(void)setSectionRevealedStateLocked:(BOOL)arg1 ;
-(BOOL)isForceRevealed;
-(BOOL)_shouldAllowNotificationListReveal;
-(void)notificationListDidScroll:(id)arg1 ;
-(void)notificationListWillBeginDragging:(id)arg1 ;
-(void)_performHaptic;
-(void)_performRevealForSubviewsIfNecessary;
-(BOOL)_isRevealSectionVisibleForListView:(id)arg1 ;
-(double)_settlingYPositionForReveal;
-(BOOL)shouldLimitTargetContentOffsetForNotificationListReveal;
-(void)_releaseHaptic;
-(void)setShouldLimitTargetContentOffsetForNotificationListReveal:(BOOL)arg1 ;
-(BOOL)isSectionRevealed;
-(void)setForceRevealed:(BOOL)arg1 ;
@end

