/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<TVCollectionViewLockupCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)setDelegate:(id<TVCollectionViewLockupCellDelegate>)arg1 ;
-(BOOL)_descendantsShouldHighlight;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)_handleSelect;
-(id)_selectingView;
-(id)layeredImageContainerLayer;
-(id)selectingView;
-(void)_clearPressState;
-(void)_showPressState;
@end

