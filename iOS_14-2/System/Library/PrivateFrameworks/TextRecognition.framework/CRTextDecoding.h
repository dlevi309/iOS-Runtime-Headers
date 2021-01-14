/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@protocol CRTextDecoding <NSObject>
@required
-(void)decodeOutput:(id)arg1 imageSize:(CGSize)arg2 error:(id*)arg3;
-(id)initWithConfiguration:(id)arg1 model:(id)arg2 error:(id*)arg3;
-(BOOL)shouldDecodeWithLM;

@end

