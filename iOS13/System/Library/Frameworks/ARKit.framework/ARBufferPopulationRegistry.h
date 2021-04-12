/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@class NSMutableDictionary;

@interface ARBufferPopulationRegistry : NSObject {

	NSMutableDictionary* _bufferToLabelLUT;
	NSMutableDictionary* _labelToBuffersLUT;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(id)description;
-(unsigned long long)count;
-(unsigned long long)countWithLabel:(id)arg1 ;
-(id)labelForBufferWithSurfaceID:(id)arg1 ;
-(void)registerBufferWithSurfaceID:(id)arg1 label:(id)arg2 ;
-(id)surfaceIDsForBuffersWithLabel:(id)arg1 ;
-(void)unregisterBufferWithSurfaceID:(id)arg1 ;
@end

