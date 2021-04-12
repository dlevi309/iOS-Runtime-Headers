/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFActivityItemProvider.h>
#import <UIKit/UIActivityItemApplicationExtensionSource.h>

@class _SFQuickLookDocument, NSString;

@interface _SFDownloadActivityItemProvider : _SFActivityItemProvider <UIActivityItemApplicationExtensionSource> {

	_SFQuickLookDocument* _quickLookDocument;

}

@property (nonatomic,retain) _SFQuickLookDocument * quickLookDocument;              //@synthesize quickLookDocument=_quickLookDocument - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)item;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewControllerApplicationExtensionItem:(id)arg1 ;
-(id)pageTitle;
-(_SFQuickLookDocument *)quickLookDocument;
-(id)initWithQuickLookDocument:(id)arg1 URL:(id)arg2 webView:(id)arg3 ;
-(void)setQuickLookDocument:(_SFQuickLookDocument *)arg1 ;
@end

