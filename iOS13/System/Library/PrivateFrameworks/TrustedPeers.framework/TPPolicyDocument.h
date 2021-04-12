/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/


@class NSArray, NSDictionary, TPPolicyVersion, NSData;

@interface TPPolicyDocument : NSObject {

	NSArray* _modelToCategory;
	NSDictionary* _categoriesByView;
	NSDictionary* _introducersByCategory;
	NSDictionary* _redactions;
	NSArray* _keyViewMapping;
	TPPolicyVersion* _version;
	NSData* _protobuf;

}

@property (nonatomic,retain) TPPolicyVersion * version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * protobuf;                                 //@synthesize protobuf=_protobuf - In the implementation block
@property (nonatomic,retain) NSArray * modelToCategory;                         //@synthesize modelToCategory=_modelToCategory - In the implementation block
@property (nonatomic,retain) NSDictionary * categoriesByView;                   //@synthesize categoriesByView=_categoriesByView - In the implementation block
@property (nonatomic,retain) NSDictionary * introducersByCategory;              //@synthesize introducersByCategory=_introducersByCategory - In the implementation block
@property (nonatomic,retain) NSDictionary * redactions;                         //@synthesize redactions=_redactions - In the implementation block
@property (nonatomic,retain) NSArray * keyViewMapping;                          //@synthesize keyViewMapping=_keyViewMapping - In the implementation block
+(BOOL)isEqualKeyViewMapping:(id)arg1 other:(id)arg2 ;
+(id)introducersByCategoryFromPb:(id)arg1 ;
+(id)categoriesByViewFromPb:(id)arg1 ;
+(id)modelToCategoryFromPb:(id)arg1 ;
+(void)addKeyViewMapping:(id)arg1 toPB:(id)arg2 ;
+(void)addRedactions:(id)arg1 toPB:(id)arg2 ;
+(void)addIntroducersByCategory:(id)arg1 toPB:(id)arg2 ;
+(void)addCategoriesByView:(id)arg1 toPB:(id)arg2 ;
+(void)addModelToCategory:(id)arg1 toPB:(id)arg2 ;
+(id)modelToCategoryRulesFromArray:(id)arg1 ;
+(id)dictionaryOfSetsFromDictionaryOfArrays:(id)arg1 ;
+(id)redactionsFromPb:(id)arg1 ;
+(id)policyDocWithHash:(id)arg1 data:(id)arg2 ;
+(id)policyDocumentWithVersion:(unsigned long long)arg1 modelToCategory:(id)arg2 categoriesByView:(id)arg3 introducersByCategory:(id)arg4 redactions:(id)arg5 keyViewMapping:(id)arg6 hashAlgo:(long long)arg7 error:(id*)arg8 ;
+(id)policyDocumentWithInternalVersion:(unsigned long long)arg1 modelToCategory:(id)arg2 categoriesByView:(id)arg3 introducersByCategory:(id)arg4 redactions:(id)arg5 keyViewMapping:(id)arg6 hashAlgo:(long long)arg7 error:(id*)arg8 ;
+(id)redactionWithEncrypter:(id)arg1 modelToCategory:(id)arg2 categoriesByView:(id)arg3 introducersByCategory:(id)arg4 keyViewMapping:(id)arg5 error:(id*)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(TPPolicyVersion *)version;
-(void)setVersion:(TPPolicyVersion *)arg1 ;
-(void)setProtobuf:(NSData *)arg1 ;
-(NSData *)protobuf;
-(NSArray *)modelToCategory;
-(void)setModelToCategory:(NSArray *)arg1 ;
-(NSDictionary *)categoriesByView;
-(void)setCategoriesByView:(NSDictionary *)arg1 ;
-(NSDictionary *)introducersByCategory;
-(void)setIntroducersByCategory:(NSDictionary *)arg1 ;
-(NSArray *)keyViewMapping;
-(void)setKeyViewMapping:(NSArray *)arg1 ;
-(id)encodeProtobuf;
-(id)encodeProtobufWithVersion:(unsigned long long)arg1 ;
-(id)policyWithSecrets:(id)arg1 decrypter:(id)arg2 error:(id*)arg3 ;
-(BOOL)isEqualToPolicyDocument:(id)arg1 ;
-(id)cloneWithVersionNumber:(unsigned long long)arg1 ;
-(NSDictionary *)redactions;
-(void)setRedactions:(NSDictionary *)arg1 ;
@end

