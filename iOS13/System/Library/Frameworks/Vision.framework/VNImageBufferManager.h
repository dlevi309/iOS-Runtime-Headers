/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@protocol MTLDevice;
@class CIContext, NSHashTable, NSLock;

@interface VNImageBufferManager : NSObject {

	CIContext* mainCIContext;
	id<MTLDevice> mainCIContextMetalDevice;
	CIContext* lowPriorityCIContext;
	id<MTLDevice> lowPriorityCIContextMetalDevice;
	NSHashTable* activeImageBuffers;
	NSLock* bufferTableLock;

}
+(id)manager;
-(id)init;
-(void)dealloc;
-(void)purgeAllCaches;
-(void)addImageBuffer:(id)arg1 ;
-(void)removeBuffer:(id)arg1 ;
-(id)sharedCIContextWithOptions:(id)arg1 ;
@end

