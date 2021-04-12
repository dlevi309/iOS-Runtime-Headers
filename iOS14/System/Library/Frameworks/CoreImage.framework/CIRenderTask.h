/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIRenderTask : NSObject {

	void* _priv;

}
+(id)rendertaskWithInternalTask:(RenderTask*)arg1 ;
-(id)init;
-(id)_pdfDataRepresentation;
-(id)waitUntilCompletedAndReturnError:(id*)arg1 ;
-(RenderTask*)internalRepresentation;
-(void)dealloc;
-(id)initWithInternalTask:(RenderTask*)arg1 ;
@end

