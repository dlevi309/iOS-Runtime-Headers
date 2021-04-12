/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKWebProcessPlugInFrame, NSString;

@interface WKWebProcessPlugInNodeHandle : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleNodeHandle> _nodeHandle;

}

@property (readonly) InjectedBundleNodeHandle* _nodeHandle; 
@property (nonatomic,readonly) CGRect elementBounds; 
@property (assign,nonatomic) BOOL HTMLInputElementIsAutoFilled; 
@property (assign,nonatomic) BOOL HTMLInputElementIsAutoFilledAndViewable; 
@property (nonatomic,readonly) BOOL HTMLInputElementIsUserEdited; 
@property (nonatomic,readonly) BOOL HTMLTextAreaElementIsUserEdited; 
@property (nonatomic,readonly) WKWebProcessPlugInNodeHandle * HTMLTableCellElementCellAbove; 
@property (nonatomic,readonly) WKWebProcessPlugInFrame * frame; 
@property (nonatomic,readonly) BOOL isSelectElement; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nodeHandleWithJSValue:(id)arg1 inContext:(id)arg2 ;
-(InjectedBundleNodeHandle*)_nodeHandle;
-(id)htmlIFrameElementContentFrame;
-(id)renderedImageWithOptions:(unsigned)arg1 width:(id)arg2 ;
-(id)renderedImageWithOptions:(unsigned)arg1 ;
-(CGRect)elementBounds;
-(BOOL)HTMLInputElementIsAutoFilled;
-(BOOL)isSelectElement;
-(BOOL)HTMLInputElementIsAutoFilledAndViewable;
-(void)setHTMLInputElementIsAutoFilled:(BOOL)arg1 ;
-(void)setHTMLInputElementIsAutoFilledAndViewable:(BOOL)arg1 ;
-(BOOL)isHTMLInputElementAutoFillButtonEnabled;
-(void)setHTMLInputElementAutoFillButtonEnabledWithButtonType:(long long)arg1 ;
-(long long)htmlInputElementAutoFillButtonType;
-(long long)htmlInputElementLastAutoFillButtonType;
-(BOOL)HTMLInputElementIsUserEdited;
-(BOOL)HTMLTextAreaElementIsUserEdited;
-(BOOL)isTextField;
-(WKWebProcessPlugInNodeHandle *)HTMLTableCellElementCellAbove;
-(WKWebProcessPlugInFrame *)frame;
-(Object*)_apiObject;
-(void)dealloc;
@end

