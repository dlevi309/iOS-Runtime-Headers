/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <libobjc.A.dylib/IKAppDocumentDelegate.h>

@protocol VSAppDocumentControllerDelegate;
@class IKAppDocument, VSViewModel, NSError, IKViewElement, NSString;

@interface VSAppDocumentController : NSObject <IKAppDocumentDelegate> {

	IKAppDocument* _appDocument;
	id<VSAppDocumentControllerDelegate> _delegate;
	VSViewModel* _viewModel;
	NSError* _viewModelError;
	IKViewElement* _templateElement;

}

@property (nonatomic,retain) IKAppDocument * appDocument;                                      //@synthesize appDocument=_appDocument - In the implementation block
@property (nonatomic,retain) VSViewModel * viewModel;                                          //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) NSError * viewModelError;                                         //@synthesize viewModelError=_viewModelError - In the implementation block
@property (nonatomic,retain) IKViewElement * templateElement;                                  //@synthesize templateElement=_templateElement - In the implementation block
@property (assign,nonatomic,__weak) id<VSAppDocumentControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<VSAppDocumentControllerDelegate>)delegate;
-(void)setDelegate:(id<VSAppDocumentControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(IKAppDocument *)appDocument;
-(IKViewElement *)templateElement;
-(void)documentNeedsUpdate:(id)arg1 ;
-(BOOL)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2 ;
-(void)setAppDocument:(IKAppDocument *)arg1 ;
-(void)setTemplateElement:(IKViewElement *)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(VSViewModel *)viewModel;
-(void)setViewModel:(VSViewModel *)arg1 ;
-(id)initWithAppDocument:(id)arg1 ;
-(id)_imageItemProviderWithImageElement:(id)arg1 ;
-(void)_startObservingViewModel:(id)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(id)_newViewModel;
-(NSError *)viewModelError;
-(void)_notiftyDidUpdateViewModel:(id)arg1 ;
-(void)setViewModelError:(NSError *)arg1 ;
-(void)_notiftyDidFailToUpdateViewModelWithError:(id)arg1 ;
-(BOOL)_updateViewModel:(id)arg1 WithError:(id*)arg2 ;
@end

