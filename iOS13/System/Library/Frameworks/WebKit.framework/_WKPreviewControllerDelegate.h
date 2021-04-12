/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>

@class NSString;

@interface _WKPreviewControllerDelegate : NSObject <QLPreviewControllerDelegate> {

	SystemPreviewController* _previewController;
	IntRect _linkRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)presentingViewController;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(id)initWithSystemPreviewController:(SystemPreviewController*)arg1 ;
@end

