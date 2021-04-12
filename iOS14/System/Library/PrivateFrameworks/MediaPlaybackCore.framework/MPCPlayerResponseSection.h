/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class MPCPlayerResponse, MPModelGenericObject;

@interface MPCPlayerResponseSection : NSObject {

	BOOL _autoPlaySection;
	MPCPlayerResponse* _response;
	MPModelGenericObject* _metadataObject;

}

@property (getter=isAutoPlaySection,nonatomic,readonly) BOOL autoPlaySection;              //@synthesize autoPlaySection=_autoPlaySection - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                        //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * metadataObject;                      //@synthesize metadataObject=_metadataObject - In the implementation block
-(id)remove;
-(MPCPlayerResponse *)response;
-(id)initWithModelGenericObject:(id)arg1 sectionIndex:(long long)arg2 response:(id)arg3 ;
-(MPModelGenericObject *)metadataObject;
-(BOOL)isAutoPlaySection;
@end

