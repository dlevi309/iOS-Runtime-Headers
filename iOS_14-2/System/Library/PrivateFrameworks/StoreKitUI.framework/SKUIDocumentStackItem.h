/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAnimated;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)init;
-(NSString *)sheetType;
-(NSDictionary *)presentationOptions;
-(UIPopoverPresentationController *)popoverPresentationController;
-(UIViewController *)viewController;
-(NSString *)presentationType;
-(IKAppDocument *)document;
-(NSString *)overlayType;
-(void)setNavigationDocumentController:(SKUINavigationDocumentController *)arg1 ;
-(id)initWithDocument:(id)arg1 presentationOptions:(id)arg2 ;
-(void)_setDocument:(id)arg1 ;
-(NSString *)sourceElementIdentifier;
-(SKUINavigationDocumentController *)navigationDocumentController;
-(BOOL)usesNavigationControllerForModalPresentation;
-(void)setUsesNavigationControllerForModalPresentation:(BOOL)arg1 ;
-(void)setPopoverPresentationController:(UIPopoverPresentationController *)arg1 ;
@end

