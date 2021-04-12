/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIRenderTask : NSObject {

	void* _priv;

}
+(id)rendertaskWithInternalTask:(RenderTask*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)waitUntilCompletedAndReturnError:(id*)arg1 ;
-(id)_pdfDataRepresentation;
-(RenderTask*)internalRepresentation;
-(id)initWithInternalTask:(RenderTask*)arg1 ;
@end

