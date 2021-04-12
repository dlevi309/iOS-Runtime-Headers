/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class VOSCommand, NSMutableSet, _VOSProfileMode;

@interface _VOSProfileCommand : NSObject <NSSecureCoding> {

	VOSCommand* _command;
	NSMutableSet* _gestures;
	NSMutableSet* _keyboardShortcuts;
	NSMutableSet* _quickNavShortcuts;
	NSMutableSet* _slaveCommands;
	_VOSProfileMode* _mode;

}

@property (nonatomic,retain) VOSCommand * command;                          //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) NSMutableSet * gestures;                       //@synthesize gestures=_gestures - In the implementation block
@property (nonatomic,retain) NSMutableSet * keyboardShortcuts;              //@synthesize keyboardShortcuts=_keyboardShortcuts - In the implementation block
@property (nonatomic,retain) NSMutableSet * quickNavShortcuts;              //@synthesize quickNavShortcuts=_quickNavShortcuts - In the implementation block
@property (nonatomic,retain) NSMutableSet * slaveCommands;                  //@synthesize slaveCommands=_slaveCommands - In the implementation block
@property (assign,nonatomic,__weak) _VOSProfileMode * mode;                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) BOOL hasSlaveCommands; 
+(BOOL)supportsSecureCoding;
+(id)profileCommandWithCommand:(id)arg1 ;
+(id)profileCommandWithStringValue:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMode:(_VOSProfileMode *)arg1 ;
-(_VOSProfileMode *)mode;
-(NSMutableSet *)gestures;
-(void)setCommand:(VOSCommand *)arg1 ;
-(VOSCommand *)command;
-(void)setGestures:(NSMutableSet *)arg1 ;
-(id)_initWithCommand:(id)arg1 gestures:(id)arg2 keyboardShortcuts:(id)arg3 quickNavShortcuts:(id)arg4 slaveCommands:(id)arg5 ;
-(void)addGesture:(id)arg1 ;
-(void)removeGesture:(id)arg1 ;
-(id)profileGestureForGesture:(id)arg1 ;
-(void)addKeyboardShortcut:(id)arg1 ;
-(void)removeKeyboardShortcut:(id)arg1 ;
-(id)profileKeyboardShortcutForKeyChord:(id)arg1 ;
-(void)addQuickNavShortcut:(id)arg1 ;
-(void)removeQuickNavShortcut:(id)arg1 ;
-(id)profileQuickNavShortcutForKeyChord:(id)arg1 ;
-(void)addSlaveCommand:(id)arg1 ;
-(void)removeSlaveCommand:(id)arg1 ;
-(BOOL)hasSlaveCommands;
-(id)slaveCommandsForPressCount:(long long)arg1 ;
-(NSMutableSet *)keyboardShortcuts;
-(void)setKeyboardShortcuts:(NSMutableSet *)arg1 ;
-(NSMutableSet *)quickNavShortcuts;
-(void)setQuickNavShortcuts:(NSMutableSet *)arg1 ;
-(NSMutableSet *)slaveCommands;
-(void)setSlaveCommands:(NSMutableSet *)arg1 ;
@end

