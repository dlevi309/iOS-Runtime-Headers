/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VisualLocalization.framework/VisualLocalization
*/


@protocol VLLocalizationDataProvider <NSObject>
@property (assign,nonatomic,__weak) id<VLLocalizationDataProviderDelegate> delegate; 
@required
-(id<VLLocalizationDataProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)fileURLForKey:(const SCD_Struct_VL8*)arg1 error:(id*)arg2;
-(void)determineAvailabilityForCoordinate:(const SCD_Struct_VL6*)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3;

@end

