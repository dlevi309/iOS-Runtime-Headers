/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HKSample *)sample;
-(id<HKDataMetadataViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HKDataMetadataViewControllerDelegate>)arg1 ;
-(void)setSample:(HKSample *)arg1 ;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)sampleDidChange:(id)arg1 ;
-(void)reloadSampleData;
-(id)reloadMetaDataVC;
-(id)initWithSample:(id)arg1 delegate:(id)arg2 ;
-(void)setReloadMetaDataVC:(id)arg1 ;
@end

