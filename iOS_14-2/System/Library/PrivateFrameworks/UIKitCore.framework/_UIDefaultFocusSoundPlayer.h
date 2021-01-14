/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFocusSoundPlayer.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSTimer, NSString;

@interface _UIDefaultFocusSoundPlayer : NSObject <_UIFocusSoundPlayer> {

	NSMutableDictionary* _urlPools;
	NSMutableDictionary* _focusSoundPools;
	NSObject*<OS_dispatch_queue> _soundQueue;
	NSTimer* _unregisterTimer;

}

@property (nonatomic,retain) NSMutableDictionary * urlPools;                       //@synthesize urlPools=_urlPools - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * focusSoundPools;                //@synthesize focusSoundPools=_focusSoundPools - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> soundQueue;              //@synthesize soundQueue=_soundQueue - In the implementation block
@property (nonatomic,retain) NSTimer * unregisterTimer;                            //@synthesize unregisterTimer=_unregisterTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSMutableDictionary *)urlPools;
-(NSObject*<OS_dispatch_queue>)soundQueue;
-(void)setUrlPools:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)focusSoundPools;
-(NSTimer *)unregisterTimer;
-(id)_init;
-(void)playSoundWithFocusSound:(long long)arg1 volume:(double)arg2 pan:(double)arg3 ;
-(void)setUnregisterTimer:(NSTimer *)arg1 ;
-(void)playSoundWithURL:(id)arg1 volume:(double)arg2 pan:(double)arg3 ;
-(void)setFocusSoundPools:(NSMutableDictionary *)arg1 ;
-(void)_registerForSystemSoundsIfNecessary;
-(void)_playSystemSound:(unsigned)arg1 withVolume:(double)arg2 pan:(double)arg3 ;
-(void)dealloc;
-(void)setSoundQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

