/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>

@class EAGLContext;

@interface WebSwapLayerEAGL : CAEAGLLayer {

	EAGLContext* mDisplayContext;
	BOOL initialized;
	SharedSwapState* mSwapState;
	const FunctionsGL* mFunctions;
	unsigned mReadFramebuffer;

}
-(void)display;
-(id)initWithSharedState:(SharedSwapState*)arg1 withContext:(id)arg2 withFunctions:(const FunctionsGL*)arg3 ;
@end

