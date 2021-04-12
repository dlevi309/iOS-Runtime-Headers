/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIWebView *)webView;
-(CGRect)_frame;
-(UIImage *)imageRepresentation;
-(DOMElement *)element;
-(CGRect)frame;
-(void)setProperty:(id)arg1 value:(id)arg2 ;
-(NSString *)innerText;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)dealloc;
-(id)newLabelForElementWithText:(id)arg1 ;
-(id)newImageView;
-(id)initWithDOMElement:(id)arg1 ;
@end

