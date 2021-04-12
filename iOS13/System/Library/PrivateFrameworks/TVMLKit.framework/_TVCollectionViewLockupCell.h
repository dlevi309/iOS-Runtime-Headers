/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVContainerCollectionViewCell.h>
#import <TVMLKit/TVAuxiliaryViewSelecting.h>

@protocol TVAuxiliaryViewSelecting, TVCollectionViewLockupCellDelegate;
@class UIView, NSString;

@interface _TVCollectionViewLockupCell : TVContainerCollectionViewCell <TVAuxiliaryViewSelecting> {

	BOOL _pressIsAnimating;
	UIView*<TVAuxiliaryViewSelecting> __selectingView;
	BOOL _unpressOnEndAnimating;
	struct {
		BOOL respondsToDidUnfocus;
		BOOL respondsToDidSelect;
		BOOL respondsToLayeredImageContainerLayerWithinCollectionViewCell;
	}  _delegateFlags;
	id<TVCollectionViewLockupCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVCollectionViewLockupCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TVCollectionViewLockupCellDelegate>)delegate;
-(void)setDelegate:(id<TVCollectionViewLockupCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(BOOL)_descendantsShouldHighlight;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)_handleSelect;
-(id)_selectingView;
-(id)layeredImageContainerLayer;
-(id)selectingView;
-(void)_clearPressState;
-(void)_showPressState;
@end

