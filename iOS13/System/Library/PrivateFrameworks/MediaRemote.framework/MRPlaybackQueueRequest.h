/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class MRPlayerPath, NSString, NSArray, _MRPlaybackQueueRequestProtobuf, NSData;

@interface MRPlaybackQueueRequest : NSObject {

	BOOL _hasLocation;
	BOOL _hasLength;
	BOOL _includeMetadata;
	BOOL _hasIncludeMetadata;
	BOOL _hasArtworkWidth;
	BOOL _hasArtworkHeight;
	BOOL _includeLyrics;
	BOOL _hasIncludeLyrics;
	BOOL _includeSections;
	BOOL _hasIncludeSections;
	BOOL _includeInfo;
	BOOL _hasIncludeInfo;
	BOOL _includeLanguageOptions;
	BOOL _hasIncludeLanguageOptions;
	BOOL _returnContentItemAssetsInUserCompletion;
	BOOL _hasReturnContentItemAssetsInUserCompletion;
	BOOL _isLegacyNowPlayingInfoRequest;
	BOOL _hasIsLegacyNowPlayingInfoRequest;
	BOOL _hasCachingPolicy;
	long long _location;
	long long _length;
	double _artworkWidth;
	double _artworkHeight;
	long long _cachingPolicy;
	MRPlayerPath* _playerPath;
	NSString* _requestIdentifier;
	NSString* _label;
	NSArray* _contentItemIdentifiers;

}

