/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKRemoteAddPassesViewControllerProtocol.h>

@protocol PKAddPassesViewControllerDelegate;
@class NSString;

@interface PKRemoteAddPassesViewController : _UIRemoteViewController <PKRemoteAddPassesViewControllerProtocol> {

	BOOL _finished;
	id<PKAddPassesViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKAddPassesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
-(void)dealloc;
-(id<PKAddPassesViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAddPassesViewControllerDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)ingestionDidFinishWithResult:(unsigned long long)arg1 ;
@end

