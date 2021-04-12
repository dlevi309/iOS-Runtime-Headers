/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <libobjc.A.dylib/QLCustomItemViewControllerHost.h>

@protocol QLCustomItemViewControllerHost;
@class NSString;

@interface QLCustomItemViewControllerHostProxy : NSObject <QLCustomItemViewControllerHost> {

	id<QLCustomItemViewControllerHost> _delegate;

}

@property (assign,nonatomic,__weak) id<QLCustomItemViewControllerHost> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<QLCustomItemViewControllerHost>)delegate;
-(void)setDelegate:(id<QLCustomItemViewControllerHost>)arg1 ;
-(void)setFullScreen:(BOOL)arg1 ;
-(void)dismissQuickLook;
-(void)presentShareSheetWithPopoverTracker:(id)arg1 customSharedURL:(id)arg2 dismissCompletion:(/*^block*/id)arg3 ;
-(void)forwardMessageToHostOfCustomViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

