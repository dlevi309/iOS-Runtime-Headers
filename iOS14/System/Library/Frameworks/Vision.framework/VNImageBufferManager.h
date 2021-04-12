/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeBuffer:(id)arg1 ;
-(id)init;
-(void)purgeAllCaches;
-(void)addImageBuffer:(id)arg1 ;
-(id)sharedCIContextWithOptions:(id)arg1 ;
-(void)dealloc;
@end

