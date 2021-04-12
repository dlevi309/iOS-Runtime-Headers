/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libANGLE-shared.dylib
*/

#import <libANGLE-shared.dylib/libANGLE-shared.dylib-Structs.h>
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

