/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSString, NSDictionary;

@interface _DPAlgorithmParameters : NSObject {

	NSString* _serverAlgorithmString;
	NSDictionary* _parameterDictionary;

}

@property (nonatomic,copy,readonly) NSString * serverAlgorithmString;              //@synthesize serverAlgorithmString=_serverAlgorithmString - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameterDictionary;                 //@synthesize parameterDictionary=_parameterDictionary - In the implementation block
+(id)parametersFromFile:(id)arg1 ;
+(id)algorithmParametersFromDictionary:(id)arg1 ;
+(id)algorithmParametersForKey:(id)arg1 ;
+(id)allAlgorithmNames;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSDictionary *)parameterDictionary;
-(NSString *)serverAlgorithmString;
@end

