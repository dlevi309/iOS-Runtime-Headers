/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface VNBlurSignature : NSObject {

	void* _signatureData;

}
+(id)computeBlurSignatureForGrayscaleImage:(CVBufferRef)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)initWithSignatureData:(void*)arg1 ;
-(void)setSignatureData:(void*)arg1 ;
-(void*)getSignatureData;
@end

