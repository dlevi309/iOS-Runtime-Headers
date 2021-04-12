/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFActivityItemProvider.h>
#import <UIKit/UIActivityItemsSource.h>

@class UIPrintPageRenderer, NSItemProvider, LPFileMetadata, _SFPrintController, NSString;

@interface _SFPrintActivityItemProvider : _SFActivityItemProvider <UIActivityItemsSource> {

	UIPrintPageRenderer* _printPageRenderer;
	NSItemProvider* _pdfItemProvider;
	LPFileMetadata* _linkPreviewFileMetadata;
	BOOL _hasReservedPrintInteractionController;
	BOOL _canVendPDFRepresentation;
	_SFPrintController* _printController;

}

@property (nonatomic,readonly) _SFPrintController * printController;                    //@synthesize printController=_printController - In the implementation block
@property (nonatomic,readonly) BOOL hasReservedPrintInteractionController;              //@synthesize hasReservedPrintInteractionController=_hasReservedPrintInteractionController - In the implementation block
@property (assign,nonatomic) BOOL canVendPDFRepresentation;                             //@synthesize canVendPDFRepresentation=_canVendPDFRepresentation - In the implementation block
@property (nonatomic,readonly) NSItemProvider * pdfItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)item;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
-(void)setCanVendPDFRepresentation:(BOOL)arg1 ;
-(_SFPrintController *)printController;
-(NSItemProvider *)pdfItemProvider;
-(id)initWithPrintController:(id)arg1 webView:(id)arg2 ;
-(BOOL)hasReservedPrintInteractionController;
-(BOOL)canVendPDFRepresentation;
@end

