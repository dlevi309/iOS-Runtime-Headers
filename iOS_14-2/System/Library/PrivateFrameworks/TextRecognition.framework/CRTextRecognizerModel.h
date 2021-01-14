/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@protocol CRTextRecognizerModel <NSObject,CRTextRecognizerModelInputProvider>
@property (assign,nonatomic) int* codemapArray; 
@property (assign,nonatomic) long long ctcBlankLabelIndex; 
@required
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2;
-(id)predictFromInputs:(id)arg1 error:(id*)arg2;
-(int*)codemapArray;
-(long long)ctcBlankLabelIndex;
-(void)setCodemapArray:(int*)arg1;
-(void)setCtcBlankLabelIndex:(long long)arg1;

@end

