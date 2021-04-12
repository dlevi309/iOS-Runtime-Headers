/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_constraintsForInsettingLabelsViewLeadingAndTrailingHorizontalEdgeReferenceExact:(BOOL)arg1 ;
-(id)_constraintsForInsettingLabelsViewLeadingAndTrailingToImageViewsExact:(BOOL)arg1 ;
-(id)_constraintForBaselineAligningOrVerticallyCenteringImageViewToLabelsView:(id)arg1 ;
-(id)_constraintsForInsettingImageViewsLeadingAndTrailingEdge;
-(id)_constraintsToEnsureContainerHeightTallEnoughForViews:(id)arg1 ;
-(void)_updateDisplayedViewsConstraintsVisualStyleConstants;
-(id)_constraintsForInsettingLabelsViewLeadingAndTrailing;
-(void)_reloadHierarchyWithViewsToDisplayWhenContentsVisible;
-(id)_constraintsForHorizontallyCenteringLabelsView;
-(void)_loadConstraintsForLabelsAndImagesDisplay;
-(id)_constraintForVerticallyCenteringLabelsView;
-(id)initWithAction:(id)arg1 ;
-(void)_reloadViewsToDisplayWhenContentsVisible;
-(void)_invalidateDisplayedViewsConstraints;
-(void)_loadConstraintsForLabelsOnlyDisplay;
-(NSArray *)displayedViewsPositioningConstraints;
-(BOOL)_displayedViewsConstraintsNeedsLoading;
-(void)_activateDisplayedViewsConstraints;
-(NSArray *)displayedViewsSpacingConstraints;
-(_UIInterfaceActionLabelsPropertyView *)labelsView;
-(void)setViewsToDisplayWhenContentsVisible:(NSSet *)arg1 ;
-(void)_loadConstraintsForDisplayedViews;
-(void)_applyVisualStyleToDisplayedViews;
-(NSSet *)viewsToDisplayWhenContentsVisible;
-(void)updateConstraints;
-(void)loadContents;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2 ;
-(BOOL)_isDisplayingTrailingImageView;
-(BOOL)_isDisplayingLeadingImageView;
-(NSSet *)displayedViews;
-(void)_removeAllDisplayedViews;
-(_UIInterfaceActionImagePropertyView *)leadingImageView;
-(id)_horizontalEdgeReference;
-(_UIInterfaceActionImagePropertyView *)trailingImageView;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(void)_applyVisualStyle;
-(void)_arrangeDisplayedViews;
-(BOOL)_hasLoadedContents;
-(void)updateContentsInsertedIntoHierarchy;
-(void)setDisplayedViews:(NSSet *)arg1 ;
@end

