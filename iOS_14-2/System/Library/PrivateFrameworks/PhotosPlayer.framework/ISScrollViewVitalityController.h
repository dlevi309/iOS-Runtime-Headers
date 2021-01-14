/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class UIScrollView, NSHashTable, NSDate, ISVisibilityOffsetHelper;

@interface ISScrollViewVitalityController : NSObject {

	BOOL _enabled;
	BOOL __isPerformingChanges;
	BOOL _scrolling;
	BOOL _decelerating;
	BOOL _hasTargetContentOffset;
	UIScrollView* __scrollView;
	NSHashTable* __playerViews;
	NSDate* _estimatedScrollEndDate;
	ISVisibilityOffsetHelper* _visibilityOffsetHelper;
	CGPoint _targetContentOffset;

}

@property (assign,setter=_setScrollView:,nonatomic,__weak) UIScrollView * _scrollView;              //@synthesize _scrollView=__scrollView - In the implementation block
@property (nonatomic,readonly) NSHashTable * _playerViews;                                          //@synthesize _playerViews=__playerViews - In the implementation block
@property (assign,setter=_setPerformingChanges:,nonatomic) BOOL _isPerformingChanges;               //@synthesize _isPerformingChanges=__isPerformingChanges - In the implementation block
@property (assign,getter=isScrolling,nonatomic) BOOL scrolling;                                     //@synthesize scrolling=_scrolling - In the implementation block
@property (assign,getter=isDecelerating,nonatomic) BOOL decelerating;                               //@synthesize decelerating=_decelerating - In the implementation block
@property (assign,nonatomic) BOOL hasTargetContentOffset;                                           //@synthesize hasTargetContentOffset=_hasTargetContentOffset - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;                                           //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (nonatomic,retain) NSDate * estimatedScrollEndDate;                                       //@synthesize estimatedScrollEndDate=_estimatedScrollEndDate - In the implementation block
@property (nonatomic,readonly) ISVisibilityOffsetHelper * visibilityOffsetHelper;                   //@synthesize visibilityOffsetHelper=_visibilityOffsetHelper - In the implementation block
@property (nonatomic,readonly) BOOL canPerformVitality; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                         //@synthesize enabled=_enabled - In the implementation block
-(void)_setPerformingChanges:(BOOL)arg1 ;
-(BOOL)_isPerformingChanges;
-(BOOL)canPerformVitality;
-(UIScrollView *)_scrollView;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isDecelerating;
-(CGPoint)targetContentOffset;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(void)setScrolling:(BOOL)arg1 ;
-(BOOL)isScrolling;
-(void)addPlayerView:(id)arg1 ;
-(void)removePlayerView:(id)arg1 ;
-(BOOL)isEnabled;
-(ISVisibilityOffsetHelper *)visibilityOffsetHelper;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_setScrollView:(id)arg1 ;
-(void)setEstimatedScrollEndDate:(NSDate *)arg1 ;
-(void)setDecelerating:(BOOL)arg1 ;
-(NSDate *)estimatedScrollEndDate;
-(void)didLayoutPlayerViews;
-(void)setHasTargetContentOffset:(BOOL)arg1 ;
-(void)canPerformVitalityDidChange;
-(id)_newVitalityFilter;
-(void)_updateVitalityFilters;
-(NSHashTable *)_playerViews;
-(BOOL)hasTargetContentOffset;
@end

