/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIInterfaceActionRepresentationView.h>
#import <UIKit/UIInterfaceActionDisplayPropertyObserver.h>

@class _UIInterfaceActionImagePropertyView, _UIInterfaceActionLabelsPropertyView, NSSet, NSArray, NSString;

@interface _UIInterfaceActionSystemRepresentationView : UIInterfaceActionRepresentationView <UIInterfaceActionDisplayPropertyObserver> {

	_UIInterfaceActionImagePropertyView* _leadingImageView;
	_UIInterfaceActionImagePropertyView* _trailingImageView;
	_UIInterfaceActionLabelsPropertyView* _labelsView;
	NSSet* _viewsToDisplayWhenContentsVisible;
	NSSet* _displayedViews;
	NSArray* _displayedViewsSpacingConstraints;
	NSArray* _displayedViewsPositioningConstraints;

}

@property (nonatomic,readonly) _UIInterfaceActionImagePropertyView * leadingImageView;               //@synthesize leadingImageView=_leadingImageView - In the implementation block
@property (nonatomic,readonly) _UIInterfaceActionImagePropertyView * trailingImageView;              //@synthesize trailingImageView=_trailingImageView - In the implementation block
@property (nonatomic,readonly) _UIInterfaceActionLabelsPropertyView * labelsView;                    //@synthesize labelsView=_labelsView - In the implementation block
@property (nonatomic,retain) NSSet * viewsToDisplayWhenContentsVisible;                              //@synthesize viewsToDisplayWhenContentsVisible=_viewsToDisplayWhenContentsVisible - In the implementation block
@property (nonatomic,retain) NSSet * displayedViews;                                                 //@synthesize displayedViews=_displayedViews - In the implementation block
@property (nonatomic,readonly) NSArray * displayedViewsSpacingConstraints;                           //@synthesize displayedViewsSpacingConstraints=_displayedViewsSpacingConstraints - In the implementation block
@property (nonatomic,readonly) NSArray * displayedViewsPositioningConstraints;                       //@synthesize displayedViewsPositioningConstraints=_displayedViewsPositioningConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAction:(id)arg1 ;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2 ;
-(void)_applyVisualStyle;
-(void)updateConstraints;
-(void)updateContentsInsertedIntoHierarchy;
-(void)loadContents;
-(void)_invalidateDisplayedViewsConstraints;
-(void)_reloadViewsToDisplayWhenContentsVisible;
-(void)_arrangeDisplayedViews;
-(void)_loadConstraintsForDisplayedViews;
-(void)_applyVisualStyleToDisplayedViews;
-(void)_updateDisplayedViewsConstraintsVisualStyleConstants;
-(BOOL)_hasLoadedContents;
-(void)setViewsToDisplayWhenContentsVisible:(NSSet *)arg1 ;
-(void)_removeAllDisplayedViews;
-(void)_reloadHierarchyWithViewsToDisplayWhenContentsVisible;
-(void)_loadConstraintsForLabelsOnlyDisplay;
-(void)_loadConstraintsForLabelsAndImagesDisplay;
-(void)_activateDisplayedViewsConstraints;
-(id)_constraintForVerticallyCenteringLabelsView;
-(id)_constraintsToEnsureContainerHeightTallEnoughForViews:(id)arg1 ;
-(id)_constraintsForInsettingLabelsViewLeadingAndTrailing;
-(BOOL)_isDisplayingLeadingImageView;
-(id)_constraintForBaselineAligningOrVerticallyCenteringImageViewToLabelsView:(id)arg1 ;
-(BOOL)_isDisplayingTrailingImageView;
-(id)_constraintsForInsettingImageViewsLeadingAndTrailingEdge;
-(id)_constraintsForHorizontallyCenteringLabelsView;
-(id)_constraintsForInsettingLabelsViewLeadingAndTrailingHorizontalEdgeReferenceExact:(BOOL)arg1 ;
-(id)_constraintsForInsettingLabelsViewLeadingAndTrailingToImageViewsExact:(BOOL)arg1 ;
-(id)_horizontalEdgeReference;
-(BOOL)_displayedViewsConstraintsNeedsLoading;
-(_UIInterfaceActionImagePropertyView *)leadingImageView;
-(_UIInterfaceActionImagePropertyView *)trailingImageView;
-(_UIInterfaceActionLabelsPropertyView *)labelsView;
-(NSSet *)viewsToDisplayWhenContentsVisible;
-(NSSet *)displayedViews;
-(void)setDisplayedViews:(NSSet *)arg1 ;
-(NSArray *)displayedViewsSpacingConstraints;
-(NSArray *)displayedViewsPositioningConstraints;
@end

