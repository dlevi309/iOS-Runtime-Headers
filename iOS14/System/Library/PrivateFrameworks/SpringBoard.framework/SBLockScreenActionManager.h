/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSMutableDictionary;

@interface SBLockScreenActionManager : NSObject {

	NSMutableDictionary* _actionProviders;

}

@property (nonatomic,retain) NSMutableDictionary * actionProviders;              //@synthesize actionProviders=_actionProviders - In the implementation block
-(id)init;
-(NSMutableDictionary *)actionProviders;
-(void)registerLockScreenActionProvider:(id)arg1 forSource:(unsigned long long)arg2 ;
-(void)_clearActionOnAllProviders;
-(id)currentLockScreenActionContext;
-(id)currentLockScreenActionContextActionSource:(unsigned long long*)arg1 ;
-(void)setActionProviders:(NSMutableDictionary *)arg1 ;
-(void)runUnlockAction;
@end

