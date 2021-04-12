/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <UIKitCore/_UIRemoteViewController.h>

@class NSUUID, NSExtension;

@interface _MSMessageExtensionRemoteViewController : _UIRemoteViewController {

	BOOL _readyToDisplay;
	NSUUID* _requestUUID;
	NSExtension* _weakExtension;

}

@property (nonatomic,retain) NSUUID * requestUUID;                                     //@synthesize requestUUID=_requestUUID - In the implementation block
@property (assign,nonatomic,__weak) NSExtension * weakExtension;                       //@synthesize weakExtension=_weakExtension - In the implementation block
@property (assign,getter=isReadyToDisplay,nonatomic) BOOL readyToDisplay;              //@synthesize readyToDisplay=_readyToDisplay - In the implementation block
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(NSUUID *)requestUUID;
-(void)setRequestUUID:(NSUUID *)arg1 ;
-(NSExtension *)weakExtension;
-(void)setWeakExtension:(NSExtension *)arg1 ;
-(BOOL)isReadyToDisplay;
-(void)setReadyToDisplay:(BOOL)arg1 ;
@end

