/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/AVContentKeySessionDelegate.h>
#import <libobjc.A.dylib/FCAVAssetKeyManagerType.h>

@protocol FCAVAssetKeyServiceType, FCAVAssetKeyCacheType;
@class NFLazy, FCThreadSafeMutableArray, NSString;

@interface FCAVAssetKeyManager : NSObject <AVContentKeySessionDelegate, FCAVAssetKeyManagerType> {

	id<FCAVAssetKeyServiceType> _service;
	id<FCAVAssetKeyCacheType> _cache;
	NFLazy* _sharedContentKeySession;
	FCThreadSafeMutableArray* _fetchRequests;

}

@property (nonatomic,readonly) id<FCAVAssetKeyServiceType> service;                   //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) id<FCAVAssetKeyCacheType> cache;                       //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NFLazy * sharedContentKeySession;                      //@synthesize sharedContentKeySession=_sharedContentKeySession - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableArray * fetchRequests;              //@synthesize fetchRequests=_fetchRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCThreadSafeMutableArray *)fetchRequests;
-(id<FCAVAssetKeyCacheType>)cache;
-(id)init;
-(NFLazy *)sharedContentKeySession;
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2 ;
-(id)_keyURIForKeyIdentifier:(id)arg1 ;
-(void)registerAVURLAssetForAutomaticKeyManagement:(id)arg1 ;
-(void)fetchKeysWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_waitingOnRefreshForKeyURI:(id)arg1 ;
-(void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2 ;
-(void)refreshKeysIfNearExpiration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_completeKeyRequest:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
-(id<FCAVAssetKeyServiceType>)service;
-(id)initWithService:(id)arg1 cache:(id)arg2 ;
@end

