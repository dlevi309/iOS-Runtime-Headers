/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol WBSFormAutoFillFrame <NSObject>
@required
-(id)committedURL;
-(BOOL)containsAnyFormElements;
-(OpaqueFormAutoFillFrameRef)frameRef;
-(OpaqueJSContextRef)jsContextForMetadataControllerScriptWorld;
-(OpaqueJSValueRef)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1;
-(void)enumerateChildFramesUsingBlock:(/*^block*/id)arg1;
-(id)pageMainFrame;

@end

