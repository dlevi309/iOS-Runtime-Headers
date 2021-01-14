/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPModelResponse.h>

@class MPModelResponse, NSData, MPCModelGenericAVItemTimedMetadataStreamFields, MPSectionedCollection;

@interface MPCModelGenericAVItemTimedMetadataResponse : MPModelResponse {

	MPModelResponse* _personalizationResponse;
	NSData* _adamIDData;
	MPCModelGenericAVItemTimedMetadataStreamFields* _streamFields;
	MPSectionedCollection* _unpersonalizedContentDescriptors;

}

@property (nonatomic,copy) NSData * adamIDData;                                                          //@synthesize adamIDData=_adamIDData - In the implementation block
@property (nonatomic,retain) MPCModelGenericAVItemTimedMetadataStreamFields * streamFields;              //@synthesize streamFields=_streamFields - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * unpersonalizedContentDescriptors;                     //@synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors - In the implementation block
-(void)setUnpersonalizedContentDescriptors:(MPSectionedCollection *)arg1 ;
-(MPSectionedCollection *)unpersonalizedContentDescriptors;
-(void)dealloc;
-(void)_personalizationResponseDidInvalidateNotification:(id)arg1 ;
-(id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2 ;
-(NSData *)adamIDData;
-(void)setAdamIDData:(NSData *)arg1 ;
-(MPCModelGenericAVItemTimedMetadataStreamFields *)streamFields;
-(void)setStreamFields:(MPCModelGenericAVItemTimedMetadataStreamFields *)arg1 ;
@end

