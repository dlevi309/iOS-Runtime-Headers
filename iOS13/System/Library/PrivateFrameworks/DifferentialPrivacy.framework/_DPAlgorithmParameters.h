/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)parameterDictionary;
-(NSString *)serverAlgorithmString;
@end

