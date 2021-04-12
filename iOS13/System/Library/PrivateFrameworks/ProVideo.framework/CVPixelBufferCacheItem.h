/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSArray;

@interface CVPixelBufferCacheItem : NSObject {

	NSArray* _buffers;
	NSArray* _DODs;
	CGSize _fullSize;

}

@property (nonatomic,readonly) NSArray * buffers;              //@synthesize buffers=_buffers - In the implementation block
@property (nonatomic,readonly) NSArray * DODs;                 //@synthesize DODs=_DODs - In the implementation block
@property (nonatomic,readonly) CGSize fullSize;                //@synthesize fullSize=_fullSize - In the implementation block
-(NSArray *)buffers;
-(CGSize)fullSize;
-(id)initWithCVPixelBuffers:(id)arg1 DODs:(id)arg2 fullSize:(CGSize)arg3 ;
-(NSArray *)DODs;
@end

