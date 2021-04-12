/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
*/

#import <libobjc.A.dylib/VOSCommandProfileDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, VOSCommandProfile, NSString;

@interface VOSCommandManager : NSObject <VOSCommandProfileDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	VOSCommandProfile* _activeProfile;
	NSString* _siriShortCutToken;
	BOOL _activeProfileIsUserProfile;

}

@property (assign,nonatomic) BOOL activeProfileIsUserProfile;                  //@synthesize activeProfileIsUserProfile=_activeProfileIsUserProfile - In the implementation block
@property (nonatomic,readonly) VOSCommandProfile * activeProfile;              //@synthesize activeProfile=_activeProfile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)debugDescription;
-(void)_commonInit;
-(void)dealloc;
-(void)reloadWithSystemProfile;
-(void)reloadPreferringUserProfile;
-(BOOL)activeProfileIsUserProfile;
-(BOOL)_validateUserProfileDiscrepancies:(id)arg1 ;
-(void)saveAsUserProfile;
-(id)initPreferringUserProfile;
-(void)_loadSystemProfile;
-(void)setActiveProfileIsUserProfile:(BOOL)arg1 ;
-(id)systemProfile;
-(unsigned long long)availabilityForGesture:(id)arg1 withResolver:(id)arg2 ;
-(id)commandForTouchGesture:(id)arg1 withResolver:(id)arg2 ;
-(BOOL)addGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3 ;
-(BOOL)removeGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3 ;
-(BOOL)addKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3 ;
-(BOOL)removeKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3 ;
-(id)validateCanAddGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3 ;
-(id)validateCanRemoveGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3 ;
-(id)validateCanAddKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3 ;
-(id)validateCanRemoveKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3 ;
-(id)commandForKeyChord:(id)arg1 withResolver:(id)arg2 ;
-(id)allCommandsWithResolver:(id)arg1 ;
-(id)allSiriShortcutCommandsWithResolver:(id)arg1 ;
-(id)allShortcutBindingsWithResolver:(id)arg1 ;
-(id)userPresentableAllShortcutBindingsWithResolver:(id)arg1 ;
-(id)gestureBindingsForCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)shortcutBindingsForCommand:(id)arg1 withResolver:(id)arg2 ;
-(BOOL)commandHasAnyBindings:(id)arg1 withResolver:(id)arg2 ;
-(unsigned long long)availabilityForShortcut:(id)arg1 withResolver:(id)arg2 ;
-(unsigned long long)availabilityForCommand:(id)arg1 withResolver:(id)arg2 ;
-(BOOL)commandHasModifiedBindingsWhenZoomEnabled:(id)arg1 withResolver:(id)arg2 ;
-(id)availableSiriShortcuts:(id)arg1 ;
-(id)initWithSystemProfile;
-(void)restoreDefaultProfile;
-(void)batchUpdateActiveProfile:(/*^block*/id)arg1 saveIfSuccessful:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(VOSCommandProfile *)activeProfile;
@end

