/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSData;

@interface TKTokenKeyExchangeParameters : NSObject {

	long long _requestedSize;
	NSData* _sharedInfo;

}

@property (readonly) long long requestedSize;               //@synthesize requestedSize=_requestedSize - In the implementation block
@property (copy,readonly) NSData * sharedInfo;              //@synthesize sharedInfo=_sharedInfo - In the implementation block
-(id)initWithParameters:(id)arg1 ;
-(NSData *)sharedInfo;
-(long long)requestedSize;
@end

