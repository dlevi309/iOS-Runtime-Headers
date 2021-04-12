/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarBackgroundActivityItem.h>

@class _UIStatusBarPillView;

@interface _UIStatusBarPillBackgroundActivityItem : _UIStatusBarBackgroundActivityItem {

	long long _previousType;
	_UIStatusBarPillView* _combinedView;
	CGSize _pillSize;

}

@property (assign,nonatomic) long long previousType;                           //@synthesize previousType=_previousType - In the implementation block
@property (nonatomic,retain) _UIStatusBarPillView * combinedView;              //@synthesize combinedView=_combinedView - In the implementation block
@property (assign,nonatomic) CGSize pillSize;                                  //@synthesize pillSize=_pillSize - In the implementation block
+(BOOL)shouldKeepIconVisibleForActivityType:(long long)arg1 ;
+(BOOL)_identifierContainsItemImage:(id)arg1 ;
+(id)pillCombinedDisplayIdentifier;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)_backgroundActivityViewForIdentifier:(id)arg1 ;
-(id)_backgroundColorForActivityType:(long long)arg1 ;
-(void)setCombinedView:(_UIStatusBarPillView *)arg1 ;
-(id)_textLabelForActivityType:(long long)arg1 ;
-(BOOL)_shouldBounceWhenTransitioningFromType:(long long)arg1 toType:(long long)arg2 ;
-(void)_create_combinedView;
-(void)updatedDisplayItemsWithData:(id)arg1 ;
-(BOOL)shouldUpdateIndicatorForIdentifier:(id)arg1 ;
-(CGSize)pillSize;
-(id)viewForIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 statusBar:(id)arg2 ;
-(void)setPillSize:(CGSize)arg1 ;
-(long long)previousType;
-(void)setPreviousType:(long long)arg1 ;
-(id)createDisplayItemForIdentifier:(id)arg1 ;
-(_UIStatusBarPillView *)combinedView;
@end

