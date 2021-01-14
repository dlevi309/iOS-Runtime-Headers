/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPArtworkDataSource;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSString, MPArtworkRepresentationCollection, NSCache;

@interface MPArtworkCatalog : NSObject {

	CGSize _fittingSize;
	long long _modelRevisionID;
	BOOL _allowsVideoConstrainedNetworkAccess;
	BOOL _loadingRepresentation;
	double _destinationScale;
	long long _preferredVideoFormat;
	NSString* _cacheIdentifier;
	id _requestingContext;
	id _destination;
	/*^block*/id _configurationBlock;
	unsigned long long _representationKinds;
	MPArtworkRepresentationCollection* _bestAvailableRepresentationCollection;
	id _token;
	id<MPArtworkDataSource> _dataSource;
	unsigned long long _renderHint;

}

@property (nonatomic,readonly) long long MP_artworkType; 
@property (nonatomic,copy) NSString * cacheIdentifier;                                                               //@synthesize cacheIdentifier=_cacheIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id requestingContext;                                                            //@synthesize requestingContext=_requestingContext - In the implementation block
@property (assign,nonatomic,__weak) id destination;                                                                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy) id configurationBlock;                                                                    //@synthesize configurationBlock=_configurationBlock - In the implementation block
@property (assign,nonatomic) unsigned long long representationKinds;                                                 //@synthesize representationKinds=_representationKinds - In the implementation block
@property (nonatomic,retain) MPArtworkRepresentationCollection * bestAvailableRepresentationCollection;              //@synthesize bestAvailableRepresentationCollection=_bestAvailableRepresentationCollection - In the implementation block
@property (getter=isLoadingRepresentation) BOOL loadingRepresentation;                                               //@synthesize loadingRepresentation=_loadingRepresentation - In the implementation block
@property (nonatomic,readonly) id token;                                                                             //@synthesize token=_token - In the implementation block
@property (nonatomic,__weak,readonly) id<MPArtworkDataSource> dataSource;                                            //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSCache * cache; 
@property (nonatomic,readonly) NSCache * videoCache; 
@property (nonatomic,readonly) id<MPArtworkDataSourceVisualIdenticality> visualIdenticalityIdentifier; 
@property (assign,nonatomic) unsigned long long renderHint;                                                          //@synthesize renderHint=_renderHint - In the implementation block
@property (assign,nonatomic) double destinationScale;                                                                //@synthesize destinationScale=_destinationScale - In the implementation block
@property (assign,nonatomic) CGSize fittingSize;                                                                     //@synthesize fittingSize=_fittingSize - In the implementation block
@property (nonatomic,readonly) CGSize scaledFittingSize; 
@property (nonatomic,readonly) BOOL hasImageOnDisk; 
@property (assign,nonatomic) BOOL allowsVideoConstrainedNetworkAccess;                                               //@synthesize allowsVideoConstrainedNetworkAccess=_allowsVideoConstrainedNetworkAccess - In the implementation block
@property (assign,nonatomic) long long preferredVideoFormat;                                                         //@synthesize preferredVideoFormat=_preferredVideoFormat - In the implementation block
+(void)setCachePurgesWhenEnteringBackground:(BOOL)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3 ;
+(id)staticArtworkCatalogWithRepresentationCollection:(id)arg1 ;
+(id)staticArtworkCatalogWithImage:(id)arg1 ;
+(id)_artworkLoadQueue;
+(void)setCacheLimit:(long long)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3 representationKind:(long long)arg4 ;
+(void)setCachePurgesWhenEnteringBackground:(BOOL)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3 representationKind:(long long)arg4 ;
+(void)setCacheLimit:(long long)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3 ;
+(id)_artworkCacheForIdentifier:(id)arg1 requestingContext:(id)arg2 representationKind:(long long)arg3 ;
-(CGSize)scaledFittingSize;
-(void)setDestination:(id)arg1 ;
-(double)destinationScale;
-(void)setPreferredVideoKind:(long long)arg1 ;
-(NSCache *)cache;
-(void)requestVideoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDestination:(id)arg1 forRepresentationKinds:(unsigned long long)arg2 configurationBlock:(/*^block*/id)arg3 ;
-(unsigned long long)renderHint;
-(void)_updateRepresentations;
-(NSCache *)videoCache;
-(id<MPArtworkDataSource>)dataSource;
-(void)setRepresentationKinds:(unsigned long long)arg1 ;
-(void)requestExportableArtworkPropertiesWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateWithRepresentation:(id)arg1 isBestRepresentation:(BOOL)arg2 modelRevisionID:(long long)arg3 ;
-(void)setCacheIdentifier:(id)arg1 forRequestingContext:(id)arg2 ;
-(void)setAllowsVideoConstrainedNetworkAccess:(BOOL)arg1 ;
-(void)requestRadiosityImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPreferredVideoFormat:(long long)arg1 ;
-(MPArtworkRepresentationCollection *)bestAvailableRepresentationCollection;
-(void)requestColorAnalysisWithAlgorithm:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)description;
-(id)initWithToken:(id)arg1 dataSource:(id)arg2 ;
-(CGSize)fittingSize;
-(id)bestImageFromDisk;
-(void)requestImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_requestBestRepresentationOfKind:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setBestAvailableRepresentationCollection:(MPArtworkRepresentationCollection *)arg1 ;
-(void)setLoadingRepresentation:(BOOL)arg1 ;
-(void)setFittingSize:(CGSize)arg1 ;
-(id)configurationBlock;
-(id)requestingContext;
-(BOOL)isArtworkVisuallyIdenticalToCatalog:(id)arg1 ;
-(void)setCacheIdentifier:(NSString *)arg1 ;
-(long long)MP_artworkType;
-(unsigned long long)hash;
-(void)_loadBestRepresentationIfNeededOfKind:(long long)arg1 ;
-(BOOL)hasImageOnDisk;
-(BOOL)isLoadingRepresentation;
-(unsigned long long)representationKinds;
-(void)setDestination:(id)arg1 progressiveConfigurationBlock:(/*^block*/id)arg2 ;
-(id)_existingRepresentationOfKind:(long long)arg1 ;
-(void)setDestination:(id)arg1 configurationBlock:(/*^block*/id)arg2 ;
-(BOOL)allowsVideoConstrainedNetworkAccess;
-(id)token;
-(id)existingColorAnalysisWithAlgorithm:(long long)arg1 ;
-(void)_updateRepresentationOfKind:(long long)arg1 ;
-(void)setConfigurationBlock:(id)arg1 ;
-(id<MPArtworkDataSourceVisualIdenticality>)visualIdenticalityIdentifier;
-(void)setRequestingContext:(id)arg1 ;
-(void)setRenderHint:(unsigned long long)arg1 ;
-(NSString *)cacheIdentifier;
-(id)destination;
-(void)_loadRepresentationOfKind:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDestinationScale:(double)arg1 ;
-(void)dealloc;
-(long long)preferredVideoFormat;
@end

