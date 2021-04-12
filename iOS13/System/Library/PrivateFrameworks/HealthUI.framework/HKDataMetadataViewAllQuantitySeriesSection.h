/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKDataMetadataSimpleSection.h>
#import <libobjc.A.dylib/HKQuantitySeriesDataProviderDelegate.h>

@protocol HKDataMetadataViewControllerDelegate;
@class HKSample, NSString;

@interface HKDataMetadataViewAllQuantitySeriesSection : HKDataMetadataSimpleSection <HKQuantitySeriesDataProviderDelegate> {

	/*^block*/id _reloadMetaDataVC;
	HKSample* _sample;
	id<HKDataMetadataViewControllerDelegate> _delegate;

}

@property (retain) HKSample * sample;                                                               //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic,__weak) id<HKDataMetadataViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) id reloadMetaDataVC;                                                               //@synthesize reloadMetaDataVC=_reloadMetaDataVC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HKDataMetadataViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HKDataMetadataViewControllerDelegate>)arg1 ;
-(void)setSample:(HKSample *)arg1 ;
-(HKSample *)sample;
-(unsigned long long)numberOfRowsInSection;
-(id)initWithSample:(id)arg1 delegate:(id)arg2 ;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)sampleDidChange:(id)arg1 ;
-(void)reloadSampleData;
-(void)setReloadMetaDataVC:(id)arg1 ;
-(id)reloadMetaDataVC;
@end

