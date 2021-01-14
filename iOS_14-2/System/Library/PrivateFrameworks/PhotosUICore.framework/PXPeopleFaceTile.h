/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHPerson, PHFace, PHAsset;

@interface PXPeopleFaceTile : NSObject {

	PHPerson* _person;
	PHFace* _face;
	PHAsset* _asset;

}

@property (nonatomic,readonly) PHPerson * person;              //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) PHFace * face;                  //@synthesize face=_face - In the implementation block
@property (nonatomic,readonly) PHAsset * asset;                //@synthesize asset=_asset - In the implementation block
@property (readonly) BOOL isUserDefined; 
-(PHPerson *)person;
-(PHAsset *)asset;
-(id)description;
-(PHFace *)face;
-(BOOL)isUserDefined;
-(id)initWithFace:(id)arg1 asset:(id)arg2 person:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

