/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SBSUIRemoteAlertItemContentHostInterface.h>

@class NSString;

@interface _SBLegacyRemoteAlertContentHostViewController : _UIRemoteViewController <SBSUIRemoteAlertItemContentHostInterface> {

	id _delegate;
	NSString* _serviceClassName;
	BOOL _serviceHasSetPreferredContentSize;

}

@property (assign,nonatomic,__weak) id delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * serviceClassName;              //@synthesize serviceClassName=_serviceClassName - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id)description;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(NSString *)serviceClassName;
-(void)setServiceClassName:(NSString *)arg1 ;
-(void)_getPreferredContentSizeWithReplyBlock:(/*^block*/id)arg1 ;
@end

