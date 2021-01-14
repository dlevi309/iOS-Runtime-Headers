/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <UIKitCore/_UINavigationBarTransitionContextParticipant.h>

@class _UINavigationBarTransitionContext, NSArray, NSString, NSDictionary, _UIPointerInteractionAssistant, UIView, _UINavigationBarLargeTitleViewLayout;

@interface _UINavigationBarLargeTitleView : UIView <UIPointerInteractionDelegate, _UINavigationBarTransitionContextParticipant> {

	_UINavigationBarTransitionContext* _transitionContext;
	NSArray* _titleCandidates;
	NSString* __effectiveTitle;
	BOOL _providesExtraSpaceForExcessiveLineHeights;
	BOOL _alignAccessoryViewToTitleBaseline;
	NSDictionary* _effectiveTitleAttributes;
	_UIPointerInteractionAssistant* _assistant;
	long long _titleType;
	NSString* _title;
	NSArray* _alternateTitles;
	NSDictionary* _titleAttributes;
	unsigned long long _twoLineMode;
	UIView* _accessoryView;
	unsigned long long _accessoryViewHorizontalAlignment;
	_UINavigationBarLargeTitleViewLayout* _layout;

}

@property (assign,nonatomic,__weak) _UIPointerInteractionAssistant * assistant;                //@synthesize assistant=_assistant - In the implementation block
@property (assign,nonatomic) long long titleType;                                              //@synthesize titleType=_titleType - In the implementation block
@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * alternateTitles;                                        //@synthesize alternateTitles=_alternateTitles - In the implementation block
@property (nonatomic,copy) NSDictionary * titleAttributes;                                     //@synthesize titleAttributes=_titleAttributes - In the implementation block
@property (nonatomic,readonly) NSDictionary * effectiveTitleAttributes;                        //@synthesize effectiveTitleAttributes=_effectiveTitleAttributes - In the implementation block
@property (assign,nonatomic) unsigned long long twoLineMode;                                   //@synthesize twoLineMode=_twoLineMode - In the implementation block
@property (assign,nonatomic) BOOL providesExtraSpaceForExcessiveLineHeights;                   //@synthesize providesExtraSpaceForExcessiveLineHeights=_providesExtraSpaceForExcessiveLineHeights - In the implementation block
@property (nonatomic,readonly) double restingHeightOfTitleView; 
@property (nonatomic,retain) UIView * accessoryView;                                           //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) BOOL alignAccessoryViewToTitleBaseline;                           //@synthesize alignAccessoryViewToTitleBaseline=_alignAccessoryViewToTitleBaseline - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryViewHorizontalAlignment;              //@synthesize accessoryViewHorizontalAlignment=_accessoryViewHorizontalAlignment - In the implementation block
@property (nonatomic,readonly) UIView * accessibilityTitleView; 
@property (nonatomic,readonly) _UINavigationBarLargeTitleViewLayout * layout;                  //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setAssistants;
-(void)setTitleAttributes:(NSDictionary *)arg1 ;
-(void)adoptLayout:(id)arg1 ;
-(void)finalizeStateFromTransition:(id)arg1 ;
-(void)prepareToRecordToState:(id)arg1 ;
-(NSDictionary *)titleAttributes;
-(UIView *)accessibilityTitleView;
-(void)setAssistant:(_UIPointerInteractionAssistant *)arg1 ;
-(_UIPointerInteractionAssistant *)assistant;
-(void)updateContent;
-(void)adoptNewLayout;
-(id)_effectiveTitle;
-(CGSize)intrinsicContentSize;
-(unsigned long long)accessoryViewHorizontalAlignment;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)clearTransitionContext;
-(UIView *)accessoryView;
-(void)setAlignAccessoryViewToTitleBaseline:(BOOL)arg1 ;
-(unsigned long long)twoLineMode;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(double)restingHeightOfTitleView;
-(id)_newLayout;
-(BOOL)providesExtraSpaceForExcessiveLineHeights;
-(void)layoutSubviews;
-(long long)titleType;
-(BOOL)alignAccessoryViewToTitleBaseline;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_clearAssistants;
-(void)setProvidesExtraSpaceForExcessiveLineHeights:(BOOL)arg1 ;
-(void)recordFromStateForTransition:(id)arg1 ;
-(void)ensureBackButtonTruncationOccursWithContext:(id)arg1 ;
-(NSDictionary *)effectiveTitleAttributes;
-(CGSize)sizeThatFits:(CGSize)arg1 titleType:(long long)arg2 ;
-(id)_titleForCurrentWidth;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(NSArray *)alternateTitles;
-(void)_updateContentAndInvalidate:(BOOL)arg1 ;
-(void)setTwoLineMode:(unsigned long long)arg1 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)setAccessoryViewHorizontalAlignment:(unsigned long long)arg1 ;
-(id)_layoutForMeasurement;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)recordToStateForTransition:(id)arg1 ;
-(void)setTitleType:(long long)arg1 ;
-(NSString *)title;
-(void)setAlternateTitles:(NSArray *)arg1 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(_UINavigationBarLargeTitleViewLayout *)layout;
@end

