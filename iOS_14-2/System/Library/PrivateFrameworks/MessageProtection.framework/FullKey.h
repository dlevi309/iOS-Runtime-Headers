/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@protocol P256PrivateKeyProtocol;
@class NSString;

@interface FullKey : NSObject {

	int _keyStore;
	id<P256PrivateKeyProtocol> _key;
	NSString* _keychainTag;

}

@property (retain) NSString * keychainTag;                        //@synthesize keychainTag=_keychainTag - In the implementation block
@property (readonly) id<P256PrivateKeyProtocol> key;              //@synthesize key=_key - In the implementation block
@property (readonly) int keyStore;                                //@synthesize keyStore=_keyStore - In the implementation block
+(id)generateNewKeyWithAccess:(id)arg1 forceNoSEP:(BOOL)arg2 error:(id*)arg3 ;
+(id)generateNewKeyWithAccess:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(NSString *)keychainTag;
-(void)setKeychainTag:(NSString *)arg1 ;
-(id<P256PrivateKeyProtocol>)key;
-(int)keyStore;
-(id)keyIdentifier;
-(id)initWithKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithKeychainTag:(id)arg1 error:(id*)arg2 ;
-(id)initWithCTKTokenOID:(id)arg1 error:(id*)arg2 ;
-(id)initWithProtobufferData:(id)arg1 error:(id*)arg2 ;
-(id)protobuffer;
@end

