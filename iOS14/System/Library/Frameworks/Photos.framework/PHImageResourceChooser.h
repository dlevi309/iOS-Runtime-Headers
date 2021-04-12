/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PHResourceChooserAsset;
#import <Photos/Photos-Structs.h>
@class PHResourceChooserList, PHImageRequestBehaviorSpec, NSString;

@interface PHImageResourceChooser : NSObject {

	double _requiredScale;
	PHResourceChooserList* _list;
	BOOL _needsReset;
	BOOL _didCheckForLocalVideoKeyFrame;
	BOOL _hasLocalVideoKeyFrameInNonHintResources;
	BOOL _isCloudSharedMode;
	BOOL _onlyUseFetchedAssetPropertiesDuringChoosing;
	BOOL _allowHints;
	id<PHResourceChooserAsset> _asset;
	PHImageRequestBehaviorSpec* _behaviorSpec;
	long long _policy;
	unsigned long long _loadingOptions;
	long long _requestVersion;
	double _minimumTableThumbnailLongSide;
	id _context;
	NSString* _loggingPrefix;
	/*^block*/id _resourceHandler;
	CGSize _desiredSize;

}

@property (nonatomic,readonly) id<PHResourceChooserAsset> asset;                              //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) CGSize desiredSize;                                              //@synthesize desiredSize=_desiredSize - In the implementation block
@property (assign,nonatomic) BOOL isCloudSharedMode;                                          //@synthesize isCloudSharedMode=_isCloudSharedMode - In the implementation block
@property (nonatomic,retain) PHImageRequestBehaviorSpec * behaviorSpec;                       //@synthesize behaviorSpec=_behaviorSpec - In the implementation block
@property (nonatomic,readonly) long long policy;                                              //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) unsigned long long loadingOptions;                             //@synthesize loadingOptions=_loadingOptions - In the implementation block
@property (nonatomic,readonly) long long requestVersion;                                      //@synthesize requestVersion=_requestVersion - In the implementation block
@property (nonatomic,readonly) double minimumTableThumbnailLongSide;                          //@synthesize minimumTableThumbnailLongSide=_minimumTableThumbnailLongSide - In the implementation block
@property (nonatomic,readonly) BOOL onlyUseFetchedAssetPropertiesDuringChoosing;              //@synthesize onlyUseFetchedAssetPropertiesDuringChoosing=_onlyUseFetchedAssetPropertiesDuringChoosing - In the implementation block
@property (assign,nonatomic) BOOL allowHints;                                                 //@synthesize allowHints=_allowHints - In the implementation block
@property (assign,nonatomic,__weak) id context;                                               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * loggingPrefix;                                        //@synthesize loggingPrefix=_loggingPrefix - In the implementation block
@property (nonatomic,copy) id resourceHandler;                                                //@synthesize resourceHandler=_resourceHandler - In the implementation block
+(void)initialize;
-(void)setBehaviorSpec:(PHImageRequestBehaviorSpec *)arg1 ;
-(PHImageRequestBehaviorSpec *)behaviorSpec;
-(void)setDesiredSize:(CGSize)arg1 ;
-(unsigned long long)loadingOptions;
-(id)init;
-(long long)policy;
-(id<PHResourceChooserAsset>)asset;
-(void)setResourceHandler:(id)arg1 ;
-(BOOL)isCloudSharedMode;
-(id)context;
-(void)_executeEndOfListHandlerWithResourceChooserList:(id)arg1 continueInReverse:(BOOL*)arg2 ;
-(void)moveFirst;
-(long long)requestVersion;
-(BOOL)_executeItemHandlerWithAllowedResourceVersions:(id)arg1 approximateSize:(CGSize)arg2 resourceScale:(float)arg3 isPrimaryFormat:(BOOL)arg4 isDefaultOrientation:(BOOL)arg5 resourceType:(unsigned)arg6 version:(unsigned)arg7 isDerivative:(BOOL)arg8 store:(id)arg9 key:(id)arg10 localAvailabilityTarget:(short)arg11 identity:(id)arg12 canDownload:(BOOL)arg13 isReverse:(BOOL)arg14 preventAutoAdvance:(BOOL*)arg15 ;
-(void)setLoggingPrefix:(NSString *)arg1 ;
-(void)setAllowHints:(BOOL)arg1 ;
-(void)presentNextQualifyingResource;
-(id)initWithAsset:(id)arg1 ;
-(BOOL)allowHints;
-(double)minimumTableThumbnailLongSide;
-(void)setIsCloudSharedMode:(BOOL)arg1 ;
-(CGSize)desiredSize;
-(BOOL)onlyUseFetchedAssetPropertiesDuringChoosing;
-(NSString *)loggingPrefix;
-(id)resourceHandler;
-(void)setContext:(id)arg1 ;
@end

