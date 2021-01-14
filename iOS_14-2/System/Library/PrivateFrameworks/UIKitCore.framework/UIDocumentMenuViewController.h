/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKitCore/_UIDocumentPickerRemoteViewControllerContaining.h>
#import <UIKit/UIActionSheetPresentationControllerDelegate.h>

@protocol UIDocumentMenuDelegate;
@class NSMutableArray, _UIResilientRemoteViewContainerViewController, NSURL, NSArray, _UIDocumentPickerRemoteViewController, NSString;

@interface UIDocumentMenuViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining, UIActionSheetPresentationControllerDelegate> {

	id<UIDocumentMenuDelegate> _weak_delegate;
	BOOL _ignoreApplicationEntitlementForImport;
	BOOL _dismissDelegateCalled;
	BOOL _isContentManaged;
	id<UIDocumentMenuDelegate> _delegate;
	NSMutableArray* _auxiliaryOptions;
	_UIResilientRemoteViewContainerViewController* _childViewController;
	unsigned long long _documentPickerMode;
	NSURL* _uploadURL;
	NSArray* _allowedUTIs;

}

@property (nonatomic,retain) NSMutableArray * auxiliaryOptions;                                                                                                                        //@synthesize auxiliaryOptions=_auxiliaryOptions - In the implementation block
@property (setter=_setChildViewController:,getter=_childViewController,nonatomic,retain) _UIResilientRemoteViewContainerViewController * childViewController;                          //@synthesize childViewController=_childViewController - In the implementation block
@property (getter=_remoteViewController,nonatomic,retain,readonly) _UIDocumentPickerRemoteViewController * remoteViewController; 
@property (assign,nonatomic) BOOL dismissDelegateCalled;                                                                                                                               //@synthesize dismissDelegateCalled=_dismissDelegateCalled - In the implementation block
@property (assign,nonatomic) unsigned long long documentPickerMode;                                                                                                                    //@synthesize documentPickerMode=_documentPickerMode - In the implementation block
@property (nonatomic,copy) NSURL * uploadURL;                                                                                                                                          //@synthesize uploadURL=_uploadURL - In the implementation block
@property (nonatomic,copy) NSArray * allowedUTIs;                                                                                                                                      //@synthesize allowedUTIs=_allowedUTIs - In the implementation block
@property (assign,setter=_setIgnoreApplicationEntitlementForImport:,getter=_ignoreApplicationEntitlementForImport,nonatomic) BOOL _ignoreApplicationEntitlementForImport;              //@synthesize ignoreApplicationEntitlementForImport=_ignoreApplicationEntitlementForImport - In the implementation block
@property (assign,setter=_setIsContentManaged:,getter=_isContentManaged,nonatomic) BOOL isContentManaged;                                                                              //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (assign,setter=_setSourceIsManaged:,getter=_sourceIsManaged,nonatomic) BOOL sourceIsManaged; 
@property (assign,nonatomic,__weak) id<UIDocumentMenuDelegate> delegate;                                                                                                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_remoteViewController;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1 ;
-(id<UIDocumentMenuDelegate>)delegate;
-(BOOL)_isContentManaged;
-(void)setDelegate:(id<UIDocumentMenuDelegate>)arg1 ;
-(NSURL *)uploadURL;
-(void)_didSelectURL:(id)arg1 ;
-(void)_dismissViewController;
-(unsigned long long)documentPickerMode;
-(void)_didSelectPicker;
-(void)_dismissWithOption:(id)arg1 ;
-(void)_stitchFileCreationAtURL:(id)arg1 ;
-(void)setUploadURL:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2 ;
-(NSArray *)allowedUTIs;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)_commonInitWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2 ;
-(void)setDocumentPickerMode:(unsigned long long)arg1 ;
-(void)setAuxiliaryOptions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)auxiliaryOptions;
-(void)_setIsContentManaged:(BOOL)arg1 ;
-(void)setDismissDelegateCalled:(BOOL)arg1 ;
-(BOOL)_sourceIsManaged;
-(BOOL)dismissDelegateCalled;
-(void)_displayLocationsMenuFromRect:(CGRect)arg1 ;
-(void)_setSourceIsManaged:(BOOL)arg1 ;
-(id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1 ;
-(void)addOptionWithTitle:(id)arg1 image:(id)arg2 order:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)_ignoreApplicationEntitlementForImport;
-(void)_setIgnoreApplicationEntitlementForImport:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setChildViewController:(id)arg1 ;
-(id)_childViewController;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setAllowedUTIs:(NSArray *)arg1 ;
@end

