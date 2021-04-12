/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFocusSoundPlayer.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface _UIDefaultFocusSoundPlayer : NSObject <_UIFocusSoundPlayer> {

	NSMutableDictionary* _urlPools;
	NSMutableDictionary* _focusSoundPools;
	NSObject*<OS_dispatch_queue> _soundQueue;

}

@property (nonatomic,retain) NSMutableDictionary * urlPools;                       //@synthesize urlPools=_urlPools - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * focusSoundPools;                //@synthesize focusSoundPools=_focusSoundPools - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> soundQueue;              //@synthesize soundQueue=_soundQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)_init;
-(void)playSoundWithFocusSound:(long long)arg1 volume:(double)arg2 pan:(double)arg3 ;
-(void)playSoundWithURL:(id)arg1 volume:(double)arg2 pan:(double)arg3 ;
-(void)_playSystemSound:(unsigned)arg1 withVolume:(double)arg2 pan:(double)arg3 ;
-(NSMutableDictionary *)urlPools;
-(void)setUrlPools:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)focusSoundPools;
-(void)setFocusSoundPools:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)soundQueue;
-(void)setSoundQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

