/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/DDRemoteActionHostViewControllerDelegate.h>

@protocol DDRemoteActionViewServiceProtocol, NSCopying;
@class DDRemoteActionHostViewController, UIView, NSLayoutConstraint, UINavigationController, NSDate, NSString, DDRemoteAction, NSExtension;

@interface DDRemoteActionManagerViewController : UIViewController <DDRemoteActionHostViewControllerDelegate> {

	DDRemoteActionHostViewController* _remoteViewController;
	id<DDRemoteActionViewServiceProtocol> _serviceContext;
	UIView* _loadingView;
	UIView* _errorView;
	UIView* _titleBar;
	NSLayoutConstraint* _titleBarBottomConstraint;
	NSLayoutConstraint* _navControllerTopConstraint;
	UIView* _hitView;
	UINavigationController* _navigationController;
	NSDate* _loadingDate;
	BOOL _loaded;
	BOOL _displayed;
	BOOL _shouldDeferPresenting;
	NSString* _platterTitle;
	CGSize _preferredContentSize;
	DDRemoteActionManagerViewController* _strongSelf;
	BOOL _previewMode;
	DDRemoteAction* _action;
	NSExtension* _extension;
	id<NSCopying> _request;

}

@property (__weak) DDRemoteAction * action;                         //@synthesize action=_action - In the implementation block
@property (retain) NSExtension * extension;                         //@synthesize extension=_extension - In the implementation block
@property (retain) id<NSCopying> request;                           //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL previewMode;                      //@synthesize previewMode=_previewMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(DDRemoteAction *)action;
-(void)setRequest:(id<NSCopying>)arg1 ;
-(id<NSCopying>)request;
-(id)initWithAction:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setAction:(DDRemoteAction *)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(BOOL)previewMode;
-(void)setPreviewMode:(BOOL)arg1 ;
-(void)dismissViewController;
-(id)doneButton;
-(void)showLoadingView;
-(void)showErrorView;
-(void)unloadRemoteAction;
-(void)showRemoteController;
-(void)loadNavigationControllerIfNeeded;
-(void)addHitOverlay;
-(void)loadTitleBarIfNeeded;
-(void)loadRemoteAction:(id)arg1 ;
-(void)updatePreviewMode;
-(id)emptyViewcontroller;
-(void)removeLoadingViewToShowView:(id)arg1 ;
-(void)presentRemoteViewController;
-(id)controllerVerticalMargin;
-(void)DDRemoteActionDidTerminateWithError:(id)arg1 ;
@end

