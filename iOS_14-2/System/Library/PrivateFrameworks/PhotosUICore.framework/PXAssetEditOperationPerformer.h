/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXDisplayAsset;
@class NSString, NSProgress;

@interface PXAssetEditOperationPerformer : NSObject {

	NSString* _type;
	id<PXDisplayAsset> _asset;
	NSProgress* _progress;

}

@property (nonatomic,copy,readonly) NSString * type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                 //@synthesize progress=_progress - In the implementation block
-(NSProgress *)progress;
-(id)init;
-(id<PXDisplayAsset>)asset;
-(id)initWithEditOperationType:(id)arg1 asset:(id)arg2 ;
-(void)performEditOperationWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)type;
@end

