/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/NCNotificationActionRunner.h>
#import <libobjc.A.dylib/SBLockScreenPluginLifecycleObserver.h>

@class SBSCardItem, NSString;

@interface NCRevealWalletPassActionRunner : NSObject <NCNotificationActionRunner, SBLockScreenPluginLifecycleObserver> {

	BOOL _shouldForwardAction;
	SBSCardItem* _cardItem;
	/*^block*/id _pluginCompletionBlock;

}

@property (nonatomic,retain,readonly) SBSCardItem * cardItem;              //@synthesize cardItem=_cardItem - In the implementation block
@property (nonatomic,copy) id pluginCompletionBlock;                       //@synthesize pluginCompletionBlock=_pluginCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL shouldForwardAction;                     //@synthesize shouldForwardAction=_shouldForwardAction - In the implementation block
-(SBSCardItem *)cardItem;
-(void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)shouldForwardAction;
-(void)setShouldForwardAction:(BOOL)arg1 ;
-(void)setPluginCompletionBlock:(id)arg1 ;
-(id)pluginCompletionBlock;
-(void)willPresentLockScreenPlugin:(id)arg1 ;
-(void)didPresentLockScreenPlugin:(id)arg1 ;
-(void)willDismissLockScreenPlugin:(id)arg1 ;
-(void)didDismissLockScreenPlugin:(id)arg1 ;
-(id)initWithCardItem:(id)arg1 ;
@end

