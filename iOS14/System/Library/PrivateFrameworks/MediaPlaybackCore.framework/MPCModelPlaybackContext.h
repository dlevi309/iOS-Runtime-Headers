/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPPlaybackContext.h>
#import <libobjc.A.dylib/MPCModelPlaybackRequestEnvironmentConsuming.h>
#import <libobjc.A.dylib/MPCPlaybackContextUserIdentityConsuming.h>
#import <libobjc.A.dylib/MPCPlaybackContextPrivateListeningOverridable.h>

@class MPCPlaybackRequestEnvironment, MPModelRequest, MPIdentifierSet, NSDictionary, MPModelGenericObject, NSString, ICUserIdentity, NSNumber;

@interface MPCModelPlaybackContext : MPPlaybackContext <MPCModelPlaybackRequestEnvironmentConsuming, MPCPlaybackContextUserIdentityConsuming, MPCPlaybackContextPrivateListeningOverridable> {

	BOOL _skipEncodingMediaLibraryUniqueID;
	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	MPModelRequest* _request;
	MPIdentifierSet* _startItemIdentifiers;
	NSDictionary* _startTimeModifications;
	NSDictionary* _endTimeModifications;
	NSDictionary* _assetStoreFronts;
	MPModelGenericObject* _fallbackSectionRepresentation;
	NSString* _encodedMediaLibraryUniqueID;

}

@property (nonatomic,copy,readonly) NSString * encodedMediaLibraryUniqueID;                         //@synthesize encodedMediaLibraryUniqueID=_encodedMediaLibraryUniqueID - In the implementation block
@property (assign,nonatomic) BOOL skipEncodingMediaLibraryUniqueID;                                 //@synthesize skipEncodingMediaLibraryUniqueID=_skipEncodingMediaLibraryUniqueID - In the implementation block
@property (nonatomic,copy) MPCPlaybackRequestEnvironment * playbackRequestEnvironment;              //@synthesize playbackRequestEnvironment=_playbackRequestEnvironment - In the implementation block
@property (nonatomic,copy) MPModelRequest * request;                                                //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) MPIdentifierSet * startItemIdentifiers;                                  //@synthesize startItemIdentifiers=_startItemIdentifiers - In the implementation block
@property (nonatomic,copy) NSDictionary * startTimeModifications;                                   //@synthesize startTimeModifications=_startTimeModifications - In the implementation block
@property (nonatomic,copy) NSDictionary * endTimeModifications;                                     //@synthesize endTimeModifications=_endTimeModifications - In the implementation block
@property (nonatomic,copy) NSDictionary * assetStoreFronts;                                         //@synthesize assetStoreFronts=_assetStoreFronts - In the implementation block
@property (nonatomic,copy) MPModelGenericObject * fallbackSectionRepresentation;                    //@synthesize fallbackSectionRepresentation=_fallbackSectionRepresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) ICUserIdentity * userIdentity; 
@property (nonatomic,copy) NSNumber * privateListeningOverride; 
+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
+(id)requiredPropertiesForStaticMediaClips;
+(BOOL)supportsAutoPlay;
-(BOOL)isSupported;
-(ICUserIdentity *)userIdentity;
-(void)setStartItemIdentifiers:(MPIdentifierSet *)arg1 ;
-(id)init;
-(NSNumber *)privateListeningOverride;
-(void)setRequest:(MPModelRequest *)arg1 ;
-(void)clearStartItem;
-(id)descriptionComponents;
-(BOOL)containsRestorableContent;
-(void)encodeWithCoder:(id)arg1 ;
-(MPModelRequest *)request;
-(NSDictionary *)assetStoreFronts;
-(void)setAssetStoreFronts:(NSDictionary *)arg1 ;
-(MPIdentifierSet *)startItemIdentifiers;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(MPCPlaybackRequestEnvironment *)playbackRequestEnvironment;
-(void)setPrivateListeningOverride:(NSNumber *)arg1 ;
-(void)setPlaybackRequestEnvironment:(MPCPlaybackRequestEnvironment *)arg1 ;
-(void)getRemotePlaybackQueueRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)setStartTimeModifications:(NSDictionary *)arg1 ;
-(void)setEndTimeModifications:(NSDictionary *)arg1 ;
-(void)setSkipEncodingMediaLibraryUniqueID:(BOOL)arg1 ;
-(MPModelGenericObject *)fallbackSectionRepresentation;
-(NSDictionary *)startTimeModifications;
-(NSDictionary *)endTimeModifications;
-(void)setFallbackSectionRepresentation:(MPModelGenericObject *)arg1 ;
-(BOOL)skipEncodingMediaLibraryUniqueID;
-(void)updateRequestPlaybackEnvironment;
-(NSString *)encodedMediaLibraryUniqueID;
@end

