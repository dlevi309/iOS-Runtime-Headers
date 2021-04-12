/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCAssetKeyServiceType.h>

@class NFLazy, NFPromise;

@interface FCAssetKeyService : NSObject <FCAssetKeyServiceType> {

	NFLazy* _session;
	NFLazy* _requestEncoder;
	NFPromise* _endpointURLPromise;

}

@property (nonatomic,readonly) NFLazy * session;                            //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NFLazy * requestEncoder;                     //@synthesize requestEncoder=_requestEncoder - In the implementation block
@property (nonatomic,readonly) NFPromise * endpointURLPromise;              //@synthesize endpointURLPromise=_endpointURLPromise - In the implementation block
-(id)initWithConfigurationManager:(id)arg1 ;
-(void)fetchWrappingKeysWithIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NFLazy *)requestEncoder;
-(NFLazy *)session;
-(NFPromise *)endpointURLPromise;
-(void)_performHTTPRequestWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

