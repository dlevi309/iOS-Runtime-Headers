/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
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
-(VOSScreenreaderMode *)mode;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMode:(VOSScreenreaderMode *)arg1 ;
-(NSMutableSet *)commands;
-(id)description;
-(void)setCommands:(NSMutableSet *)arg1 ;
-(void)addCommand:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithMode:(id)arg1 commands:(id)arg2 ;
@end

