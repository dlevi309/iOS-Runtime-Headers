/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UICollectionViewCell.h>

@protocol SBCollectionViewCellDelegate;
@interface SBCollectionViewCell : UICollectionViewCell {

	BOOL _performSetHighlighted;
	BOOL _protectDelayedUnhighlights;
	id<SBCollectionViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL protectDelayedUnhighlights;                               //@synthesize protectDelayedUnhighlights=_protectDelayedUnhighlights - In the implementation block
-(id<SBCollectionViewCellDelegate>)delegate;
-(void)setDelegate:(id<SBCollectionViewCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 afterDelay:(double)arg2 ;
-(void)_performSetHighlighted;
-(void)_didSetHighlighted:(BOOL)arg1 ;
-(BOOL)protectDelayedUnhighlights;
-(void)setProtectDelayedUnhighlights:(BOOL)arg1 ;
@end

