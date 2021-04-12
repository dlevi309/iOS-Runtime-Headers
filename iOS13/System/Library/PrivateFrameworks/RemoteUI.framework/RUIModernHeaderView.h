/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <OnBoardingKit/OBHeaderView.h>
#import <libobjc.A.dylib/RUIHeader.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface RUIModernHeaderView : OBHeaderView <RUIHeader> {

	UILabel* _headerLabel;
	UILabel* _detailLabel;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) UILabel * headerLabel;                              //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                              //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(id)initWithTitle:(id)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(double)bottomPadding;
-(double)iconToHeaderLabelPadding;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(double)iconHeight;
-(double)calculateHeight;
@end

