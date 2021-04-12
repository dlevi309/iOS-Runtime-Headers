/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SFAirDropViewServiceHostProtocol.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>

@protocol SFAirDropViewControllerDelegate;
@class _UIRemoteViewController, _SFAirDropRemoteViewController, NSExtension, NSString;

@interface SFAirDropViewController : UIViewController <SFAirDropViewServiceHostProtocol, _UIRemoteViewControllerContaining> {

	_SFAirDropRemoteViewController* _childViewController;
	id _extensionRequest;
	id<SFAirDropViewControllerDelegate> _delegate;
	NSExtension* _extension;

}

@property (nonatomic,retain) NSExtension * extension;                                                 //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic,__weak) id<SFAirDropViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
-(void)dealloc;
-(id<SFAirDropViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SFAirDropViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(void)_setChildViewController:(id)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(id)initWithNoContentView:(BOOL)arg1 ;
-(void)airDropViewServiceDidSuccessfullyStartTransfer;
-(void)airDropViewServiceDidSuccessfullyCompleteTransfer;
-(void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)airDropViewServiceDidRequestDismissal;
-(void)_setExtensionRequest:(id)arg1 ;
@end

