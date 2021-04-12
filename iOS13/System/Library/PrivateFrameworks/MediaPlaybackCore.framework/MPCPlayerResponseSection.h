/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class MPCPlayerResponse, MPModelGenericObject;

@interface MPCPlayerResponseSection : NSObject {

	MPCPlayerResponse* _response;
	MPModelGenericObject* _metadataObject;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * metadataObject;              //@synthesize metadataObject=_metadataObject - In the implementation block
-(id)remove;
-(MPCPlayerResponse *)response;
-(MPModelGenericObject *)metadataObject;
-(id)initWithModelGenericObject:(id)arg1 response:(id)arg2 ;
@end

