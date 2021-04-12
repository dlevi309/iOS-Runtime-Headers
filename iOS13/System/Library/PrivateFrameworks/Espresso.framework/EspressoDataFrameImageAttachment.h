/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/Espresso-Structs.h>
#import <Espresso/EspressoDataFrameAttachment.h>

@interface EspressoDataFrameImageAttachment : EspressoDataFrameAttachment {

	vImage_Buffer* buffer;
	int _nChannels;

}

@property (assign) int nChannels;              //@synthesize nChannels=_nChannels - In the implementation block
+(CVBufferRef)createCVPixelBufferFromvImage:(vImage_Buffer*)arg1 withPixelFormat:(unsigned)arg2 ;
-(vImage_Buffer*)copyAsImageGrayscaleOrBGRA;
-(void)loadFromDict:(id)arg1 frameStorage:(id)arg2 ;
-(int)nChannels;
-(void)setNChannels:(int)arg1 ;
@end

