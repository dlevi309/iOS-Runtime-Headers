/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/


#import <RawCamera/RawCamera-Structs.h>
@interface FujiSuperCCDReconstructionImageProvider : NSObject {

	shared_ptr<CRawImageFujiBase>* image;
	weak_ptr<CRawImageFujiBase>* imageWeak;
	reconstructionDataV2_s reconstructionData;
	BOOL _retainedImage;

}
-(void)dealloc;
-(void)provideImageData:(void*)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3 :(unsigned long long)arg4 size:(unsigned long long)arg5 :(unsigned long long)arg6 userInfo:(id)arg7 ;
-(id)initWithRawImage:(shared_ptr<CRawImageFujiBase>*)arg1 shouldRetainRawImage:(BOOL)arg2 ;
@end

