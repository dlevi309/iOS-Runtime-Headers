/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SFPrivacyReportGridItem.h>

@protocol SFPrivacyReportGridItemDelegate;
@class UIView, NSLayoutConstraint, UILabel, NSString;

@interface SFPrivacyReportExplanationDetailItemView : UIView <SFPrivacyReportGridItem> {

	UIView* _hairline;
	NSLayoutConstraint* _titleTopConstraint;
	NSLayoutConstraint* _hairlineTopConstraint;
	id<SFPrivacyReportGridItemDelegate> _delegate;
	unsigned long long _gridPosition;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	double _titleLabelTopSpacing;
	double _hairlineTopSpacing;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bodyLabel;                                            //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (assign,nonatomic) double titleLabelTopSpacing;                                      //@synthesize titleLabelTopSpacing=_titleLabelTopSpacing - In the implementation block
@property (assign,nonatomic) double hairlineTopSpacing;                                        //@synthesize hairlineTopSpacing=_hairlineTopSpacing - In the implementation block
@property (assign,nonatomic,__weak) id<SFPrivacyReportGridItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long gridPosition;                                  //@synthesize gridPosition=_gridPosition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SFPrivacyReportGridItemDelegate>)delegate;
-(void)setGridPosition:(unsigned long long)arg1 ;
-(unsigned long long)gridPosition;
-(void)setDelegate:(id<SFPrivacyReportGridItemDelegate>)arg1 ;
-(UILabel *)bodyLabel;
-(void)setTitleLabelTopSpacing:(double)arg1 ;
-(void)setHairlineTopSpacing:(double)arg1 ;
-(void)_updateTopConstraints;
-(double)titleLabelTopSpacing;
-(double)hairlineTopSpacing;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