@property (nonatomic,readonly) _MRPlaybackQueueRequestProtobuf * protobuf; 
@property (assign,nonatomic) long long location;                                           //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocation;                                             //@synthesize hasLocation=_hasLocation - In the implementation block
@property (assign,nonatomic) long long length;                                             //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) BOOL hasLength;                                               //@synthesize hasLength=_hasLength - In the implementation block
@property (assign,nonatomic) BOOL includeMetadata;                                         //@synthesize includeMetadata=_includeMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeMetadata;                                      //@synthesize hasIncludeMetadata=_hasIncludeMetadata - In the implementation block
@property (assign,nonatomic) double artworkWidth;                                          //@synthesize artworkWidth=_artworkWidth - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkWidth;                                         //@synthesize hasArtworkWidth=_hasArtworkWidth - In the implementation block
@property (assign,nonatomic) double artworkHeight;                                         //@synthesize artworkHeight=_artworkHeight - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkHeight;                                        //@synthesize hasArtworkHeight=_hasArtworkHeight - In the implementation block
@property (assign,nonatomic) BOOL includeLyrics;                                           //@synthesize includeLyrics=_includeLyrics - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeLyrics;                                        //@synthesize hasIncludeLyrics=_hasIncludeLyrics - In the implementation block
@property (assign,nonatomic) BOOL includeSections;                                         //@synthesize includeSections=_includeSections - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeSections;                                      //@synthesize hasIncludeSections=_hasIncludeSections - In the implementation block
@property (assign,nonatomic) BOOL includeInfo;                                             //@synthesize includeInfo=_includeInfo - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeInfo;                                          //@synthesize hasIncludeInfo=_hasIncludeInfo - In the implementation block
@property (assign,nonatomic) BOOL includeLanguageOptions;                                  //@synthesize includeLanguageOptions=_includeLanguageOptions - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeLanguageOptions;                               //@synthesize hasIncludeLanguageOptions=_hasIncludeLanguageOptions - In the implementation block
@property (assign,nonatomic) BOOL returnContentItemAssetsInUserCompletion;                 //@synthesize returnContentItemAssetsInUserCompletion=_returnContentItemAssetsInUserCompletion - In the implementation block
@property (assign,nonatomic) BOOL hasReturnContentItemAssetsInUserCompletion;              //@synthesize hasReturnContentItemAssetsInUserCompletion=_hasReturnContentItemAssetsInUserCompletion - In the implementation block
@property (assign,nonatomic) BOOL isLegacyNowPlayingInfoRequest;                           //@synthesize isLegacyNowPlayingInfoRequest=_isLegacyNowPlayingInfoRequest - In the implementation block
@property (assign,nonatomic) BOOL hasIsLegacyNowPlayingInfoRequest;                        //@synthesize hasIsLegacyNowPlayingInfoRequest=_hasIsLegacyNowPlayingInfoRequest - In the implementation block
@property (assign,nonatomic) long long cachingPolicy;                                      //@synthesize cachingPolicy=_cachingPolicy - In the implementation block
@property (assign,nonatomic) BOOL hasCachingPolicy;                                        //@synthesize hasCachingPolicy=_hasCachingPolicy - In the implementation block
@property (nonatomic,retain) MRPlayerPath * playerPath;                                    //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) NSString * requestIdentifier;                                   //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                               //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSArray * contentItemIdentifiers;                               //@synthesize contentItemIdentifiers=_contentItemIdentifiers - In the implementation block
@property (nonatomic,readonly) NSData * data; 
-(long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLength:(long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(long long)location;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLocation:(long long)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSString *)requestIdentifier;
-(BOOL)hasLocation;
-(BOOL)hasLength;
-(void)setHasLength:(BOOL)arg1 ;
-(_MRPlaybackQueueRequestProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setHasLocation:(BOOL)arg1 ;
-(MRPlayerPath *)playerPath;
-(void)setIncludeMetadata:(BOOL)arg1 ;
-(BOOL)includeMetadata;
-(double)artworkWidth;
-(void)setArtworkWidth:(double)arg1 ;
-(void)setPlayerPath:(MRPlayerPath *)arg1 ;
-(void)setHasIncludeMetadata:(BOOL)arg1 ;
-(BOOL)hasIncludeMetadata;
-(void)setHasArtworkWidth:(BOOL)arg1 ;
-(BOOL)hasArtworkWidth;
-(void)setArtworkHeight:(double)arg1 ;
-(void)setHasArtworkHeight:(BOOL)arg1 ;
-(BOOL)hasArtworkHeight;
-(void)setIncludeLyrics:(BOOL)arg1 ;
-(void)setHasIncludeLyrics:(BOOL)arg1 ;
-(BOOL)hasIncludeLyrics;
-(void)setIncludeSections:(BOOL)arg1 ;
-(void)setHasIncludeSections:(BOOL)arg1 ;
-(BOOL)hasIncludeSections;
-(void)setIncludeInfo:(BOOL)arg1 ;
-(void)setHasIncludeInfo:(BOOL)arg1 ;
-(BOOL)hasIncludeInfo;
-(void)setIncludeLanguageOptions:(BOOL)arg1 ;
-(void)setHasIncludeLanguageOptions:(BOOL)arg1 ;
-(BOOL)hasIncludeLanguageOptions;
-(void)setReturnContentItemAssetsInUserCompletion:(BOOL)arg1 ;
-(void)setHasReturnContentItemAssetsInUserCompletion:(BOOL)arg1 ;
-(BOOL)hasReturnContentItemAssetsInUserCompletion;
-(void)setCachingPolicy:(long long)arg1 ;
-(void)setHasCachingPolicy:(BOOL)arg1 ;
-(BOOL)hasCachingPolicy;
-(void)setIsLegacyNowPlayingInfoRequest:(BOOL)arg1 ;
-(void)setHasIsLegacyNowPlayingInfoRequest:(BOOL)arg1 ;
-(BOOL)hasIsLegacyNowPlayingInfoRequest;
-(double)artworkHeight;
-(BOOL)includeLyrics;
-(BOOL)includeSections;
-(BOOL)includeInfo;
-(BOOL)includeLanguageOptions;
-(NSArray *)contentItemIdentifiers;
-(void)setContentItemIdentifiers:(NSArray *)arg1 ;
-(BOOL)returnContentItemAssetsInUserCompletion;
-(long long)cachingPolicy;
-(BOOL)isLegacyNowPlayingInfoRequest;
@end

