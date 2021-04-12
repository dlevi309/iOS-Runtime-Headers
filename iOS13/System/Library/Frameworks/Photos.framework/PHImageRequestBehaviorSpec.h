/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@interface PHImageRequestBehaviorSpec : NSObject {

	BOOL _synchronous;
	BOOL _networkAccessAllowed;
	BOOL _allowPlaceholder;
	BOOL _onlyUseFetchedAssetPropertiesDuringChoosing;
	long long _choosingPolicy;
	unsigned long long _loadingOptions;
	long long _version;
	long long _resizeMode;
	double _minimumTableThumbnailLongSide;

}

@property (assign,nonatomic) long long choosingPolicy;                                             //@synthesize choosingPolicy=_choosingPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long loadingOptions;                                    //@synthesize loadingOptions=_loadingOptions - In the implementation block
@property (assign,nonatomic) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long resizeMode;                                                 //@synthesize resizeMode=_resizeMode - In the implementation block
@property (assign,getter=isSynchronous,nonatomic) BOOL synchronous;                                //@synthesize synchronous=_synchronous - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,nonatomic) BOOL allowPlaceholder;                                                //@synthesize allowPlaceholder=_allowPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL onlyUseFetchedAssetPropertiesDuringChoosing;                     //@synthesize onlyUseFetchedAssetPropertiesDuringChoosing=_onlyUseFetchedAssetPropertiesDuringChoosing - In the implementation block
@property (assign,nonatomic) double minimumTableThumbnailLongSide;                                 //@synthesize minimumTableThumbnailLongSide=_minimumTableThumbnailLongSide - In the implementation block
+(unsigned long long)loadingOptionsFromLoadingMode:(long long)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(void)setSynchronous:(BOOL)arg1 ;
-(id)shortDescription;
-(BOOL)isNetworkAccessAllowed;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(void)setResizeMode:(long long)arg1 ;
-(BOOL)isSynchronous;
-(void)setLoadingOptions:(unsigned long long)arg1 ;
-(void)setMinimumTableThumbnailLongSide:(double)arg1 ;
-(unsigned long long)loadingOptions;
-(BOOL)onlyUseFetchedAssetPropertiesDuringChoosing;
-(void)setOnlyUseFetchedAssetPropertiesDuringChoosing:(BOOL)arg1 ;
-(double)minimumTableThumbnailLongSide;
-(BOOL)shouldLoadImage;
-(BOOL)shouldLoadData;
-(BOOL)shouldLoadURL;
-(BOOL)shouldLoadDataOrURL;
-(long long)choosingPolicy;
-(void)setChoosingPolicy:(long long)arg1 ;
-(long long)resizeMode;
-(BOOL)allowPlaceholder;
-(void)setAllowPlaceholder:(BOOL)arg1 ;
@end

