/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPArtworkDataSource;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSString, NSCache;

@interface MPArtworkCatalog : NSObject {

	CGSize _fittingSize;
	long long _modelRevisionID;
	BOOL _loadingRepresentation;
	double _destinationScale;
	NSString* _cacheIdentifier;
	id _requestingContext;
	id _destination;
	/*^block*/id _configurationBlock;
	id _token;
	id<MPArtworkDataSource> _dataSource;
	unsigned long long _renderHint;

}

@property (nonatomic,readonly) long long MP_artworkType; 
@property (nonatomic,copy) NSString * cacheIdentifier;                                                              //@synthesize cacheIdentifier=_cacheIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id requestingContext;                                                           //@synthesize requestingContext=_requestingContext - In the implementation block
@property (assign,nonatomic,__weak) id destination;                                                                 //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy) id configurationBlock;                                                                   //@synthesize configurationBlock=_configurationBlock - In the implementation block
@property (getter=isLoadingRepresentation) BOOL loadingRepresentation;                                              //@synthesize loadingRepresentation=_loadingRepresentation - In the implementation block
@property (nonatomic,retain) id token;                                                                              //@synthesize token=_token - In the implementation block
@property (assign,nonatomic,__weak) id<MPArtworkDataSource> dataSource;                                             //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSCache * cache; 
@property (nonatomic,readonly) id<MPArtworkDataSourceVisualIdenticality> visualIdenticalityIdentifier; 
@property (assign,nonatomic) unsigned long long renderHint;                                                         //@synthesize renderHint=_renderHint - In the implementation block
@property (assign,nonatomic) double destinationScale;                                                               //@synthesize destinationScale=_destinationScale - In the implementation block
@property (assign,nonatomic) CGSize fittingSize;                                                                    //@synthesize fittingSize=_fittingSize - In the implementation block
@property (nonatomic,readonly) CGSize scaledFittingSize; 
@property (nonatomic,readonly) BOOL hasImageOnDisk; 
+(id)_artworkLoadQueue;
+(id)_artworkCacheForIdentifier:(id)arg1 requestingContext:(id)arg2 ;
+(id)staticArtworkCatalogWithImage:(id)arg1 ;
+(void)setCacheLimit:(long long)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3 ;
+(void)setCachePurgesWhenEnteringBackground:(BOOL)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)token;
-(id)destination;
-(void)setDestination:(id)arg1 ;
-(NSCache *)cache;
-(id<MPArtworkDataSource>)dataSource;
-(void)setDataSource:(id<MPArtworkDataSource>)arg1 ;
-(void)setToken:(id)arg1 ;
-(CGSize)fittingSize;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(NSString *)cacheIdentifier;
-(id)initWithToken:(id)arg1 dataSource:(id)arg2 ;
-(void)setDestinationScale:(double)arg1 ;
-(CGSize)scaledFittingSize;
-(void)setFittingSize:(CGSize)arg1 ;
-(void)requestImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)bestImageFromDisk;
-(BOOL)hasImageOnDisk;
-(void)setDestination:(id)arg1 configurationBlock:(/*^block*/id)arg2 ;
-(void)setDestination:(id)arg1 progressiveConfigurationBlock:(/*^block*/id)arg2 ;
-(BOOL)isArtworkVisuallyIdenticalToCatalog:(id)arg1 ;
-(id<MPArtworkDataSourceVisualIdenticality>)visualIdenticalityIdentifier;
-(id)existingColorAnalysisWithAlgorithm:(long long)arg1 ;
-(void)requestColorAnalysisWithAlgorithm:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestFocusRegionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestRadiosityImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestExportableArtworkURLWithCompletion:(/*^block*/id)arg1 ;
-(void)requestExportableArtworkPropertiesWithCompletion:(/*^block*/id)arg1 ;
-(void)setCacheIdentifier:(id)arg1 forRequestingContext:(id)arg2 ;
-(void)_loadBestRepresentationIfNeeded;
-(void)_updateRepresentation;
-(void)_updateWithRepresentation:(id)arg1 isBestRepresentation:(BOOL)arg2 modelRevisionID:(long long)arg3 ;
-(double)destinationScale;
-(void)setCacheIdentifier:(NSString *)arg1 ;
-(id)requestingContext;
-(void)setRequestingContext:(id)arg1 ;
-(BOOL)isLoadingRepresentation;
-(void)setLoadingRepresentation:(BOOL)arg1 ;
-(unsigned long long)renderHint;
-(void)setRenderHint:(unsigned long long)arg1 ;
-(long long)MP_artworkType;
@end

