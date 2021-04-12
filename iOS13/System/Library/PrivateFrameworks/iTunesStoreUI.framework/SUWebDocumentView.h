/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIWebDocumentView.h>
#import <libobjc.A.dylib/WebPolicyDelegate.h>

@class NSString;

@interface SUWebDocumentView : UIWebDocumentView <WebPolicyDelegate> {

	id _loadDelegate;
	NSString* _stylesheet;
	unsigned _adjustHeightToFit : 1;

}

@property (assign,nonatomic) id loadDelegate;                       //@synthesize loadDelegate=_loadDelegate - In the implementation block
@property (nonatomic,retain) NSString * stylesheet;                 //@synthesize stylesheet=_stylesheet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)loadDelegate;
-(void)setLoadDelegate:(id)arg1 ;
-(void)setPlaintextString:(id)arg1 ;
-(void)setHTMLFragment:(id)arg1 ;
-(NSString *)stylesheet;
-(void)setStylesheet:(NSString *)arg1 ;
@end

