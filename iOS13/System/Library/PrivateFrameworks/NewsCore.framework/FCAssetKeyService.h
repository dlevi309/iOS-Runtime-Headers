/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NFLazy *)session;
-(NFLazy *)requestEncoder;
-(id)initWithConfigurationManager:(id)arg1 ;
-(void)_performHTTPRequestWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NFPromise *)endpointURLPromise;
-(void)fetchWrappingKeysWithIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

