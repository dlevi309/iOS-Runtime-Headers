/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <libobjc.A.dylib/LPLinkHTMLGeneratorDelegate.h>

@protocol LPLinkHTMLTextGeneratorDelegate;
@class WebView, LPLinkHTMLGenerator, NSString, LPLinkMetadata, NSURL;

@interface LPLinkHTMLTextGenerator : NSObject <LPLinkHTMLGeneratorDelegate> {

	WebView* _webView;
	LPLinkHTMLGenerator* _DOMGenerator;
	NSString* _generatedFragmentText;
	id<LPLinkHTMLTextGeneratorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<LPLinkHTMLTextGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL generateEmailCompatibleMarkup; 
@property (nonatomic,copy) LPLinkMetadata * metadata; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * HTMLFragmentString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id<LPLinkHTMLTextGeneratorDelegate>)delegate;
-(void)setDelegate:(id<LPLinkHTMLTextGeneratorDelegate>)arg1 ;
-(NSURL *)URL;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(LPLinkMetadata *)metadata;
-(BOOL)generateEmailCompatibleMarkup;
-(void)setGenerateEmailCompatibleMarkup:(BOOL)arg1 ;
-(id)linkHTMLGenerator:(id)arg1 URLForResource:(id)arg2 withMIMEType:(id)arg3 ;
-(id)initWithPresentationProperties:(id)arg1 URL:(id)arg2 ;
-(void)_commonInitWithPresentationProperties:(id)arg1 URL:(id)arg2 ;
-(NSString *)HTMLFragmentString;
@end

