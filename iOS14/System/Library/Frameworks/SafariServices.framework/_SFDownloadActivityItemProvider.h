/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)item;
-(id)pageTitle;
-(id)initWithQuickLookDocument:(id)arg1 URL:(id)arg2 webView:(id)arg3 ;
-(void)setQuickLookDocument:(_SFQuickLookDocument *)arg1 ;
-(id)activityViewControllerApplicationExtensionItem:(id)arg1 ;
-(_SFQuickLookDocument *)quickLookDocument;
@end

