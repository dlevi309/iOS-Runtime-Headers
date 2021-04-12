/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


#import <UB/UB-Structs.h>
@class NSMutableDictionary;

@interface DeepFusionOutput : NSObject {

	CVBufferRef _buffer;
	NSMutableDictionary* _metadata;

}

@property (nonatomic,retain) CVBufferRef buffer;                          //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(void)dealloc;
-(void)setBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)buffer;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)metadata;
@end

