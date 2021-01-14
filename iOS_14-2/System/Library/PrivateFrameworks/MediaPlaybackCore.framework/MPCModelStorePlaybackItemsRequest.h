/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPModelRequest.h>
#import <libobjc.A.dylib/MPCModelPlaybackRequest.h>
#import <libobjc.A.dylib/MPCModelPlaybackRequestEnvironmentConsuming.h>
#import <libobjc.A.dylib/MPModelRequestDetailedKeepLocalStatusRequesting.h>
#import <libobjc.A.dylib/MPCModelRequestRTCReporting.h>
#import <libobjc.A.dylib/MPCModelStorePreviousRequestStoring.h>

@class NSString, MPModelResponse, MPCPlaybackRequestEnvironment, MPSectionedCollection, NSArray;

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequest, MPCModelPlaybackRequestEnvironmentConsuming, MPModelRequestDetailedKeepLocalStatusRequesting, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring> {

	BOOL _shouldBatchResultsWithPlaceholderObjects;
	BOOL _wantsDetailedKeepLocalRequestableResponse;
	BOOL _allowLocalEquivalencies;
	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	MPModelResponse* _previousResponse;
	NSString* _clientIdentifier;
	MPSectionedCollection* _sectionedModelObjects;
	NSArray* _storeIDs;
	NSArray* _playbackPrioritizedIndexPaths;

}

@property (nonatomic,copy) NSArray * playbackPrioritizedIndexPaths;                                 //@synthesize playbackPrioritizedIndexPaths=_playbackPrioritizedIndexPaths - In the implementation block
@property (nonatomic,retain) MPModelResponse * previousResponse;                                    //@synthesize previousResponse=_previousResponse - In the implementation block
@property (assign,nonatomic) BOOL shouldBatchResultsWithPlaceholderObjects;                         //@synthesize shouldBatchResultsWithPlaceholderObjects=_shouldBatchResultsWithPlaceholderObjects - In the implementation block
@property (assign,nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse;                        //@synthesize wantsDetailedKeepLocalRequestableResponse=_wantsDetailedKeepLocalRequestableResponse - In the implementation block
@property (assign,nonatomic) BOOL allowLocalEquivalencies;                                          //@synthesize allowLocalEquivalencies=_allowLocalEquivalencies - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                             //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * sectionedModelObjects;                           //@synthesize sectionedModelObjects=_sectionedModelObjects - In the implementation block
@property (nonatomic,copy) NSArray * storeIDs;                                                      //@synthesize storeIDs=_storeIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) MPCPlaybackRequestEnvironment * playbackRequestEnvironment;              //@synthesize playbackRequestEnvironment=_playbackRequestEnvironment - In the implementation block
@property (nonatomic,copy,readonly) NSString * rtcReportingPlayQueueSourceIdentifier; 
+(BOOL)supportsSecureCoding;
+(BOOL)requiresNetwork;
+(void)MPC_consumeSiriAssetInfo:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)init;
-(NSArray *)storeIDs;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setPreviousResponse:(MPModelResponse *)arg1 ;
-(MPModelResponse *)previousResponse;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)allowLocalEquivalencies;
-(NSString *)clientIdentifier;
-(NSString *)rtcReportingPlayQueueSourceIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAllowLocalEquivalencies:(BOOL)arg1 ;
-(BOOL)wantsDetailedKeepLocalRequestableResponse;
-(void)setWantsDetailedKeepLocalRequestableResponse:(BOOL)arg1 ;
-(MPCPlaybackRequestEnvironment *)playbackRequestEnvironment;
-(MPSectionedCollection *)sectionedModelObjects;
-(NSArray *)playbackPrioritizedIndexPaths;
-(void)setPlaybackRequestEnvironment:(MPCPlaybackRequestEnvironment *)arg1 ;
-(BOOL)shouldBatchResultsWithPlaceholderObjects;
-(void)setShouldBatchResultsWithPlaceholderObjects:(BOOL)arg1 ;
-(void)setSectionedModelObjects:(MPSectionedCollection *)arg1 ;
-(void)setPlaybackPrioritizedIndexPaths:(NSArray *)arg1 ;
@end

