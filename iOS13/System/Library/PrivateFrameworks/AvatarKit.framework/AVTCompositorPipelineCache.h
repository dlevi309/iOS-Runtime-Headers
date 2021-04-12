/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@protocol MTLLibrary;
@class NSMutableDictionary;

@interface AVTCompositorPipelineCache : NSObject {

	id<MTLLibrary> _library;
	NSMutableDictionary* _pipelines;

}
+(id)pipelineForPropertyName:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(id)pipelineForPropertyName:(id)arg1 ;
@end

