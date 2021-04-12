/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol DOCServiceDocumentBrowserViewControllerInterface, DOCServiceTransitionProtocol;
@class NSURL, FPItem, UIView, NSProgress, NSOperationQueue, NSString;

@interface UIDocumentBrowserTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {

	NSURL* _itemURL;
	FPItem* _item;
	id<DOCServiceDocumentBrowserViewControllerInterface> _serviceDocumentBrowserProxy;
	UIView* _referenceView;
	BOOL _transitionDidFinish;
	NSProgress* _loadingProgress;
	UIView* _targetView;
	id<DOCServiceTransitionProtocol> _transitionController;
	NSOperationQueue* _transitionControllerQueue;

}

@property (assign) BOOL transitionDidFinish;                                                     //@synthesize transitionDidFinish=_transitionDidFinish - In the implementation block
@property (nonatomic,retain) id<DOCServiceTransitionProtocol> transitionController;              //@synthesize transitionController=_transitionController - In the implementation block
@property (nonatomic,retain) NSOperationQueue * transitionControllerQueue;                       //@synthesize transitionControllerQueue=_transitionControllerQueue - In the implementation block
@property (nonatomic,retain) NSProgress * loadingProgress;                                       //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (assign,nonatomic,__weak) UIView * targetView;                                         //@synthesize targetView=_targetView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_commonInit;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(UIView *)targetView;
-(void)setTargetView:(UIView *)arg1 ;
-(id)initWithItemURL:(id)arg1 documentBrowserProxy:(id)arg2 referenceView:(id)arg3 ;
-(void)setTransitionController:(id<DOCServiceTransitionProtocol>)arg1 ;
-(NSOperationQueue *)transitionControllerQueue;
-(NSProgress *)loadingProgress;
-(BOOL)transitionDidFinish;
-(id<DOCServiceTransitionProtocol>)transitionController;
-(void)setTransitionDidFinish:(BOOL)arg1 ;
-(void)setLoadingProgress:(NSProgress *)arg1 ;
-(id)initWithItem:(id)arg1 documentBrowserProxy:(id)arg2 referenceView:(id)arg3 ;
-(void)setTransitionControllerQueue:(NSOperationQueue *)arg1 ;
@end

