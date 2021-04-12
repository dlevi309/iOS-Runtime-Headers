/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <DataDeliveryServices/DDSTimedAnalytic.h>

@class DDSAsset;

@interface DDSAssetDownloadAnalytic : DDSTimedAnalytic {

	DDSAsset* _asset;

}

@property (nonatomic,retain) DDSAsset * asset;              //@synthesize asset=_asset - In the implementation block
-(void)setAsset:(DDSAsset *)arg1 ;
-(id)init;
-(DDSAsset *)asset;
-(id)initWithAsset:(id)arg1 ;
@end

