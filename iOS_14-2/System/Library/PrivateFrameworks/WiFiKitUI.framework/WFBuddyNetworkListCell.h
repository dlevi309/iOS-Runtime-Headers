/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)awakeFromNib;
-(void)setSubtitle:(id)arg1 ;
-(NSLayoutConstraint *)bottomLabelConstraint;
-(void)setBottomLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topLabelConstraint;
-(void)setTopLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)trailingImageViewConstraint;
-(void)setTrailingImageViewConstraint:(NSLayoutConstraint *)arg1 ;
@end

