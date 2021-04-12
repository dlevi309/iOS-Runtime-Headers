/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(CGSize)size;
-(NSError *)error;
-(void)main;
-(CVBufferRef)pixelBuffer;
-(HMICameraVideoFrame *)frame;
-(CGRect)cropRect;
-(id)initWithFrame:(id)arg1 size:(CGSize)arg2 ;
@end

