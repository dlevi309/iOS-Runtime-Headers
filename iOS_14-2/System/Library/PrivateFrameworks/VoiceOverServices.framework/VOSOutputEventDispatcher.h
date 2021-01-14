/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
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
-(void)removeEventHandler:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(id)_init;
-(void)addEventHandler:(id)arg1 ;
-(id)_activeSoundPack;
-(id)_activeHapticPack;
-(BOOL)shouldPlaySoundForEvent:(id)arg1 ;
-(BOOL)shouldPlayHapticForEvent:(id)arg1 ;
@end

