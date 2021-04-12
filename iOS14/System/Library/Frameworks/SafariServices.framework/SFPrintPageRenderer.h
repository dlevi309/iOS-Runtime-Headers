/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIPrintPageRenderer.h>
#import <UIKit/UIPrintInteractionControllerDelegate.h>

@protocol SFPrintPageRendererDelegate;
@class NSNumberFormatter, NSString, UIFont, UIColor, UIPrintFormatter;

@interface SFPrintPageRenderer : UIPrintPageRenderer <UIPrintInteractionControllerDelegate> {

	NSNumberFormatter* _numberFormatter;
	double _URLWidth;
	NSString* _dateString;
	double _dateWidth;
	double _printWidth;
	CGPoint _contentOffset;
	CGPoint _footerOffset;
	UIFont* _footerFont;
	UIColor* _footerColor;
	BOOL _printFooter;
	NSString* _URLString;
	UIPrintFormatter* _contentFormatter;
	id<SFPrintPageRendererDelegate> _delegate;

}

@property (nonatomic,retain) NSString * URLString;                                         //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) UIPrintFormatter * contentFormatter;                          //@synthesize contentFormatter=_contentFormatter - In the implementation block
@property (assign,nonatomic) BOOL printFooter;                                             //@synthesize printFooter=_printFooter - In the implementation block
@property (assign,nonatomic,__weak) id<SFPrintPageRendererDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)URLString;
-(id)init;
-(id<SFPrintPageRendererDelegate>)delegate;
-(id)printInteractionControllerParentViewController:(id)arg1 ;
-(void)printInteractionControllerWillStartJob:(id)arg1 ;
-(void)printInteractionControllerDidFinishJob:(id)arg1 ;
-(void)drawFooterForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)setDelegate:(id<SFPrintPageRendererDelegate>)arg1 ;
-(void)setContentFormatter:(UIPrintFormatter *)arg1 ;
-(UIPrintFormatter *)contentFormatter;
-(BOOL)printFooter;
-(void)setPrintFooter:(BOOL)arg1 ;
-(void)setURLString:(NSString *)arg1 ;
@end

