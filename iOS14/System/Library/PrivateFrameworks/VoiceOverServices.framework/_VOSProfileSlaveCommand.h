/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
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
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)context;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(VOSCommand *)command;
-(void)setCommand:(VOSCommand *)arg1 ;
-(void)setContext:(unsigned long long)arg1 ;
-(unsigned long long)pressCount;
-(void)setMasterProfileCommand:(_VOSProfileCommand *)arg1 ;
-(id)_initWithCommand:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3 ;
-(void)setPressCount:(unsigned long long)arg1 ;
-(_VOSProfileCommand *)masterProfileCommand;
@end

