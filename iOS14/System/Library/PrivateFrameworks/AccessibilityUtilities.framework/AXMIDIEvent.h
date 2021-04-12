/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXMIDIEvent : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _note;
	unsigned char _pressure;
	unsigned char _control;
	unsigned char _controlValue;
	unsigned char _program;
	unsigned short _channel;
	unsigned short _pitchBend;
	long long _type;

}

@property (assign,nonatomic) unsigned short channel;                               //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) long long ordinalChannel; 
@property (getter=isOmniChannel,nonatomic,readonly) BOOL omniChannel; 
@property (assign,nonatomic) long long type;                                       //@synthesize type=_type - In the implementation block
@property (getter=isDownEvent,nonatomic,readonly) BOOL downEvent; 
@property (assign,nonatomic) unsigned char note;                                   //@synthesize note=_note - In the implementation block
@property (nonatomic,readonly) long long noteValue; 
@property (nonatomic,readonly) unsigned char noteOctave; 
@property (assign,nonatomic) unsigned char pressure;                               //@synthesize pressure=_pressure - In the implementation block
@property (assign,nonatomic) unsigned char control;                                //@synthesize control=_control - In the implementation block
@property (assign,nonatomic) unsigned char controlValue;                           //@synthesize controlValue=_controlValue - In the implementation block
@property (assign,nonatomic) unsigned char program;                                //@synthesize program=_program - In the implementation block
@property (assign,nonatomic) unsigned short pitchBend;                             //@synthesize pitchBend=_pitchBend - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned char)controlValue;
-(unsigned char)control;
-(id)noteDescription;
-(void)setNote:(unsigned char)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setChannel:(unsigned short)arg1 ;
-(unsigned char)pressure;
-(void)setType:(long long)arg1 ;
-(unsigned short)channel;
-(id)description;
-(unsigned char)note;
-(void)setPressure:(unsigned char)arg1 ;
-(void)setControl:(unsigned char)arg1 ;
-(long long)type;
-(unsigned short)pitchBend;
-(id)initWithCoder:(id)arg1 ;
-(long long)noteValue;
-(void)setControlValue:(unsigned char)arg1 ;
-(void)setProgram:(unsigned char)arg1 ;
-(void)setPitchBend:(unsigned short)arg1 ;
-(long long)ordinalChannel;
-(unsigned char)noteOctave;
-(BOOL)isDownEvent;
-(BOOL)isOmniChannel;
-(unsigned char)program;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

