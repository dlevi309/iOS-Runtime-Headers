/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class DOMElement, UIImage, UIWebView, NSString;

@interface SUDOMElement : NSObject {

	DOMElement* _element;
	UIImage* _image;
	UIWebView* _webView;

}

@property (nonatomic,readonly) DOMElement * element;                       //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) UIImage * imageRepresentation; 
@property (nonatomic,readonly) NSString * innerText; 
@property (nonatomic,retain) UIWebView * webView;                          //@synthesize webView=_webView - In the implementation block
+(CGRect)frameForDOMElement:(id)arg1 ;
-(void)dealloc;
-(DOMElement *)element;
-(CGRect)_frame;
-(CGRect)frame;
-(UIImage *)imageRepresentation;
-(UIWebView *)webView;
-(NSString *)innerText;
-(void)setWebView:(UIWebView *)arg1 ;
-(id)initWithDOMElement:(id)arg1 ;
-(id)newLabelForElementWithText:(id)arg1 ;
-(id)newImageView;
-(void)setProperty:(id)arg1 value:(id)arg2 ;
@end

