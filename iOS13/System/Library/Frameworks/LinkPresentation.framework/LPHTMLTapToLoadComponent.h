/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPHTMLComponent.h>
#import <libobjc.A.dylib/DOMEventListener.h>

@class DOMElement, NSString;

@interface LPHTMLTapToLoadComponent : LPHTMLComponent <DOMEventListener> {

	DOMElement* _tapToLoadLabelElement;
	DOMElement* _tapToLoadSpinnerElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
+(id)ruleDictionaryForStyleWithDarkInterface:(id)arg1 ;
-(void)handleEvent:(id)arg1 ;
-(void)buildComponents;
-(id)initWithThemePath:(id)arg1 generator:(id)arg2 ;
@end

