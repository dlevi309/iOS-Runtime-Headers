/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <WiFiKitUI/WFNetworkListCell.h>

@class NSLayoutConstraint;

@interface WFBuddyNetworkListCell : WFNetworkListCell {

	NSLayoutConstraint* _trailingImageViewConstraint;
	NSLayoutConstraint* _topLabelConstraint;
	NSLayoutConstraint* _bottomLabelConstraint;

}

@property (assign,nonatomic,__weak) NSLayoutConstraint * trailingImageViewConstraint;              //@synthesize trailingImageViewConstraint=_trailingImageViewConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * topLabelConstraint;                       //@synthesize topLabelConstraint=_topLabelConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomLabelConstraint;                    //@synthesize bottomLabelConstraint=_bottomLabelConstraint - In the implementation block
-(void)layoutSubviews;
-(void)setSubtitle:(id)arg1 ;
-(void)awakeFromNib;
-(NSLayoutConstraint *)trailingImageViewConstraint;
-(void)setTrailingImageViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topLabelConstraint;
-(void)setTopLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomLabelConstraint;
-(void)setBottomLabelConstraint:(NSLayoutConstraint *)arg1 ;
@end

