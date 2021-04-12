/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithNoContentView:(BOOL)arg1 ;
-(void)airDropViewServiceDidRequestDismissal;
-(void)airDropViewServiceDidSuccessfullyStartTransfer;
-(void)airDropViewServiceDidSuccessfullyCompleteTransfer;
-(void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<SFAirDropViewControllerDelegate>)delegate;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setDelegate:(id<SFAirDropViewControllerDelegate>)arg1 ;
-(void)_setExtensionRequest:(id)arg1 ;
-(void)viewDidLoad;
-(NSExtension *)extension;
-(void)_setChildViewController:(id)arg1 ;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(void)dealloc;
@end

