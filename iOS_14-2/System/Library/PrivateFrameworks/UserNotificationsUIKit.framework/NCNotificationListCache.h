/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface NCNotificationListCache : NSObject <PLContentSizeCategoryAdjusting> {

	BOOL _adjustsFontForContentSizeCategory;
	NSMutableDictionary* _contentRevealedCellHeightCache;
	NSMutableDictionary* _contentRevealedWithSummaryCellHeightCache;
	NSMutableDictionary* _contentHiddenCellHeightCache;
	NSMutableSet* _notificationListCellCache;
	NSMutableSet* _notificationListCoalescingHeaderCache;
	NSMutableSet* _notificationListCoalescingControlsCache;
	NSMutableDictionary* _notificationListCellsForRequests;

}

@property (nonatomic,retain) NSMutableDictionary * contentRevealedCellHeightCache;                         //@synthesize contentRevealedCellHeightCache=_contentRevealedCellHeightCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contentRevealedWithSummaryCellHeightCache;              //@synthesize contentRevealedWithSummaryCellHeightCache=_contentRevealedWithSummaryCellHeightCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contentHiddenCellHeightCache;                           //@synthesize contentHiddenCellHeightCache=_contentHiddenCellHeightCache - In the implementation block
@property (nonatomic,retain) NSMutableSet * notificationListCellCache;                                     //@synthesize notificationListCellCache=_notificationListCellCache - In the implementation block
@property (nonatomic,retain) NSMutableSet * notificationListCoalescingHeaderCache;                         //@synthesize notificationListCoalescingHeaderCache=_notificationListCoalescingHeaderCache - In the implementation block
@property (nonatomic,retain) NSMutableSet * notificationListCoalescingControlsCache;                       //@synthesize notificationListCoalescingControlsCache=_notificationListCoalescingControlsCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationListCellsForRequests;                       //@synthesize notificationListCellsForRequests=_notificationListCellsForRequests - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                       //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)removeNotificationRequest:(id)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)updateNotificationRequest:(id)arg1 ;
-(id)init;
-(void)clearCachedHeightsForNotificationRequest:(id)arg1 ;
-(void)clearCacheForNotificationRequest:(id)arg1 ;
-(id)coalescingHeaderCellWithTitle:(id)arg1 width:(double)arg2 ;
-(id)coalescingControlsCellWithWidth:(double)arg1 ;
-(BOOL)recycleNotificationListCell:(id)arg1 ;
-(void)recycleNotificationListCoalescingHeaderCell:(id)arg1 ;
-(void)recycleNotificationListCoalescingControlsCell:(id)arg1 ;
-(id)listCellForNotificationRequest:(id)arg1 viewControllerDelegate:(id)arg2 createNewIfNecessary:(BOOL)arg3 shouldConfigure:(BOOL)arg4 ;
-(double)heightForNotificationRequest:(id)arg1 withFrameWidth:(double)arg2 isContentRevealed:(BOOL)arg3 isShowingSummaryText:(BOOL)arg4 shouldCalculateHeight:(BOOL)arg5 ;
-(NSMutableDictionary *)notificationListCellsForRequests;
-(NSMutableDictionary *)contentRevealedCellHeightCache;
-(NSMutableDictionary *)contentHiddenCellHeightCache;
-(NSMutableDictionary *)contentRevealedWithSummaryCellHeightCache;
-(id)_cachedNotificationListCellForRequest:(id)arg1 viewControllerDelegate:(id)arg2 shouldConfigure:(BOOL)arg3 ;
-(id)_newCellForNotificationRequest:(id)arg1 viewControllerDelegate:(id)arg2 ;
-(NSMutableSet *)notificationListCellCache;
-(id)_cachedHeaderCellWithTitle:(id)arg1 ;
-(NSMutableSet *)notificationListCoalescingHeaderCache;
-(NSMutableSet *)notificationListCoalescingControlsCache;
-(void)_clearAllHeightCaches;
-(void)setContentRevealedCellHeightCache:(NSMutableDictionary *)arg1 ;
-(void)setContentRevealedWithSummaryCellHeightCache:(NSMutableDictionary *)arg1 ;
-(void)setContentHiddenCellHeightCache:(NSMutableDictionary *)arg1 ;
-(void)setNotificationListCellCache:(NSMutableSet *)arg1 ;
-(void)setNotificationListCoalescingHeaderCache:(NSMutableSet *)arg1 ;
-(void)setNotificationListCoalescingControlsCache:(NSMutableSet *)arg1 ;
-(void)setNotificationListCellsForRequests:(NSMutableDictionary *)arg1 ;
@end

