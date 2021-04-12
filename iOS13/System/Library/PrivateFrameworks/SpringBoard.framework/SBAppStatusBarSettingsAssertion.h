/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBAppStatusBarSettings, NSString, NSDate;

@interface SBAppStatusBarSettingsAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {

	SBAppStatusBarSettings* _settings;
	unsigned long long _level;
	NSString* _reason;
	NSDate* _timestamp;

}

@property (nonatomic,readonly) unsigned long long level;                            //@synthesize level=_level - In the implementation block
@property (nonatomic,copy,readonly) SBAppStatusBarSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(NSString *)reason;
-(unsigned long long)level;
-(void)acquire;
-(NSDate *)timestamp;
-(SBAppStatusBarSettings *)settings;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3 ;
-(id)initWithSettings:(id)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3 ;
-(void)modifySettingsWithBlock:(/*^block*/id)arg1 ;
-(void)acquireWithAnimationParameters:(id)arg1 ;
-(void)invalidateWithAnimationParameters:(id)arg1 ;
-(void)modifySettingsWithBlock:(/*^block*/id)arg1 animationParameters:(id)arg2 ;
@end

