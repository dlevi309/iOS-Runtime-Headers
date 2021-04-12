/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(MPSectionedCollection *)unpersonalizedContentDescriptors;
-(void)setUnpersonalizedContentDescriptors:(MPSectionedCollection *)arg1 ;
-(void)_personalizationResponseDidInvalidateNotification:(id)arg1 ;
-(id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2 ;
-(NSData *)adamIDData;
-(void)setAdamIDData:(NSData *)arg1 ;
-(MPCModelGenericAVItemTimedMetadataStreamFields *)streamFields;
-(void)setStreamFields:(MPCModelGenericAVItemTimedMetadataStreamFields *)arg1 ;
@end

