/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@class NSString, NSData;

@interface ECDKIMPublicKey : NSObject {

	NSString* _version;
	unsigned long long _hashingAlgorithm;
	unsigned long long _signingAlgorithm;
	NSString* _notes;
	NSData* _publicKeyData;
	NSString* _serviceType;
	NSString* _flags;

}

@property (nonatomic,copy,readonly) NSString * version;                          //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long hashingAlgorithm;              //@synthesize hashingAlgorithm=_hashingAlgorithm - In the implementation block
@property (nonatomic,readonly) unsigned long long signingAlgorithm;              //@synthesize signingAlgorithm=_signingAlgorithm - In the implementation block
@property (nonatomic,copy,readonly) NSString * notes;                            //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy,readonly) NSData * publicKeyData;                      //@synthesize publicKeyData=_publicKeyData - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                      //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * flags;                            //@synthesize flags=_flags - In the implementation block
-(NSString *)notes;
-(NSString *)flags;
-(id)initWithRecord:(id)arg1 ;
-(id)description;
-(NSString *)serviceType;
-(NSData *)publicKeyData;
-(NSString *)version;
-(unsigned long long)signingAlgorithm;
-(unsigned long long)hashingAlgorithm;
-(void)_parseVersionFromDictionary:(id)arg1 ;
-(void)_parseAcceptableHashingAlgorithmsFromDictionary:(id)arg1 ;
-(void)_parseSigningAlgorithmFromDictionary:(id)arg1 ;
-(void)_parseNotesFromDictionary:(id)arg1 ;
-(void)_parsePublicKeyDataFromDictionary:(id)arg1 ;
-(void)_parseServiceTypeFromDictionary:(id)arg1 ;
-(void)_parseFlagsFromDictionary:(id)arg1 ;
-(id)initWithKeyValueDictionary:(id)arg1 ;
-(id)initWithVersion:(id)arg1 hashingAlgorithm:(unsigned long long)arg2 signingAlgorithm:(unsigned long long)arg3 notes:(id)arg4 publicKeyData:(id)arg5 serviceType:(id)arg6 flags:(id)arg7 ;
@end

