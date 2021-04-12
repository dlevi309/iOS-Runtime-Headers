/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSData;

@interface TKTokenKeyExchangeParameters : NSObject {

	long long _requestedSize;
	NSData* _sharedInfo;

}

@property (readonly) long long requestedSize;               //@synthesize requestedSize=_requestedSize - In the implementation block
@property (copy,readonly) NSData * sharedInfo;              //@synthesize sharedInfo=_sharedInfo - In the implementation block
-(NSData *)sharedInfo;
-(id)initWithParameters:(id)arg1 ;
-(long long)requestedSize;
@end

