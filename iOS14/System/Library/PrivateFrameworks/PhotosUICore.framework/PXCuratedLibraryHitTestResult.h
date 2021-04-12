/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGHitTestResult.h>

@class PXAssetReference, PXAssetCollectionReference;

@interface PXCuratedLibraryHitTestResult : PXGHitTestResult {

	long long _control;
	PXAssetReference* _assetReference;
	PXAssetCollectionReference* _assetCollectionReference;

}

@property (nonatomic,readonly) long long control;                                                  //@synthesize control=_control - In the implementation block
@property (nonatomic,readonly) PXAssetReference * assetReference;                                  //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionReference * assetCollectionReference;              //@synthesize assetCollectionReference=_assetCollectionReference - In the implementation block
-(PXAssetCollectionReference *)assetCollectionReference;
-(long long)control;
-(id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 ;
-(id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetReference:(id)arg4 ;
-(id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetCollectionReference:(id)arg4 ;
-(id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetReference:(id)arg4 assetCollectionReference:(id)arg5 ;
-(id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userData:(id)arg4 ;
-(PXAssetReference *)assetReference;
@end

