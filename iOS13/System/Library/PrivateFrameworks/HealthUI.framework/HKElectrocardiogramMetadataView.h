/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIView.h>

@protocol HKElectrocardiogramMetadataViewDelegate;
@class HKElectrocardiogram;

@interface HKElectrocardiogramMetadataView : UIView {

	HKElectrocardiogram* _sample;
	id<HKElectrocardiogramMetadataViewDelegate> _delegate;

}

@property (nonatomic,retain) HKElectrocardiogram * sample;                                             //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic,__weak) id<HKElectrocardiogramMetadataViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HKElectrocardiogramMetadataViewDelegate>)delegate;
-(void)setDelegate:(id<HKElectrocardiogramMetadataViewDelegate>)arg1 ;
-(void)setSample:(HKElectrocardiogram *)arg1 ;
-(HKElectrocardiogram *)sample;
-(id)_footerLabel;
-(id)_separatorLine;
-(void)_setupUI;
-(void)detailButtonTapped:(id)arg1 ;
-(id)initWithSample:(id)arg1 delegate:(id)arg2 ;
-(id)_ecgChart;
-(id)_bulletedTextView;
-(id)_sharePDFControl;
-(void)sharedPDFControlTapped:(id)arg1 ;
@end

