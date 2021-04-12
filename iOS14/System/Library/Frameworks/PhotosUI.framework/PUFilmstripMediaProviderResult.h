/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class UIImage, NSDictionary, PUFilmstripAsset;

@interface PUFilmstripMediaProviderResult : NSObject {

	BOOL _isReadyForDelivery;
	UIImage* _image;
	NSDictionary* _resultInfo;
	long long _requestNumber;
	PUFilmstripAsset* _asset;
	CGSize _targetSize;
	SCD_Struct_PH4 _actualTime;

}

@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSDictionary * resultInfo;              //@synthesize resultInfo=_resultInfo - In the implementation block
@property (assign,nonatomic) long long requestNumber;                //@synthesize requestNumber=_requestNumber - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                      //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 actualTime;              //@synthesize actualTime=_actualTime - In the implementation block
@property (nonatomic,retain) PUFilmstripAsset * asset;               //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL isReadyForDelivery;                //@synthesize isReadyForDelivery=_isReadyForDelivery - In the implementation block
-(CGSize)targetSize;
-(void)setAsset:(PUFilmstripAsset *)arg1 ;
-(void)setTargetSize:(CGSize)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(PUFilmstripAsset *)asset;
-(void)setRequestNumber:(long long)arg1 ;
-(void)setActualTime:(SCD_Struct_PH4)arg1 ;
-(BOOL)isReadyForDelivery;
-(void)setIsReadyForDelivery:(BOOL)arg1 ;
-(UIImage *)image;
-(void)setResultInfo:(NSDictionary *)arg1 ;
-(long long)requestNumber;
-(NSDictionary *)resultInfo;
-(SCD_Struct_PH4)actualTime;
@end

