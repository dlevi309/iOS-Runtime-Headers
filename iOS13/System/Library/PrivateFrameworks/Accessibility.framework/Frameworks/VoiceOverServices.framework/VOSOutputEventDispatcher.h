/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
*/

#import <libobjc.A.dylib/VOSOutputEventDispatching.h>

@protocol OS_dispatch_queue, VOSSoundPack, VOSHapticPack;
@class NSObject, NSHashTable, NSString;

@interface VOSOutputEventDispatcher : NSObject <VOSOutputEventDispatching> {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _eventHandlers;
	id<VOSSoundPack> _cachedActiveSoundPack;
	id<VOSHapticPack> _cachedActiveHapticPack;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_init;
-(void)sendEvent:(id)arg1 ;
-(void)addEventHandler:(id)arg1 ;
-(void)removeEventHandler:(id)arg1 ;
-(id)_activeSoundPack;
-(id)_activeHapticPack;
-(BOOL)shouldPlaySoundForEvent:(id)arg1 ;
-(BOOL)shouldPlayHapticForEvent:(id)arg1 ;
@end

