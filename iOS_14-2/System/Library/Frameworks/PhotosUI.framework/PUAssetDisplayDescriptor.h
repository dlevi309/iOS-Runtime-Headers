/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class PUAssetReference, NSDate;

@interface PUAssetDisplayDescriptor : NSObject {

	PUAssetReference* _assetReference;
	NSDate* _modifiedAfterDate;
	SCD_Struct_PH4 _videoSeekTime;

}

@property (nonatomic,readonly) PUAssetReference * assetReference;              //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH4 videoSeekTime;                   //@synthesize videoSeekTime=_videoSeekTime - In the implementation block
@property (nonatomic,readonly) NSDate * modifiedAfterDate;                     //@synthesize modifiedAfterDate=_modifiedAfterDate - In the implementation block
+(id)assetDisplayDescriptorForSimpleNavigationToAssetReference:(id)arg1 ;
-(id)init;
-(PUAssetReference *)assetReference;
-(id)initWithAssetReference:(id)arg1 modifiedAfterDate:(id)arg2 videoSeekTime:(SCD_Struct_PH4)arg3 ;
-(SCD_Struct_PH4)videoSeekTime;
-(NSDate *)modifiedAfterDate;
@end

