/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHPerson, PHFace, PHAsset;

@interface PXPeopleFaceTileImageManagerRequest : NSObject {

	BOOL _synchronous;
	PHPerson* _person;
	PHFace* _face;
	PHAsset* _asset;
	long long _deliveryMode;

}

@property (nonatomic,retain) PHFace * face;                       //@synthesize face=_face - In the implementation block
@property (nonatomic,readonly) PHPerson * person;                 //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) PHAsset * asset;                   //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) long long deliveryMode;              //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (assign,nonatomic) BOOL synchronous;                    //@synthesize synchronous=_synchronous - In the implementation block
-(PHPerson *)person;
-(id)initWithPerson:(id)arg1 face:(id)arg2 asset:(id)arg3 ;
-(PHAsset *)asset;
-(void)setFace:(PHFace *)arg1 ;
-(id)initWithFaceTile:(id)arg1 ;
-(BOOL)synchronous;
-(id)description;
-(PHFace *)face;
-(void)setSynchronous:(BOOL)arg1 ;
-(long long)deliveryMode;
-(id)initWithPerson:(id)arg1 ;
-(void)setDeliveryMode:(long long)arg1 ;
@end

