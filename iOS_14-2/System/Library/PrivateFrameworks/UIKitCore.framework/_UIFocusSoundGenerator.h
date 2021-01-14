/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIFocusSoundPlayer;
@interface _UIFocusSoundGenerator : NSObject {

	id<_UIFocusSoundPlayer> _focusSoundPlayer;

}

@property (nonatomic,readonly) id<_UIFocusSoundPlayer> focusSoundPlayer;              //@synthesize focusSoundPlayer=_focusSoundPlayer - In the implementation block
+(void)registerURL:(id)arg1 forIdentifier:(id)arg2 ;
+(id)defaultGenerator;
+(void)_uiktest_unregisterURLForIdentifier:(id)arg1 ;
-(void)playSoundForFocusUpdateInContext:(id)arg1 ;
-(id)initWithFocusSoundPlayer:(id)arg1 ;
-(id<_UIFocusSoundPlayer>)focusSoundPlayer;
@end

