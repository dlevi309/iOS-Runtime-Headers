/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITextPlaceholder.h>

@class UIWebDocumentView, DOMElement;

@interface UIWebTextPlaceholder : UITextPlaceholder {

	UIWebDocumentView* _webDocumentView;
	DOMElement* _element;

}

@property (nonatomic,retain) DOMElement * element;              //@synthesize element=_element - In the implementation block
+(id)placeholderWithWebDocumentView:(id)arg1 ;
-(id)rects;
-(DOMElement *)element;
-(void)setElement:(DOMElement *)arg1 ;
-(void)dealloc;
@end

