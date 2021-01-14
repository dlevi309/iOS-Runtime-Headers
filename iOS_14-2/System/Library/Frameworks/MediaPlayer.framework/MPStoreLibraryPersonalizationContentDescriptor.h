/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_lightweightPersonalizationPropertiesForStoreAsset;
+(id)_lightweightPersonalizationPropertiesForPlaybackPosition;
-(id)initWithModel:(id)arg1 personalizationStyle:(long long)arg2 ;
-(MPModelObject *)model;
-(long long)personalizationStyle;
@end

