/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/WBSFormAutoFillFrame.h>

@class WKWebProcessPlugInFrame, NSString;

@interface SFFormAutoFillFrame : NSObject <WBSFormAutoFillFrame> {

	WKWebProcessPlugInFrame* _plugInFrame;

}

@property (nonatomic,readonly) WKWebProcessPlugInFrame * plugInFrame;              //@synthesize plugInFrame=_plugInFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)autoFillFrameWithWebProcessPlugInFrame:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)committedURL;
-(BOOL)containsAnyFormElements;
-(WKWebProcessPlugInFrame *)plugInFrame;
-(id)initWithWebProcessPlugInFrame:(id)arg1 ;
-(id)_pageContoller;
-(id)_formMetadataController;
-(OpaqueFormAutoFillFrameRef)frameRef;
-(OpaqueJSContextRef)jsContextForMetadataControllerScriptWorld;
-(OpaqueJSValueRef)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1 ;
-(void)enumerateChildFramesUsingBlock:(/*^block*/id)arg1 ;
-(id)pageMainFrame;
@end

