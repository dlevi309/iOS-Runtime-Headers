/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMutableDictionary;

@interface SBLockScreenActionManager : NSObject {

	NSMutableDictionary* _actionProviders;

}

@property (nonatomic,retain) NSMutableDictionary * actionProviders;              //@synthesize actionProviders=_actionProviders - In the implementation block
-(id)init;
-(id)currentLockScreenActionContextActionSource:(unsigned long long*)arg1 ;
-(void)_clearActionOnAllProviders;
-(void)registerLockScreenActionProvider:(id)arg1 forSource:(unsigned long long)arg2 ;
-(id)currentLockScreenActionContext;
-(void)runUnlockAction;
-(NSMutableDictionary *)actionProviders;
-(void)setActionProviders:(NSMutableDictionary *)arg1 ;
@end

