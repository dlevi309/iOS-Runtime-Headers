/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPModelObject;

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject {

	MPModelObject* _model;
	long long _personalizationStyle;

}

@property (nonatomic,readonly) MPModelObject * model;                       //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) long long personalizationStyle;              //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
+(id)lightweightPersonalizationPropertiesForModelClass:(Class)arg1 ;
+(id)_lightweightPersonalizationPropertiesForPlaybackPosition;
+(id)_lightweightPersonalizationPropertiesForStoreAsset;
-(MPModelObject *)model;
-(long long)personalizationStyle;
-(id)initWithModel:(id)arg1 personalizationStyle:(long long)arg2 ;
@end

