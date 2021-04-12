/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface VNBlurSignature : NSObject {

	void* _signatureData;

}
+(id)computeBlurSignatureForGrayscaleImage:(CVBufferRef)arg1 error:(id*)arg2 ;
-(void)setSignatureData:(void*)arg1 ;
-(id)initWithSignatureData:(void*)arg1 ;
-(void*)getSignatureData;
-(void)dealloc;
@end

