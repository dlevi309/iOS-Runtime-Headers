/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPModelRequest.h>

@class MPCModelGenericAVItemTimedMetadataResponse, MPModelGenericObject, ICStoreRequestContext, NSArray;

@interface MPCModelGenericAVItemTimedMetadataRequest : MPModelRequest {

	MPCModelGenericAVItemTimedMetadataResponse* _previousResponse;
	MPModelGenericObject* _genericObject;
	ICStoreRequestContext* _storeRequestContext;
	NSArray* _timedMetadataGroups;

}

@property (nonatomic,retain) MPCModelGenericAVItemTimedMetadataResponse * previousResponse;              //@synthesize previousResponse=_previousResponse - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * genericObject;                                     //@synthesize genericObject=_genericObject - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * storeRequestContext;                         //@synthesize storeRequestContext=_storeRequestContext - In the implementation block
@property (nonatomic,copy,readonly) NSArray * timedMetadataGroups;                                       //@synthesize timedMetadataGroups=_timedMetadataGroups - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataIdentifiers;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(ICStoreRequestContext *)storeRequestContext;
-(void)setPreviousResponse:(MPCModelGenericAVItemTimedMetadataResponse *)arg1 ;
-(MPCModelGenericAVItemTimedMetadataResponse *)previousResponse;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithGenericObject:(id)arg1 timedMetadataGroups:(id)arg2 storeRequestContext:(id)arg3 ;
-(MPModelGenericObject *)genericObject;
-(NSArray *)timedMetadataGroups;
@end

