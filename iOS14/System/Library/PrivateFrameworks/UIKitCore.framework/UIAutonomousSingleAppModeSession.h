/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIAutonomousSingleAppModeConfiguration;

@interface UIAutonomousSingleAppModeSession : NSObject {

	BOOL _active;
	UIAutonomousSingleAppModeConfiguration* _effectiveConfiguration;

}

@property (nonatomic,copy) UIAutonomousSingleAppModeConfiguration * effectiveConfiguration;              //@synthesize effectiveConfiguration=_effectiveConfiguration - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                //@synthesize active=_active - In the implementation block
+(void)__gaxTrampoline_requestSessionWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)requestSessionWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)__gaxTrampoline_currentlyActiveSession;
+(id)currentlyActiveSession;
-(void)setActive:(BOOL)arg1 ;
-(void)__gaxTrampoline_endSessionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isActive;
-(id)initWithEffectiveConfiguration:(id)arg1 ;
-(void)_guidedAccessStateDidChange:(id)arg1 ;
-(void)setEffectiveConfiguration:(UIAutonomousSingleAppModeConfiguration *)arg1 ;
-(UIAutonomousSingleAppModeConfiguration *)effectiveConfiguration;
-(void)endWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

