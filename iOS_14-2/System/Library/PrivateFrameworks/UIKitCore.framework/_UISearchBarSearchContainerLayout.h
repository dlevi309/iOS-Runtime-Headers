/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISearchBarLayoutBase.h>

@protocol _UISearchBarContainerSublayoutDelegate;
@class UISearchBarTextField, UIView;

@interface _UISearchBarSearchContainerLayout : _UISearchBarLayoutBase {

	struct {
		unsigned hasCancelButton : 1;
		unsigned hasDeleteButton : 1;
		unsigned hasLeftButton : 1;
		unsigned allowSearchFieldShrinkage : 1;
		unsigned searchFieldUsesCustomBackgroundImage : 1;
		unsigned searchFieldEffectivelySupportsDynamicType : 1;
		unsigned searchFieldRespectsReadableWidth : 1;
		unsigned searchFieldWidthIsReduced : 1;
	}  _searchContainerLayoutFlags;
	double _searchFieldForegroundFadeAlpha;
	double _searchFieldBackgroundFadeAlpha;
	id<_UISearchBarContainerSublayoutDelegate> _delegate;
	UISearchBarTextField* _searchField;
	UIView* _cancelButton;
	UIView* _deleteButton;
	UIView* _leftButton;
	double _searchBarReadableWidth;
	/*^block*/id _delegateSearchFieldFrameForProposedFrame;
	/*^block*/id _layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback;
	double _additionalPaddingForCancelButtonAtLeadingEdge;
	UIOffset _searchFieldBackgroundPositionAdjustment;
	CGRect _searchFieldLayoutFrame;
	CGRect _cancelButtonLayoutFrame;
	CGRect _deleteButtonLayoutFrame;
	CGRect _leftButtonLayoutFrame;
	CGRect _visibleCancelButtonSearchFieldLayoutFrame;

}

@property (assign,nonatomic,__weak) id<_UISearchBarContainerSublayoutDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double naturalBarHeight; 
@property (nonatomic,readonly) double naturalSearchFieldHeight; 
@property (nonatomic,retain) UISearchBarTextField * searchField;                                                      //@synthesize searchField=_searchField - In the implementation block
@property (nonatomic,retain) UIView * cancelButton;                                                                   //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIView * deleteButton;                                                                   //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) UIView * leftButton;                                                                     //@synthesize leftButton=_leftButton - In the implementation block
@property (assign,nonatomic) BOOL hasCancelButton; 
@property (assign,nonatomic) BOOL hasDeleteButton; 
@property (assign,nonatomic) BOOL hasLeftButton; 
@property (assign,nonatomic) BOOL allowSearchFieldShrinkage; 
@property (assign,nonatomic) BOOL searchFieldUsesCustomBackgroundImage; 
@property (assign,nonatomic) BOOL searchFieldEffectivelySupportsDynamicType; 
@property (assign,nonatomic) BOOL searchFieldRespectsReadableWidth; 
@property (assign,nonatomic) double searchBarReadableWidth;                                                           //@synthesize searchBarReadableWidth=_searchBarReadableWidth - In the implementation block
@property (assign,nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;                                        //@synthesize searchFieldBackgroundPositionAdjustment=_searchFieldBackgroundPositionAdjustment - In the implementation block
@property (nonatomic,readonly) CGRect searchFieldLayoutFrame;                                                         //@synthesize searchFieldLayoutFrame=_searchFieldLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect cancelButtonLayoutFrame;                                                        //@synthesize cancelButtonLayoutFrame=_cancelButtonLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect deleteButtonLayoutFrame;                                                        //@synthesize deleteButtonLayoutFrame=_deleteButtonLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect leftButtonLayoutFrame;                                                          //@synthesize leftButtonLayoutFrame=_leftButtonLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect visibleCancelButtonSearchFieldLayoutFrame;                                      //@synthesize visibleCancelButtonSearchFieldLayoutFrame=_visibleCancelButtonSearchFieldLayoutFrame - In the implementation block
@property (nonatomic,readonly) BOOL searchFieldWidthIsReduced; 
@property (nonatomic,copy) id delegateSearchFieldFrameForProposedFrame;                                               //@synthesize delegateSearchFieldFrameForProposedFrame=_delegateSearchFieldFrameForProposedFrame - In the implementation block
@property (nonatomic,copy) id layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback;              //@synthesize layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback=_layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback - In the implementation block
@property (assign,nonatomic) double additionalPaddingForCancelButtonAtLeadingEdge;                                    //@synthesize additionalPaddingForCancelButtonAtLeadingEdge=_additionalPaddingForCancelButtonAtLeadingEdge - In the implementation block
-(void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)arg1 ;
-(void)applyLayout;
-(void)setLayoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback:(id)arg1 ;
-(UIView *)leftButton;
-(void)setHasLeftButton:(BOOL)arg1 ;
-(void)updateLayout;
-(CGRect)searchFieldLayoutFrame;
-(UIView *)cancelButton;
-(void)setSearchBarReadableWidth:(double)arg1 ;
-(void)setCancelButton:(UIView *)arg1 ;
-(void)setAllowSearchFieldShrinkage:(BOOL)arg1 ;
-(double)searchFieldHeightUpdatingShrinkageAndFadeAlphas;
-(void)setHasCancelButton:(BOOL)arg1 ;
-(double)naturalBarHeight;
-(double)additionalPaddingForCancelButtonAtLeadingEdge;
-(void)setSearchField:(UISearchBarTextField *)arg1 ;
-(void)sendWillLayoutSubviewsForSearchFieldContainerView:(id)arg1 ;
-(UISearchBarTextField *)searchField;
-(id<_UISearchBarContainerSublayoutDelegate>)delegate;
-(id)layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback;
-(BOOL)searchFieldWidthIsReduced;
-(UIOffset)searchFieldBackgroundPositionAdjustment;
-(void)setSearchFieldRespectsReadableWidth:(BOOL)arg1 ;
-(void)setDeleteButton:(UIView *)arg1 ;
-(BOOL)searchFieldUsesCustomBackgroundImage;
-(BOOL)searchFieldEffectivelySupportsDynamicType;
-(CGRect)deleteButtonLayoutFrame;
-(void)setAdditionalPaddingForCancelButtonAtLeadingEdge:(double)arg1 ;
-(double)searchBarReadableWidth;
-(BOOL)searchFieldRespectsReadableWidth;
-(void)setDelegate:(id<_UISearchBarContainerSublayoutDelegate>)arg1 ;
-(void)setSearchFieldUsesCustomBackgroundImage:(BOOL)arg1 ;
-(BOOL)hasCancelButton;
-(CGRect)visibleCancelButtonSearchFieldLayoutFrame;
-(BOOL)allowSearchFieldShrinkage;
-(void)setDelegateSearchFieldFrameForProposedFrame:(id)arg1 ;
-(double)naturalSearchFieldHeight;
-(UIView *)deleteButton;
-(void)setSearchFieldEffectivelySupportsDynamicType:(BOOL)arg1 ;
-(CGRect)cancelButtonLayoutFrame;
-(id)delegateSearchFieldFrameForProposedFrame;
-(void)setLeftButton:(UIView *)arg1 ;
-(void)setHasDeleteButton:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)leftButtonLayoutFrame;
-(BOOL)hasDeleteButton;
-(BOOL)hasLeftButton;
@end

