/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@interface ARScreenImageCapturer : NSObject {

	double _serverScale;
	long long _interfaceOrientation;

}

@property (assign,nonatomic) double serverScale;                          //@synthesize serverScale=_serverScale - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(id)sharedData;
+(CGImageRef)screenShot;
+(CGImageRef)screenShotCA;
+(CGImageRef)scaleToSize:(CGImageRef)arg1 newSize:(CGSize)arg2 ;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setServerScale:(double)arg1 ;
-(double)serverScale;
@end

