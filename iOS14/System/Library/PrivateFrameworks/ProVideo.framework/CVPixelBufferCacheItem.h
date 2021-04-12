/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSArray, PVColorSpace;

@interface CVPixelBufferCacheItem : NSObject {

	NSArray* _buffers;
	NSArray* _DODs;
	PVColorSpace* _colorSpace;
	CGSize _fullSize;

}

@property (nonatomic,readonly) NSArray * buffers;                      //@synthesize buffers=_buffers - In the implementation block
@property (nonatomic,readonly) NSArray * DODs;                         //@synthesize DODs=_DODs - In the implementation block
@property (nonatomic,readonly) CGSize fullSize;                        //@synthesize fullSize=_fullSize - In the implementation block
@property (nonatomic,readonly) PVColorSpace * colorSpace;              //@synthesize colorSpace=_colorSpace - In the implementation block
-(PVColorSpace *)colorSpace;
-(NSArray *)DODs;
-(CGSize)fullSize;
-(NSArray *)buffers;
-(id)initWithCVPixelBuffers:(id)arg1 DODs:(id)arg2 fullSize:(CGSize)arg3 colorSpace:(id)arg4 ;
@end

