/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSDictionary, NSMutableDictionary;

@interface AXSSKeyboardCommandMap : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _availableCommands;
	NSDictionary* _keyChordsToCommands;
	NSDictionary* _commandsToArraysOfKeyChords;
	NSDictionary* _userDefinedCommandsToKeyChords;
	NSMutableDictionary* _transientCommands;

}

@property (nonatomic,readonly) NSDictionary * keyChordsToCommands;                         //@synthesize keyChordsToCommands=_keyChordsToCommands - In the implementation block
@property (nonatomic,readonly) NSDictionary * commandsToArraysOfKeyChords;                 //@synthesize commandsToArraysOfKeyChords=_commandsToArraysOfKeyChords - In the implementation block
@property (nonatomic,readonly) NSDictionary * userDefinedCommandsToKeyChords;              //@synthesize userDefinedCommandsToKeyChords=_userDefinedCommandsToKeyChords - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * transientCommands;                    //@synthesize transientCommands=_transientCommands - In the implementation block
@property (nonatomic,retain) NSSet * availableCommands;                                    //@synthesize availableCommands=_availableCommands - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAvailableCommands:(NSSet *)arg1 ;
-(id)_initWithCommandsToKeyChordsDictionary:(id)arg1 ;
-(BOOL)_validateCommandsToKeyChords:(id)arg1 ;
-(NSDictionary *)userDefinedCommandsToKeyChords;
-(NSSet *)availableCommands;
-(NSMutableDictionary *)transientCommands;
-(BOOL)isEqualToCommandMap:(id)arg1 ;
-(BOOL)_isAvailableCommand:(id)arg1 ;
-(void)_initializeDictionariesIfNeeded;
-(NSDictionary *)keyChordsToCommands;
-(NSDictionary *)commandsToArraysOfKeyChords;
-(id)commandForKeyChord:(id)arg1 ;
-(id)keyChordForCommand:(id)arg1 ;
-(id)commandMapWithKeyChord:(id)arg1 forCommand:(id)arg2 ;
-(id)addCommandsForTransientKeyChords:(id)arg1 ;
-(void)removeTransientKeyChordsForIdentifier:(id)arg1 ;
@end

