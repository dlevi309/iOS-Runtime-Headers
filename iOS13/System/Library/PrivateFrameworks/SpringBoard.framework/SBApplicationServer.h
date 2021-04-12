/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <FrontBoardServices/FBSServiceFacility.h>

@protocol SBApplicationServerMiscDelegate, SBApplicationServerHarmonyDelegate, SBApplicationServerShortcutDelegate, SBApplicationServerMultiwindowDelegate;
@interface SBApplicationServer : FBSServiceFacility {

	id<SBApplicationServerMiscDelegate> _miscDelegate;
	id<SBApplicationServerHarmonyDelegate> _harmonyDelegate;
	id<SBApplicationServerShortcutDelegate> _shortcutDelegate;
	id<SBApplicationServerMultiwindowDelegate> _multiwindowDelegate;

}

@property (assign,nonatomic,__weak) id<SBApplicationServerMiscDelegate> miscDelegate;                            //@synthesize miscDelegate=_miscDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBApplicationServerHarmonyDelegate> harmonyDelegate;                      //@synthesize harmonyDelegate=_harmonyDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBApplicationServerShortcutDelegate> shortcutDelegate;                    //@synthesize shortcutDelegate=_shortcutDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBApplicationServerMultiwindowDelegate> multiwindowDelegate;              //@synthesize multiwindowDelegate=_multiwindowDelegate - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)_init;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(id<SBApplicationServerShortcutDelegate>)shortcutDelegate;
-(void)setShortcutDelegate:(id<SBApplicationServerShortcutDelegate>)arg1 ;
-(void)setMiscDelegate:(id<SBApplicationServerMiscDelegate>)arg1 ;
-(void)_handleDeleteApplicationSnapshots:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleHarmonyFetchWhitePointAdaptivityStyleMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleShortcutFetchApplicationShortcutItemsMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleShortcutUpdateDynamicApplicationShortcutItemsMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleMultiwindowShortcutServiceClientMessage:(id)arg1 fromClient:(id)arg2 ;
-(id<SBApplicationServerMiscDelegate>)miscDelegate;
-(id<SBApplicationServerHarmonyDelegate>)harmonyDelegate;
-(void)setHarmonyDelegate:(id<SBApplicationServerHarmonyDelegate>)arg1 ;
-(id<SBApplicationServerMultiwindowDelegate>)multiwindowDelegate;
-(void)setMultiwindowDelegate:(id<SBApplicationServerMultiwindowDelegate>)arg1 ;
@end

