/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)loadFromDict:(id)arg1 frameStorage:(id)arg2 ;
-(int)nChannels;
-(vImage_Buffer*)copyAsImageGrayscaleOrBGRA;
-(void)setNChannels:(int)arg1 ;
@end

