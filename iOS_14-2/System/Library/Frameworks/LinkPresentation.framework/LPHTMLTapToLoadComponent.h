/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)styleSet;
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)ruleDictionaryForStyleWithDarkInterface:(id)arg1 ;
-(void)buildComponents;
-(id)initWithThemePath:(id)arg1 generator:(id)arg2 ;
-(void)handleEvent:(id)arg1 ;
@end

