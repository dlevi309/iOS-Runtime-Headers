/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

