/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SFPrivacyReportGridItem.h>

@protocol SFPrivacyReportGridItemDelegate;
@class UIView, UILabel, NSString;

@interface SFPrivacyReportOverviewCellContentView : UIView <SFPrivacyReportGridItem> {

	UIView* _topHairline;
	UIView* _bottomHairline;
	UIView* _trailingHairline;
	BOOL _usesInsetStyle;
	id<SFPrivacyReportGridItemDelegate> _delegate;
	unsigned long long _gridPosition;
	UILabel* _reportTitleLabel;
	UILabel* _reportSubtitleLabel;
	double _maxWidth;

}

@property (nonatomic,readonly) UILabel * reportTitleLabel;                                     //@synthesize reportTitleLabel=_reportTitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * reportSubtitleLabel;                                  //@synthesize reportSubtitleLabel=_reportSubtitleLabel - In the implementation block
@property (assign,nonatomic) double maxWidth;                                                  //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) BOOL usesInsetStyle;                                              //@synthesize usesInsetStyle=_usesInsetStyle - In the implementation block
@property (assign,nonatomic,__weak) id<SFPrivacyReportGridItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long gridPosition;                                  //@synthesize gridPosition=_gridPosition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SFPrivacyReportGridItemDelegate>)delegate;
-(void)setGridPosition:(unsigned long long)arg1 ;
-(UILabel *)reportTitleLabel;
-(UILabel *)reportSubtitleLabel;
-(BOOL)usesInsetStyle;
-(void)_updateHairlinesIfNeeded;
-(unsigned long long)gridPosition;
-(double)maxWidth;
-(void)setDelegate:(id<SFPrivacyReportGridItemDelegate>)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setUsesInsetStyle:(BOOL)arg1 ;
-(void)_updateLayoutMargins;
-(void)setMaxWidth:(double)arg1 ;
@end

