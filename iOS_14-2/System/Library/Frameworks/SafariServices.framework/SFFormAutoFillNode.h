/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/WBSFormAutoFillNode.h>

@class WKWebProcessPlugInNodeHandle, NSString;

@interface SFFormAutoFillNode : NSObject <WBSFormAutoFillNode> {

	WKWebProcessPlugInNodeHandle* _nodeHandle;

}

@property (nonatomic,readonly) WKWebProcessPlugInNodeHandle * nodeHandle;              //@synthesize nodeHandle=_nodeHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)autoFillNodeWithNodeHandle:(id)arg1 ;
-(CGRect)elementBounds;
-(long long)htmlInputElementAutoFillButtonType;
-(long long)htmlInputElementLastAutoFillButtonType;
-(void)setHTMLInputElementAutofilled:(BOOL)arg1 ;
-(BOOL)isHTMLInputElementUserEdited;
-(BOOL)isHTMLTextAreaElementUserEdited;
-(void)setHTMLInputElementAutoFilledWithAutomaticStrongPassword:(BOOL)arg1 ;
-(id)initWithNodeHandle:(id)arg1 ;
-(id)initWithJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(WKWebProcessPlugInNodeHandle *)nodeHandle;
@end

