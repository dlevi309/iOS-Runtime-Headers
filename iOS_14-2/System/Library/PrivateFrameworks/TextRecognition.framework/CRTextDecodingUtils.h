/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@interface CRTextDecodingUtils : NSObject
+(void)getWordBoundariesForWhiteSpaceRanges:(id)arg1 topPoints:(id*)arg2 bottomPoints:(id*)arg3 imageSize:(CGSize)arg4 scale:(float)arg5 rect:(CGRect)arg6 rotatedRoi:(CGRect)arg7 radians:(float)arg8 model:(id)arg9 configuration:(id)arg10 ;
+(BOOL)validateProbability:(id)arg1 precisionThreshold:(double)arg2 withLM:(BOOL)arg3 ;
+(id)whitespaceRangesForTokens:(id)arg1 ;
@end

