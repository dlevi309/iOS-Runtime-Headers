/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUImageDataJob.h>

@class CIImage;

@interface NURedEyeDetectionJob : NUImageDataJob {

	CIImage* _fullSizeImage;

}
-(void)cleanUp;
-(id)requestOptions;
-(BOOL)prepare:(out id*)arg1 ;
@end

