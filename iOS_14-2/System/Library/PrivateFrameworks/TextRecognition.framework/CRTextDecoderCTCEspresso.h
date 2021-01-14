/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <TextRecognition/CRTextDecoderCTCV2.h>

@interface CRTextDecoderCTCEspresso : CRTextDecoderCTCV2
-(void)decodeOutput:(id)arg1 imageSize:(CGSize)arg2 error:(id*)arg3 ;
-(id)_buildActivationMatrices:(id)arg1 ;
-(void)_decodeFeaturesWithInfo:(id)arg1 activations:(id)arg2 imageSize:(CGSize)arg3 error:(id*)arg4 ;
-(void)_create2DArraysFromInputArray:(id)arg1 classSize:(unsigned long long*)arg2 outputArrays:(vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t> >*)arg3 ;
@end

