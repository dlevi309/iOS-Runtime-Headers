/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <libobjc.A.dylib/CRTextRecognizerModel.h>

@class NSDictionary, NSNumber, CRRecognizerConfiguration, NSURL, NSString;

@interface CRTextSequenceRecognizerModel : NSObject <CRTextRecognizerModel> {

	int* _codemapArray;
	unsigned long long _codemapSize;
	long long _ctcBlankLabelIndex;
	NSDictionary* _outputShape;
	NSNumber* _outputWidthDownscale;
	NSNumber* _outputWidthOffset;
	CRRecognizerConfiguration* _configuration;

}

@property (assign,nonatomic) int* codemapArray;                              //@synthesize codemapArray=_codemapArray - In the implementation block
@property (assign,nonatomic) unsigned long long codemapSize;                 //@synthesize codemapSize=_codemapSize - In the implementation block
@property (assign,nonatomic) long long ctcBlankLabelIndex;                   //@synthesize ctcBlankLabelIndex=_ctcBlankLabelIndex - In the implementation block
@property (nonatomic,retain) NSDictionary * outputShape;                     //@synthesize outputShape=_outputShape - In the implementation block
@property (nonatomic,retain) NSNumber * outputWidthDownscale;                //@synthesize outputWidthDownscale=_outputWidthDownscale - In the implementation block
@property (nonatomic,retain) NSNumber * outputWidthOffset;                   //@synthesize outputWidthOffset=_outputWidthOffset - In the implementation block
@property (readonly) CRRecognizerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NSURL * modelURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultURLOfModelInThisBundle;
-(NSURL *)modelURL;
-(NSDictionary *)outputShape;
-(CRRecognizerConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)predictFromInputs:(id)arg1 error:(id*)arg2 ;
-(id)populateInputBatchData:(float*)arg1 textFeatures:(id)arg2 image:(id)arg3 batchSize:(long long)arg4 width:(double)arg5 configuration:(id)arg6 ;
-(id)inputBatchFromTextFeatures:(id)arg1 image:(id)arg2 featureWidth:(double)arg3 configuration:(id)arg4 ;
-(NSNumber *)outputWidthDownscale;
-(int*)codemapArray;
-(unsigned long long)codemapSize;
-(long long)ctcBlankLabelIndex;
-(NSNumber *)outputWidthOffset;
-(void)setCodemapArray:(int*)arg1 ;
-(void)setCtcBlankLabelIndex:(long long)arg1 ;
-(void)setCodemapSize:(unsigned long long)arg1 ;
-(void)setOutputShape:(NSDictionary *)arg1 ;
-(void)setOutputWidthDownscale:(NSNumber *)arg1 ;
-(void)setOutputWidthOffset:(NSNumber *)arg1 ;
@end

