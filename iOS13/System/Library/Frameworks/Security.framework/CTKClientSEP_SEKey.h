/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


#import <Security/Security-Structs.h>
@class NSDictionary;

@interface CTKClientSEP_SEKey : NSObject {

	long long _SEKeyType;
	aks_ref_key_sRef _AKSRefKey;
	SecAccessControlRef _accessControl;
	id _keyType;
	_SecKey* _key;

}

@property (readonly) _SecKey* key;                                   //@synthesize key=_key - In the implementation block
@property (readonly) SecAccessControlRef accessControl;              //@synthesize accessControl=_accessControl - In the implementation block
@property (readonly) id objectID; 
@property (readonly) id keyType;                                     //@synthesize keyType=_keyType - In the implementation block
@property (readonly) NSDictionary * attributes; 
+(BOOL)hasSystemUIK;
+(id)protectionForKeyClass:(int)arg1 ;
+(int)keyClassForProtection:(id)arg1 ;
+(BOOL)hasSEP;
+(void)setupKeybagForTesting:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(_SecKey*)key;
-(NSDictionary *)attributes;
-(id)error:(id*)arg1 withAKSReturn:(int)arg2 ACMContext:(id)arg3 AKSOperation:(id)arg4 message:(id)arg5 ;
-(id)parametersWithContext:(id)arg1 ;
-(id)keyType;
-(id)initWithKeyType:(id)arg1 accessControl:(SecAccessControlRef)arg2 applePayEnabled:(BOOL)arg3 ACMContext:(id)arg4 error:(id*)arg5 ;
-(BOOL)deleteWithACMContext:(id)arg1 error:(id*)arg2 ;
-(SecAccessControlRef)accessControl;
-(id)objectID;
-(id)initWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)initWithAttributes:(id)arg1 ACMContext:(id)arg2 error:(id*)arg3 ;
-(id)publicKeyWithError:(id*)arg1 ;
-(id)signDigest:(id)arg1 ACMContext:(id)arg2 error:(id*)arg3 ;
-(id)computeSharedSecret:(id)arg1 ACMContext:(id)arg2 error:(id*)arg3 ;
-(id)recryptData:(id)arg1 attributes:(id)arg2 ACMContext:(id)arg3 error:(id*)arg4 ;
-(id)attestKey:(id)arg1 nonce:(id)arg2 ACMContext:(id)arg3 error:(id*)arg4 ;
-(BOOL)lifetimeControlWithType:(long long)arg1 ACMContext:(id)arg2 error:(id*)arg3 ;
@end

