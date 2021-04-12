/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSString, NSData, NSArray, NSDictionary;

@interface MLAppleTextClassifierParameters : NSObject {

	unsigned long long _revision;
	NSString* _language;
	NSString* _inputFeatureName;
	NSString* _outputFeatureName;
	NSData* _modelParameterData;
	NSArray* _labelNames;
	NSDictionary* _metadata;

}

@property (assign) unsigned long long revision;               //@synthesize revision=_revision - In the implementation block
@property (retain) NSString * language;                       //@synthesize language=_language - In the implementation block
@property (retain) NSString * inputFeatureName;               //@synthesize inputFeatureName=_inputFeatureName - In the implementation block
@property (retain) NSString * outputFeatureName;              //@synthesize outputFeatureName=_outputFeatureName - In the implementation block
@property (retain) NSData * modelParameterData;               //@synthesize modelParameterData=_modelParameterData - In the implementation block
@property (retain) NSArray * labelNames;                      //@synthesize labelNames=_labelNames - In the implementation block
@property (retain) NSDictionary * metadata;                   //@synthesize metadata=_metadata - In the implementation block
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setRevision:(unsigned long long)arg1 ;
-(NSString *)language;
-(id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 outputFeatureName:(id)arg4 modelData:(id)arg5 labelNames:(id)arg6 metadata:(id)arg7 error:(id*)arg8 ;
-(unsigned long long)revision;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)inputFeatureName;
-(void)setInputFeatureName:(NSString *)arg1 ;
-(NSString *)outputFeatureName;
-(void)setOutputFeatureName:(NSString *)arg1 ;
-(NSData *)modelParameterData;
-(void)setModelParameterData:(NSData *)arg1 ;
-(NSArray *)labelNames;
-(void)setLabelNames:(NSArray *)arg1 ;
-(id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 outputFeatureName:(id)arg4 modelData:(id)arg5 labelNames:(id)arg6 error:(id*)arg7 ;
@end

