/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class SCRCMathExpression, UIAccessibilityMathWebView, NSDictionary, NSString;

@interface UIAccessibilityMathViewController : UIViewController <WKNavigationDelegate> {

	SCRCMathExpression* _mathExpression;
	UIAccessibilityMathWebView* _webView;
	NSDictionary* _mathDictionary;

}

@property (nonatomic,readonly) NSDictionary * mathDictionary;              //@synthesize mathDictionary=_mathDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_doneButtonTapped;
-(void)_styleBarButtonItem:(id)arg1 ;
-(id)initWithMathDictionary:(id)arg1 ;
-(NSDictionary *)mathDictionary;
-(void)viewDidLoad;
-(void)loadView;
-(id)_htmlString;
@end

