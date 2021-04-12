/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@protocol DDSAssetObserving <NSObject>
@required
-(id)delegate;
-(void)setDelegate:(id)arg1;
-(void)observeAssetTypes:(id)arg1;
-(void)notifyObserversAssetsUpdatedForType:(id)arg1;

@end

