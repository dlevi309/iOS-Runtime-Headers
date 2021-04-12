/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSString, NSData, NSArray, NSDictionary;

@interface MLAppleWordTaggerParameters : NSObject {

	unsigned long long _revision;
	NSString* _language;
	NSString* _inputFeatureName;
	NSString* _tokensOutputFeatureName;
	NSString* _tokenTagsOutputFeatureName;
	NSString* _tokenLocationsOutputFeatureName;
	NSString* _tokenLengthsOutputFeatureName;
	NSData* _modelParameterData;
	NSArray* _tagNames;
	NSDictionary* _metadata;

}

@property (assign) unsigned long long revision;                             //@synthesize revision=_revision - In the implementation block
@property (retain) NSString * language;                                     //@synthesize language=_language - In the implementation block
@property (retain) NSString * inputFeatureName;                             //@synthesize inputFeatureName=_inputFeatureName - In the implementation block
@property (retain) NSString * tokensOutputFeatureName;                      //@synthesize tokensOutputFeatureName=_tokensOutputFeatureName - In the implementation block
@property (retain) NSString * tokenTagsOutputFeatureName;                   //@synthesize tokenTagsOutputFeatureName=_tokenTagsOutputFeatureName - In the implementation block
@property (retain) NSString * tokenLocationsOutputFeatureName;              //@synthesize tokenLocationsOutputFeatureName=_tokenLocationsOutputFeatureName - In the implementation block
@property (retain) NSString * tokenLengthsOutputFeatureName;                //@synthesize tokenLengthsOutputFeatureName=_tokenLengthsOutputFeatureName - In the implementation block
@property (retain) NSData * modelParameterData;                             //@synthesize modelParameterData=_modelParameterData - In the implementation block
@property (retain) NSArray * tagNames;                                      //@synthesize tagNames=_tagNames - In the implementation block
@property (retain) NSDictionary * metadata;                                 //@synthesize metadata=_metadata - In the implementation block
-(void)setLanguage:(NSString *)arg1 ;
-(void)setRevision:(unsigned long long)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 tokensFeatureName:(id)arg4 tokenTagsFeatureName:(id)arg5 tokenLocationsFeatureName:(id)arg6 tokenLengthsFeatureName:(id)arg7 modelData:(id)arg8 tagNames:(id)arg9 metadata:(id)arg10 error:(id*)arg11 ;
-(NSString *)tokensOutputFeatureName;
-(void)setTagNames:(NSArray *)arg1 ;
-(id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 tokensFeatureName:(id)arg4 tokenTagsFeatureName:(id)arg5 tokenLocationsFeatureName:(id)arg6 tokenLengthsFeatureName:(id)arg7 modelData:(id)arg8 tagNames:(id)arg9 error:(id*)arg10 ;
-(void)setTokensOutputFeatureName:(NSString *)arg1 ;
-(NSString *)tokenTagsOutputFeatureName;
-(void)setTokenTagsOutputFeatureName:(NSString *)arg1 ;
-(NSString *)tokenLocationsOutputFeatureName;
-(void)setTokenLocationsOutputFeatureName:(NSString *)arg1 ;
-(NSString *)tokenLengthsOutputFeatureName;
-(void)setTokenLengthsOutputFeatureName:(NSString *)arg1 ;
-(NSArray *)tagNames;
-(NSString *)inputFeatureName;
-(void)setInputFeatureName:(NSString *)arg1 ;
-(NSData *)modelParameterData;
-(void)setModelParameterData:(NSData *)arg1 ;
-(NSDictionary *)metadata;
-(NSString *)language;
-(unsigned long long)revision;
@end

