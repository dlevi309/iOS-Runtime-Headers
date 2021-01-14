/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(OpaqueJSContextRef)jsContextForMetadataControllerScriptWorld;
-(void)enumerateChildFramesUsingBlock:(/*^block*/id)arg1 ;
-(id)pageMainFrame;
-(OpaqueJSValueRef)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1 ;
-(OpaqueFormAutoFillFrameRef)frameRef;
-(WKWebProcessPlugInFrame *)plugInFrame;
-(id)initWithWebProcessPlugInFrame:(id)arg1 ;
-(id)_pageContoller;
-(id)_formMetadataController;
-(unsigned long long)hash;
-(id)committedURL;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)containsAnyFormElements;
@end

