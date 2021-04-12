/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBTestAlertItem : SBAlertItem {

	BOOL _shouldShowInLockScreen;
	BOOL _forcesModalAlertAppearance;
	BOOL _behavesSuperModally;
	BOOL _allowMenuButtonDismissal;
	BOOL _allowLockScreenDismissal;
	BOOL _reappearsAfterUnlock;
	BOOL _reappearsAfterLock;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL shouldShowInLockScreen;                  //@synthesize shouldShowInLockScreen=_shouldShowInLockScreen - In the implementation block
@property (assign,nonatomic) BOOL forcesModalAlertAppearance;              //@synthesize forcesModalAlertAppearance=_forcesModalAlertAppearance - In the implementation block
@property (assign,nonatomic) BOOL behavesSuperModally;                     //@synthesize behavesSuperModally=_behavesSuperModally - In the implementation block
@property (assign,nonatomic) BOOL allowMenuButtonDismissal;                //@synthesize allowMenuButtonDismissal=_allowMenuButtonDismissal - In the implementation block
@property (assign,nonatomic) BOOL allowLockScreenDismissal;                //@synthesize allowLockScreenDismissal=_allowLockScreenDismissal - In the implementation block
@property (assign,nonatomic) BOOL reappearsAfterUnlock;                    //@synthesize reappearsAfterUnlock=_reappearsAfterUnlock - In the implementation block
@property (assign,nonatomic) BOOL reappearsAfterLock;                      //@synthesize reappearsAfterLock=_reappearsAfterLock - In the implementation block
+(id)alertItemWithShowInLockScreen:(BOOL)arg1 forcesModal:(BOOL)arg2 superModal:(BOOL)arg3 ;
-(BOOL)reappearsAfterLock;
-(BOOL)behavesSuperModally;
-(void)setTitle:(NSString *)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)allowMenuButtonDismissal;
-(id)description;
-(BOOL)reappearsAfterUnlock;
-(BOOL)shouldShowInLockScreen;
-(BOOL)allowLockScreenDismissal;
-(BOOL)forcesModalAlertAppearance;
-(NSString *)title;
-(void)setReappearsAfterLock:(BOOL)arg1 ;
-(void)setReappearsAfterUnlock:(BOOL)arg1 ;
-(void)setShouldShowInLockScreen:(BOOL)arg1 ;
-(void)setForcesModalAlertAppearance:(BOOL)arg1 ;
-(void)setBehavesSuperModally:(BOOL)arg1 ;
-(void)setAllowMenuButtonDismissal:(BOOL)arg1 ;
-(void)setAllowLockScreenDismissal:(BOOL)arg1 ;
@end

