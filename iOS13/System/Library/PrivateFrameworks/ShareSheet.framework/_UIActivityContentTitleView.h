/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <UIKitCore/_UINavigationBarTitleView.h>

@class LPLinkView, NSLayoutConstraint;

@interface _UIActivityContentTitleView : _UINavigationBarTitleView {

	LPLinkView* _linkView;
	NSLayoutConstraint* _linkTrailingAnchor;

}

@property (nonatomic,retain) NSLayoutConstraint * linkTrailingAnchor;              //@synthesize linkTrailingAnchor=_linkTrailingAnchor - In the implementation block
@property (nonatomic,retain) LPLinkView * linkView;                                //@synthesize linkView=_linkView - In the implementation block
-(void)updateConstraints;
-(void)contentDidChange;
-(LPLinkView *)linkView;
-(void)setLinkTrailingAnchor:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)linkTrailingAnchor;
-(void)setLinkView:(LPLinkView *)arg1 ;
@end

