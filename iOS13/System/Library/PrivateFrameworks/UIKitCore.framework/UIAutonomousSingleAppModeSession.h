/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIAutonomousSingleAppModeConfiguration;

@interface UIAutonomousSingleAppModeSession : NSObject {

	BOOL _active;
	UIAutonomousSingleAppModeConfiguration* _effectiveConfiguration;

}

@property (nonatomic,copy) UIAutonomousSingleAppModeConfiguration * effectiveConfiguration;              //@synthesize effectiveConfiguration=_effectiveConfiguration - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                //@synthesize active=_active - In the implementation block
+(id)__gaxTrampoline_currentlyActiveSession;
+(void)__gaxTrampoline_requestSessionWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)currentlyActiveSession;
+(void)requestSessionWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setEffectiveConfiguration:(UIAutonomousSingleAppModeConfiguration *)arg1 ;
-(void)_guidedAccessStateDidChange:(id)arg1 ;
-(void)__gaxTrampoline_endSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithEffectiveConfiguration:(id)arg1 ;
-(UIAutonomousSingleAppModeConfiguration *)effectiveConfiguration;
-(void)endWithCompletion:(/*^block*/id)arg1 ;
@end

