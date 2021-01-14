/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <Foundation/NSOperation.h>

@class HMICameraVideoFrame, NSError;

@interface HMIRegionOfInterestOperation : NSOperation {

	CVBufferRef _pixelBuffer;
	HMICameraVideoFrame* _frame;
	NSError* _error;
	CGSize _size;
	CGRect _cropRect;

}

@property (readonly) CVBufferRef pixelBuffer;                         //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) CGRect cropRect;                                 //@synthesize cropRect=_cropRect - In the implementation block
@property (__weak,readonly) HMICameraVideoFrame * frame;              //@synthesize frame=_frame - In the implementation block
@property (readonly) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
-(CGRect)cropRect;
-(CGSize)size;
-(HMICameraVideoFrame *)frame;
-(NSError *)error;
-(void)main;
-(CVBufferRef)pixelBuffer;
-(void)dealloc;
-(id)initWithFrame:(id)arg1 size:(CGSize)arg2 ;
@end

