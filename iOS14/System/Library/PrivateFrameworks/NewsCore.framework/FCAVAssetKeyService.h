/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCAVAssetKeyServiceType.h>

@class NFLazy, NFPromise;

@interface FCAVAssetKeyService : NSObject <FCAVAssetKeyServiceType> {

	NFLazy* _session;
	NFLazy* _requestEncoder;
	NFPromise* _fairPlayBaseURLPromise;

}

@property (nonatomic,readonly) NFLazy * session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NFLazy * requestEncoder;                         //@synthesize requestEncoder=_requestEncoder - In the implementation block
@property (nonatomic,readonly) NFPromise * fairPlayBaseURLPromise;              //@synthesize fairPlayBaseURLPromise=_fairPlayBaseURLPromise - In the implementation block
-(id)initWithConfigurationManager:(id)arg1 ;
-(id)_errorForBadRequestWithResponseData:(id)arg1 URL:(id)arg2 ;
-(NFPromise *)fairPlayBaseURLPromise;
-(id)init;
-(NFLazy *)requestEncoder;
-(NFLazy *)session;
-(void)_performHTTPRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchContentKeyWithURI:(id)arg1 spcData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchAppCertificateWithCompletionHandler:(/*^block*/id)arg1 ;
@end

