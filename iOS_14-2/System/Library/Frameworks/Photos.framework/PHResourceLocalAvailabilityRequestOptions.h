/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@interface PHResourceLocalAvailabilityRequestOptions : NSObject {

	BOOL _treatLivePhotoAsStill;
	BOOL _dontAllowRAW;
	BOOL _includeAllAssetResources;

}

@property (assign,nonatomic) BOOL treatLivePhotoAsStill;                 //@synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill - In the implementation block
@property (assign,nonatomic) BOOL dontAllowRAW;                          //@synthesize dontAllowRAW=_dontAllowRAW - In the implementation block
@property (assign,nonatomic) BOOL includeAllAssetResources;              //@synthesize includeAllAssetResources=_includeAllAssetResources - In the implementation block
-(id)description;
-(BOOL)dontAllowRAW;
-(BOOL)includeAllAssetResources;
-(void)setIncludeAllAssetResources:(BOOL)arg1 ;
-(BOOL)treatLivePhotoAsStill;
-(void)setTreatLivePhotoAsStill:(BOOL)arg1 ;
-(void)setDontAllowRAW:(BOOL)arg1 ;
@end

