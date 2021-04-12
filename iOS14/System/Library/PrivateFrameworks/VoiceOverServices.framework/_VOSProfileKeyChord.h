/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXSSKeyChord, _VOSProfileCommand;

@interface _VOSProfileKeyChord : NSObject <NSSecureCoding> {

	AXSSKeyChord* _keyChord;
	_VOSProfileCommand* _command;

}

@property (nonatomic,retain) AXSSKeyChord * keyChord;                          //@synthesize keyChord=_keyChord - In the implementation block
@property (assign,nonatomic,__weak) _VOSProfileCommand * command;              //@synthesize command=_command - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)profileKeyChordWithKeyChord:(id)arg1 ;
+(id)profileKeyChordWithStringValue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(_VOSProfileCommand *)command;
-(void)setCommand:(_VOSProfileCommand *)arg1 ;
-(AXSSKeyChord *)keyChord;
-(id)_initWithKeyChord:(id)arg1 ;
-(void)setKeyChord:(AXSSKeyChord *)arg1 ;
@end

