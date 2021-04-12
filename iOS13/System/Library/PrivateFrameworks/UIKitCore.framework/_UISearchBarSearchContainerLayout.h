/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	UIOffset _searchFieldBackgroundPositionAdjustment;
	CGRect _searchFieldLayoutFrame;
	CGRect _cancelButtonLayoutFrame;
	CGRect _deleteButtonLayoutFrame;
	CGRect _leftButtonLayoutFrame;
	CGRect _visibleCancelButtonSearchFieldLayoutFrame;

}

@property (assign,nonatomic,__weak) id<_UISearchBarContainerSublayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double naturalBarHeight; 
@property (nonatomic,readonly) double naturalSearchFieldHeight; 
@property (nonatomic,retain) UISearchBarTextField * searchField;                                      //@synthesize searchField=_searchField - In the implementation block
@property (nonatomic,retain) UIView * cancelButton;                                                   //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIView * deleteButton;                                                   //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) UIView * leftButton;                                                     //@synthesize leftButton=_leftButton - In the implementation block
@property (assign,nonatomic) BOOL hasCancelButton; 
@property (assign,nonatomic) BOOL hasDeleteButton; 
@property (assign,nonatomic) BOOL hasLeftButton; 
@property (assign,nonatomic) BOOL allowSearchFieldShrinkage; 
@property (assign,nonatomic) BOOL searchFieldUsesCustomBackgroundImage; 
@property (assign,nonatomic) BOOL searchFieldRespectsReadableWidth; 
@property (assign,nonatomic) double searchBarReadableWidth;                                           //@synthesize searchBarReadableWidth=_searchBarReadableWidth - In the implementation block
@property (assign,nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;                        //@synthesize searchFieldBackgroundPositionAdjustment=_searchFieldBackgroundPositionAdjustment - In the implementation block
@property (nonatomic,readonly) CGRect searchFieldLayoutFrame;                                         //@synthesize searchFieldLayoutFrame=_searchFieldLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect cancelButtonLayoutFrame;                                        //@synthesize cancelButtonLayoutFrame=_cancelButtonLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect deleteButtonLayoutFrame;                                        //@synthesize deleteButtonLayoutFrame=_deleteButtonLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect leftButtonLayoutFrame;                                          //@synthesize leftButtonLayoutFrame=_leftButtonLayoutFrame - In the implementation block
@property (nonatomic,readonly) CGRect visibleCancelButtonSearchFieldLayoutFrame;                      //@synthesize visibleCancelButtonSearchFieldLayoutFrame=_visibleCancelButtonSearchFieldLayoutFrame - In the implementation block
@property (nonatomic,readonly) BOOL searchFieldWidthIsReduced; 
@property (nonatomic,copy) id delegateSearchFieldFrameForProposedFrame;                               //@synthesize delegateSearchFieldFrameForProposedFrame=_delegateSearchFieldFrameForProposedFrame - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<_UISearchBarContainerSublayoutDelegate>)delegate;
-(void)setDelegate:(id<_UISearchBarContainerSublayoutDelegate>)arg1 ;
-(void)updateLayout;
-(UISearchBarTextField *)searchField;
-(void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)arg1 ;
-(UIOffset)searchFieldBackgroundPositionAdjustment;
-(UIView *)cancelButton;
-(void)setCancelButton:(UIView *)arg1 ;
-(UIView *)leftButton;
-(double)naturalBarHeight;
-(void)applyLayout;
-(void)setSearchField:(UISearchBarTextField *)arg1 ;
-(void)setDeleteButton:(UIView *)arg1 ;
-(UIView *)deleteButton;
-(void)setLeftButton:(UIView *)arg1 ;
-(double)naturalSearchFieldHeight;
-(void)setSearchBarReadableWidth:(double)arg1 ;
-(void)setSearchFieldRespectsReadableWidth:(BOOL)arg1 ;
-(void)setHasCancelButton:(BOOL)arg1 ;
-(void)setHasDeleteButton:(BOOL)arg1 ;
-(void)setHasLeftButton:(BOOL)arg1 ;
-(void)setAllowSearchFieldShrinkage:(BOOL)arg1 ;
-(void)setSearchFieldUsesCustomBackgroundImage:(BOOL)arg1 ;
-(void)setDelegateSearchFieldFrameForProposedFrame:(id)arg1 ;
-(BOOL)hasCancelButton;
-(BOOL)hasDeleteButton;
-(BOOL)hasLeftButton;
-(BOOL)allowSearchFieldShrinkage;
-(BOOL)searchFieldUsesCustomBackgroundImage;
-(double)searchBarReadableWidth;
-(CGRect)visibleCancelButtonSearchFieldLayoutFrame;
-(double)searchFieldHeightUpdatingShrinkageAndFadeAlphas;
-(CGRect)searchFieldLayoutFrame;
-(CGRect)leftButtonLayoutFrame;
-(CGRect)deleteButtonLayoutFrame;
-(CGRect)cancelButtonLayoutFrame;
-(BOOL)searchFieldWidthIsReduced;
-(BOOL)searchFieldRespectsReadableWidth;
-(id)delegateSearchFieldFrameForProposedFrame;
@end

