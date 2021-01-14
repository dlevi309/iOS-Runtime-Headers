/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HKElectrocardiogram *)sample;
-(id<HKElectrocardiogramMetadataViewDelegate>)delegate;
-(id)_footerLabel;
-(void)detailButtonTapped:(id)arg1 ;
-(id)_separatorLine;
-(void)setDelegate:(id<HKElectrocardiogramMetadataViewDelegate>)arg1 ;
-(void)setSample:(HKElectrocardiogram *)arg1 ;
-(void)_setupUIWithActiveAlgorithmVersion:(long long)arg1 ;
-(id)_ecgChart;
-(id)_bulletedTextView;
-(id)_sharePDFControl;
-(void)sharedPDFControlTapped:(id)arg1 ;
-(id)initWithSample:(id)arg1 activeAlgorithmVersion:(long long)arg2 delegate:(id)arg3 ;
@end

