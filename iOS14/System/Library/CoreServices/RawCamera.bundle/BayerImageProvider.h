/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/


#import <RawCamera/RawCamera-Structs.h>
@interface BayerImageProvider : NSObject {

	shared_ptr<CRawImage>* image;
	weak_ptr<CRawImage>* imageWeak;
	BOOL _retainedImage;

}
-(id)init;
-(void)provideImageData:(void*)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3 :(unsigned long long)arg4 size:(unsigned long long)arg5 :(unsigned long long)arg6 userInfo:(id)arg7 ;
-(id)initWithRawImage:(shared_ptr<CRawImage>*)arg1 shouldRetainRawImage:(BOOL)arg2 ;
@end

