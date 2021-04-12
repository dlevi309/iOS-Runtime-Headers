/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class VOSScreenreaderMode, NSMutableSet;

@interface _VOSProfileMode : NSObject <NSSecureCoding> {

	VOSScreenreaderMode* _mode;
	NSMutableSet* _commands;

}

@property (nonatomic,retain) VOSScreenreaderMode * mode;              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSMutableSet * commands;                 //@synthesize commands=_commands - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)profileModeWitMode:(id)arg1 ;
+(id)profileModeWithStringValue:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMode:(VOSScreenreaderMode *)arg1 ;
-(VOSScreenreaderMode *)mode;
-(NSMutableSet *)commands;
-(void)setCommands:(NSMutableSet *)arg1 ;
-(void)addCommand:(id)arg1 ;
-(id)_initWithMode:(id)arg1 commands:(id)arg2 ;
@end

