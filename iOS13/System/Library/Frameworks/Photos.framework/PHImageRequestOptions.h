/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHMediaRequestThreadingOptions.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface PHImageRequestOptions : NSObject <PHMediaRequestThreadingOptions, NSCopying> {

	int _requestID;
	BOOL _networkAccessAllowed;
	BOOL _synchronous;
	BOOL _allowPlaceholder;
	BOOL _allowSecondaryOpportunisticImage;
	BOOL _onlyUseFetchedAssetPropertiesDuringChoosing;
	long long _version;
	long long _deliveryMode;
	long long _resizeMode;
	/*^block*/id _progressHandler;
	long long _loadingMode;
	NSObject*<OS_dispatch_queue> _resultHandlerQueue;
	/*^block*/id _cachingCompleteHandler;
	CGRect _normalizedCropRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long loadingMode;                                                //@synthesize loadingMode=_loadingMode - In the implementation block
@property (assign,nonatomic) BOOL allowPlaceholder;                                                //@synthesize allowPlaceholder=_allowPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL allowSecondaryOpportunisticImage;                                //@synthesize allowSecondaryOpportunisticImage=_allowSecondaryOpportunisticImage - In the implementation block
@property (assign,nonatomic) BOOL onlyUseFetchedAssetPropertiesDuringChoosing;                     //@synthesize onlyUseFetchedAssetPropertiesDuringChoosing=_onlyUseFetchedAssetPropertiesDuringChoosing - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resultHandlerQueue;                      //@synthesize resultHandlerQueue=_resultHandlerQueue - In the implementation block
@property (nonatomic,copy) id cachingCompleteHandler;                                              //@synthesize cachingCompleteHandler=_cachingCompleteHandler - In the implementation block
@property (assign,nonatomic) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long deliveryMode;                                               //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (assign,nonatomic) long long resizeMode;                                                 //@synthesize resizeMode=_resizeMode - In the implementation block
@property (assign,nonatomic) CGRect normalizedCropRect;                                            //@synthesize normalizedCropRect=_normalizedCropRect - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,getter=isSynchronous,nonatomic) BOOL synchronous;                                //@synthesize synchronous=_synchronous - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
+(id)defaultOptionsAllowingPlaceholder;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(void)setSynchronous:(BOOL)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(BOOL)isNetworkAccessAllowed;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(void)setResizeMode:(long long)arg1 ;
-(BOOL)isSynchronous;
-(void)setNormalizedCropRect:(CGRect)arg1 ;
-(CGRect)normalizedCropRect;
-(NSObject*<OS_dispatch_queue>)resultHandlerQueue;
-(void)setResultHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)onlyUseFetchedAssetPropertiesDuringChoosing;
-(void)setOnlyUseFetchedAssetPropertiesDuringChoosing:(BOOL)arg1 ;
-(long long)deliveryMode;
-(void)setDeliveryMode:(long long)arg1 ;
-(long long)resizeMode;
-(BOOL)allowPlaceholder;
-(void)setAllowPlaceholder:(BOOL)arg1 ;
-(long long)loadingMode;
-(void)setLoadingMode:(long long)arg1 ;
-(BOOL)allowSecondaryOpportunisticImage;
-(void)setAllowSecondaryOpportunisticImage:(BOOL)arg1 ;
-(id)cachingCompleteHandler;
-(void)setCachingCompleteHandler:(id)arg1 ;
@end

