/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class MLModel, NSString;

@interface CRTextRecognizerModel : NSObject {

	MLModel* _model;
	NSString* _codemap;
	unsigned short* _codemapArray;
	long long _ctcBlankLabelIndex;

}

@property (nonatomic,readonly) MLModel * model;                         //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * codemap;                        //@synthesize codemap=_codemap - In the implementation block
@property (assign,nonatomic) unsigned short* codemapArray;              //@synthesize codemapArray=_codemapArray - In the implementation block
@property (assign,nonatomic) long long ctcBlankLabelIndex;              //@synthesize ctcBlankLabelIndex=_ctcBlankLabelIndex - In the implementation block
+(id)urlOfModelInThisBundle;
-(id)init;
-(void)dealloc;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(MLModel *)model;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(unsigned short*)codemapArray;
-(long long)ctcBlankLabelIndex;
-(NSString *)codemap;
-(id)predictionFromImg_input:(id)arg1 error:(id*)arg2 ;
-(void)setCodemap:(NSString *)arg1 ;
-(void)setCodemapArray:(unsigned short*)arg1 ;
-(void)setCtcBlankLabelIndex:(long long)arg1 ;
@end

