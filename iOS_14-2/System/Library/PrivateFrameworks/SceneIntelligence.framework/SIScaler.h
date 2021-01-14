/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
*/


#import <SceneIntelligence/SceneIntelligence-Structs.h>
@interface SIScaler : NSObject {

	CVPixelBufferPoolRef _pool;
	OpaqueVTPixelTransferSessionRef _session;
	CGSize _inputResolution;
	CGSize _outputResolution;

}
-(id)initForInputResolution:(CGSize)arg1 andOutputResolution:(CGSize)arg2 ;
-(CVBufferRef)scaleImage:(CVBufferRef)arg1 ;
@end

