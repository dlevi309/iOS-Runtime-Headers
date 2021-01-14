/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)doneButton;
-(void)setRequest:(id<NSCopying>)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(DDRemoteAction *)action;
-(void)setAction:(DDRemoteAction *)arg1 ;
-(BOOL)previewMode;
-(id<NSCopying>)request;
-(NSExtension *)extension;
-(void)dismissViewController;
-(void)dealloc;
-(void)setPreviewMode:(BOOL)arg1 ;
-(void)unloadRemoteAction;
-(void)showRemoteController;
-(void)loadNavigationControllerIfNeeded;
-(void)addHitOverlay;
-(void)loadTitleBarIfNeeded;
-(void)loadRemoteAction:(id)arg1 ;
-(void)updatePreviewMode;
-(void)showLoadingView;
-(id)emptyViewcontroller;
-(void)showErrorView;
-(void)removeLoadingViewToShowView:(id)arg1 ;
-(void)presentRemoteViewController;
-(id)controllerVerticalMargin;
-(void)DDRemoteActionDidTerminateWithError:(id)arg1 ;
@end

