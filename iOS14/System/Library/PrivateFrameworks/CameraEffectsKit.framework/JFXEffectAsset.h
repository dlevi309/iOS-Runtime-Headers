/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class NSString, NSURL, JFXEffectAssetAttributes;

@interface JFXEffectAsset : NSObject {

	NSString* _assetID;
	NSURL* _localURL;
	JFXEffectAssetAttributes* _attributes;

}

@property (nonatomic,readonly) NSString * assetID;                                 //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) NSURL * localURL;                                   //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,readonly) JFXEffectAssetAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)firstAssetInAssets:(id)arg1 matchingFilterAttributes:(id)arg2 ;
-(NSURL *)localURL;
-(NSString *)assetID;
-(JFXEffectAssetAttributes *)attributes;
-(id)description;
-(id)initWithAssetID:(id)arg1 URL:(id)arg2 copyOfAttributes:(id)arg3 ;
@end

