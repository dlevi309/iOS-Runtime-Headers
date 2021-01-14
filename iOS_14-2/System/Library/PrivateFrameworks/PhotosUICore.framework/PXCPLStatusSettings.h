/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXCPLStatusSettings : PXSettings {

	BOOL _cloudQuotaOfferIncludeAssetCounts;
	long long _cloudQuotaOfferLevel;

}

@property (assign,nonatomic) long long cloudQuotaOfferLevel;                      //@synthesize cloudQuotaOfferLevel=_cloudQuotaOfferLevel - In the implementation block
@property (assign,nonatomic) BOOL cloudQuotaOfferIncludeAssetCounts;              //@synthesize cloudQuotaOfferIncludeAssetCounts=_cloudQuotaOfferIncludeAssetCounts - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setCloudQuotaOfferIncludeAssetCounts:(BOOL)arg1 ;
-(BOOL)cloudQuotaOfferIncludeAssetCounts;
-(long long)cloudQuotaOfferLevel;
-(void)setCloudQuotaOfferLevel:(long long)arg1 ;
@end

