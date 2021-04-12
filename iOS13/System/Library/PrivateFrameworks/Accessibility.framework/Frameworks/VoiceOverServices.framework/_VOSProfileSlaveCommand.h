/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class VOSCommand, _VOSProfileCommand;

@interface _VOSProfileSlaveCommand : NSObject <NSSecureCoding> {

	VOSCommand* _command;
	unsigned long long _context;
	unsigned long long _pressCount;
	_VOSProfileCommand* _masterProfileCommand;

}

@property (nonatomic,retain) VOSCommand * command;                                          //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) unsigned long long context;                                    //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned long long pressCount;                                 //@synthesize pressCount=_pressCount - In the implementation block
@property (assign,nonatomic,__weak) _VOSProfileCommand * masterProfileCommand;              //@synthesize masterProfileCommand=_masterProfileCommand - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)profileSlaveCommandWithCommand:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3 ;
+(id)profileSlaveCommandWithStringValue:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)context;
-(void)setContext:(unsigned long long)arg1 ;
-(void)setCommand:(VOSCommand *)arg1 ;
-(VOSCommand *)command;
-(unsigned long long)pressCount;
-(void)setMasterProfileCommand:(_VOSProfileCommand *)arg1 ;
-(id)_initWithCommand:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3 ;
-(void)setPressCount:(unsigned long long)arg1 ;
-(_VOSProfileCommand *)masterProfileCommand;
@end

