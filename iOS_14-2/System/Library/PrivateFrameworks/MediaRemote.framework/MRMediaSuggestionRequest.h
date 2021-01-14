/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSUUID;

@interface MRMediaSuggestionRequest : NSObject {

	BOOL _includeArtwork;
	unsigned long long _maxResults;
	NSUUID* _requestIdentifier;

}

@property (assign,nonatomic) unsigned long long maxResults;              //@synthesize maxResults=_maxResults - In the implementation block
@property (assign,nonatomic) BOOL includeArtwork;                        //@synthesize includeArtwork=_includeArtwork - In the implementation block
@property (nonatomic,copy) NSUUID * requestIdentifier;                   //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(id)defaultRequest;
+(id)defaultRequestWithArtwork;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)requestIdentifier;
-(void)setMaxResults:(unsigned long long)arg1 ;
-(unsigned long long)maxResults;
-(id)description;
-(BOOL)includeArtwork;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)setIncludeArtwork:(BOOL)arg1 ;
-(void)performWithPreferences:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_proactiveSuggestion;
-(id)_queryEventsWithPredicate:(id)arg1 offset:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_artworkForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_intentIsValidSuggestion:(id)arg1 sourceBundleID:(id)arg2 ;
-(BOOL)_bundleIdentifierIsSystemMediaApplication:(id)arg1 ;
@end

