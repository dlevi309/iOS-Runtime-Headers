/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class TKClientTokenSession, NSData, NSDictionary;

@interface TKClientTokenObject : NSObject {

	id _accessControlRef;
	TKClientTokenSession* _session;
	NSData* _objectID;
	NSData* _accessControl;
	NSData* _value;
	NSData* _publicKey;
	NSDictionary* _keychainAttributes;

}

@property (nonatomic,readonly) TKClientTokenSession * session;                    //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSData * objectID;                                 //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) NSData * accessControl;                            //@synthesize accessControl=_accessControl - In the implementation block
@property (nonatomic,readonly) SecAccessControlRef accessControlRef; 
@property (nonatomic,readonly) NSData * value;                                    //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * publicKey;                                //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) NSDictionary * keychainAttributes;                 //@synthesize keychainAttributes=_keychainAttributes - In the implementation block
-(NSData *)value;
-(NSData *)accessControl;
-(NSDictionary *)keychainAttributes;
-(NSData *)objectID;
-(NSData *)publicKey;
-(id)operation:(long long)arg1 data:(id)arg2 algorithms:(id)arg3 parameters:(id)arg4 error:(id*)arg5 ;
-(id)attestKey:(id)arg1 nonce:(id)arg2 error:(id*)arg3 ;
-(BOOL)bumpKeyWithError:(id*)arg1 ;
-(BOOL)commitKeyWithError:(id*)arg1 ;
-(TKClientTokenSession *)session;
-(BOOL)deleteWithError:(id*)arg1 ;
-(SecAccessControlRef)accessControlRef;
-(id)sign:(id)arg1 algorithms:(id)arg2 parameters:(id)arg3 error:(id*)arg4 ;
-(id)exchangeKey:(id)arg1 algorithms:(id)arg2 parameters:(id)arg3 error:(id*)arg4 ;
-(id)operationResult:(id)arg1 error:(id*)arg2 ;
-(id)initWithSession:(id)arg1 objectID:(id)arg2 attributes:(id)arg3 ;
-(id)decrypt:(id)arg1 algorithms:(id)arg2 parameters:(id)arg3 error:(id*)arg4 ;
@end

