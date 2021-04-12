/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRequestUUID:(NSUUID *)arg1 ;
-(NSUUID *)requestUUID;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(BOOL)isReadyToDisplay;
-(NSExtension *)weakExtension;
-(void)setWeakExtension:(NSExtension *)arg1 ;
-(void)setReadyToDisplay:(BOOL)arg1 ;
@end

