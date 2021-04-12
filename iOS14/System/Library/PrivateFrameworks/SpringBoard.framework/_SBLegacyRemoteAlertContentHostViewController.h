/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)delegate;
-(void)setServiceClassName:(NSString *)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(NSString *)serviceClassName;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(BOOL)_canShowWhileLocked;
-(void)_getPreferredContentSizeWithReplyBlock:(/*^block*/id)arg1 ;
@end

