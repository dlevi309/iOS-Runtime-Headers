/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPPlaybackContext.h>
#import <libobjc.A.dylib/MPCModelPlaybackRequestEnvironmentConsuming.h>
#import <libobjc.A.dylib/MPCPlaybackContextUserIdentityConsuming.h>
#import <libobjc.A.dylib/MPCPlaybackContextPrivateListeningOverridable.h>

@class ICUserIdentity, MPCPlaybackRequestEnvironment, MPModelRequest, MPIdentifierSet, NSDictionary, MPModelGenericObject, NSString;

@interface MPCModelPlaybackContext : MPPlaybackContext <MPCModelPlaybackRequestEnvironmentConsuming, MPCPlaybackContextUserIdentityConsuming, MPCPlaybackContextPrivateListeningOverridable> {

	BOOL _skipEncodingMediaLibraryUniqueID;
	ICUserIdentity* _userIdentity;
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
@property (nonatomic,copy) ICUserIdentity * userIdentity;                                           //@synthesize userIdentity=_userIdentity - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
+(id)requiredPropertiesForStaticMediaClips;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequest:(MPModelRequest *)arg1 ;
-(MPModelRequest *)request;
-(ICUserIdentity *)userIdentity;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(BOOL)isSupported;
-(id)descriptionComponents;
-(BOOL)containsRestorableContent;
-(void)clearStartItem;
-(NSDictionary *)assetStoreFronts;
-(void)setAssetStoreFronts:(NSDictionary *)arg1 ;
-(MPCPlaybackRequestEnvironment *)playbackRequestEnvironment;
-(void)setPrivateListeningOverride:(id)arg1 ;
-(void)setPlaybackRequestEnvironment:(MPCPlaybackRequestEnvironment *)arg1 ;
-(void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MPIdentifierSet *)startItemIdentifiers;
-(void)setStartItemIdentifiers:(MPIdentifierSet *)arg1 ;
-(void)setStartTimeModifications:(NSDictionary *)arg1 ;
-(void)setEndTimeModifications:(NSDictionary *)arg1 ;
-(void)setSkipEncodingMediaLibraryUniqueID:(BOOL)arg1 ;
-(MPModelGenericObject *)fallbackSectionRepresentation;
-(NSDictionary *)startTimeModifications;
-(NSDictionary *)endTimeModifications;
-(void)setFallbackSectionRepresentation:(MPModelGenericObject *)arg1 ;
-(BOOL)skipEncodingMediaLibraryUniqueID;
-(NSString *)encodedMediaLibraryUniqueID;
@end

