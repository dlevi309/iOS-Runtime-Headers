/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray;

@interface BWVideoOrientationTimeMachine : NSObject {

	NSMutableArray* _cache;
	unsigned long long _capacity;
	opaqueCMFormatDescriptionRef _formatDescription;
	unsigned _metadataLocalID;
	OpaqueFigSimpleMutexRef _propertyMutex;

}
+(void)initialize;
-(id)debugDescription;
-(id)_cachedItemsFromPTSSeconds:(double)arg1 toPTSSeconds:(double)arg2 ;
-(opaqueCMSampleBufferRef)_newSbufWithCachedItem:(id)arg1 trimAtStartPTS:(SCD_Struct_BW8)arg2 referencePTS:(SCD_Struct_BW8)arg3 ;
-(id)initWithCapacity:(unsigned long long)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 metadataLocalID:(unsigned)arg3 ;
-(void)addItemToCacheWithPTS:(SCD_Struct_BW8)arg1 exifOrientation:(short)arg2 ;
-(id)copyVideoOrientationSbufFromPTS:(SCD_Struct_BW8)arg1 toPTS:(SCD_Struct_BW8)arg2 referencePTS:(SCD_Struct_BW8)arg3 ;
-(void)dealloc;
@end

