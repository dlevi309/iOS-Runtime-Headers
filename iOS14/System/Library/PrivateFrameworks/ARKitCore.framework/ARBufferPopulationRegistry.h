/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@class NSMutableDictionary;

@interface ARBufferPopulationRegistry : NSObject {

	NSMutableDictionary* _bufferToLabelLUT;
	NSMutableDictionary* _labelToBuffersLUT;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(id)description;
-(unsigned long long)countWithLabel:(id)arg1 ;
-(id)labelForBufferWithSurfaceID:(id)arg1 ;
-(void)registerBufferWithSurfaceID:(id)arg1 label:(id)arg2 ;
-(id)surfaceIDsForBuffersWithLabel:(id)arg1 ;
-(void)unregisterBufferWithSurfaceID:(id)arg1 ;
@end

