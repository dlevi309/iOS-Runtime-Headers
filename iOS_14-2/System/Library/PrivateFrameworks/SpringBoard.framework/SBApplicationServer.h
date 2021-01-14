/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMiscDelegate:(id<SBApplicationServerMiscDelegate>)arg1 ;
-(id<SBApplicationServerMultiwindowDelegate>)multiwindowDelegate;
-(void)setMultiwindowDelegate:(id<SBApplicationServerMultiwindowDelegate>)arg1 ;
-(void)setShortcutDelegate:(id<SBApplicationServerShortcutDelegate>)arg1 ;
-(id<SBApplicationServerHarmonyDelegate>)harmonyDelegate;
-(id<SBApplicationServerMiscDelegate>)miscDelegate;
-(id<SBApplicationServerShortcutDelegate>)shortcutDelegate;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(void)setHarmonyDelegate:(id<SBApplicationServerHarmonyDelegate>)arg1 ;
-(void)dealloc;
@end

