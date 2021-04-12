/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class IKAppDocument, SKUINavigationDocumentController, NSDictionary, UIViewController, UIPopoverPresentationController, NSString;

@interface SKUIDocumentStackItem : NSObject {

	IKAppDocument* _document;
	SKUINavigationDocumentController* _navigationDocumentController;
	NSDictionary* _presentationOptions;
	BOOL _usesNavigationControllerForModalPresentation;
	UIViewController* _viewController;
	UIPopoverPresentationController* _popoverPresentationController;

}

@property (nonatomic,readonly) IKAppDocument * document;                                                   //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) NSDictionary * presentationOptions;                                         //@synthesize presentationOptions=_presentationOptions - In the implementation block
@property (assign,nonatomic) BOOL usesNavigationControllerForModalPresentation;                            //@synthesize usesNavigationControllerForModalPresentation=_usesNavigationControllerForModalPresentation - In the implementation block
@property (nonatomic,retain) SKUINavigationDocumentController * navigationDocumentController;              //@synthesize navigationDocumentController=_navigationDocumentController - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                            //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIPopoverPresentationController * popoverPresentationController;              //@synthesize popoverPresentationController=_popoverPresentationController - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) NSString * presentationType; 
@property (nonatomic,readonly) NSString * sheetType; 
@property (nonatomic,readonly) NSString * overlayType; 
@property (nonatomic,readonly) NSString * sourceElementIdentifier; 
-(id)init;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(UIPopoverPresentationController *)popoverPresentationController;
-(BOOL)isAnimated;
-(NSString *)sheetType;
-(IKAppDocument *)document;
-(NSString *)presentationType;
-(id)initWithDocument:(id)arg1 presentationOptions:(id)arg2 ;
-(void)setNavigationDocumentController:(SKUINavigationDocumentController *)arg1 ;
-(NSDictionary *)presentationOptions;
-(void)_setDocument:(id)arg1 ;
-(NSString *)overlayType;
-(NSString *)sourceElementIdentifier;
-(SKUINavigationDocumentController *)navigationDocumentController;
-(BOOL)usesNavigationControllerForModalPresentation;
-(void)setUsesNavigationControllerForModalPresentation:(BOOL)arg1 ;
-(void)setPopoverPresentationController:(UIPopoverPresentationController *)arg1 ;
@end

