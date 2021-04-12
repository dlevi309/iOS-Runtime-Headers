/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PHResourceChooserAsset;
#import <Photos/Photos-Structs.h>
@class PHResourceChooserList, NSString;

@interface PHImageResourceChooser : NSObject {

	double _requiredScale;
	PHResourceChooserList* _list;
	BOOL _needsReset;
	BOOL _isCloudSharedMode;
	BOOL _allowHints;
	BOOL _onlyUseFetchedAssetPropertiesDuringChoosing;
	id<PHResourceChooserAsset> _asset;
	long long _policy;
	unsigned long long _loadingOptions;
	long long _requestVersion;
	double _minimumTableThumbnailLongSide;
	id _context;
	NSString* _loggingPrefix;
	/*^block*/id _resourceHandler;
	CGSize _desiredSize;

}

@property (nonatomic,readonly) id<PHResourceChooserAsset> asset;                            //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) long long policy;                                              //@synthesize policy=_policy - In the implementation block
@property (assign,nonatomic) unsigned long long loadingOptions;                             //@synthesize loadingOptions=_loadingOptions - In the implementation block
@property (assign,nonatomic) long long requestVersion;                                      //@synthesize requestVersion=_requestVersion - In the implementation block
@property (assign,nonatomic) CGSize desiredSize;                                            //@synthesize desiredSize=_desiredSize - In the implementation block
@property (assign,nonatomic) BOOL isCloudSharedMode;                                        //@synthesize isCloudSharedMode=_isCloudSharedMode - In the implementation block
@property (assign,nonatomic) BOOL allowHints;                                               //@synthesize allowHints=_allowHints - In the implementation block
@property (assign,nonatomic) BOOL onlyUseFetchedAssetPropertiesDuringChoosing;              //@synthesize onlyUseFetchedAssetPropertiesDuringChoosing=_onlyUseFetchedAssetPropertiesDuringChoosing - In the implementation block
@property (assign,nonatomic) double minimumTableThumbnailLongSide;                          //@synthesize minimumTableThumbnailLongSide=_minimumTableThumbnailLongSide - In the implementation block
@property (assign,nonatomic,__weak) id context;                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * loggingPrefix;                                      //@synthesize loggingPrefix=_loggingPrefix - In the implementation block
@property (nonatomic,copy) id resourceHandler;                                              //@synthesize resourceHandler=_resourceHandler - In the implementation block
+(void)initialize;
-(id)init;
-(id)context;
-(void)setContext:(id)arg1 ;
-(long long)policy;
-(void)setPolicy:(long long)arg1 ;
-(id<PHResourceChooserAsset>)asset;
-(id)initWithAsset:(id)arg1 ;
-(CGSize)desiredSize;
-(void)setDesiredSize:(CGSize)arg1 ;
-(void)setLoadingOptions:(unsigned long long)arg1 ;
-(void)setRequestVersion:(long long)arg1 ;
-(void)setAllowHints:(BOOL)arg1 ;
-(void)setIsCloudSharedMode:(BOOL)arg1 ;
-(void)setMinimumTableThumbnailLongSide:(double)arg1 ;
-(void)moveFirst;
-(void)presentNextQualifyingResource;
-(unsigned long long)loadingOptions;
-(long long)requestVersion;
-(BOOL)isCloudSharedMode;
-(BOOL)allowHints;
-(BOOL)onlyUseFetchedAssetPropertiesDuringChoosing;
-(void)setOnlyUseFetchedAssetPropertiesDuringChoosing:(BOOL)arg1 ;
-(double)minimumTableThumbnailLongSide;
-(NSString *)loggingPrefix;
-(void)setLoggingPrefix:(NSString *)arg1 ;
-(id)resourceHandler;
-(void)setResourceHandler:(id)arg1 ;
@end

