/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MIDICIProfileState : NSObject <NSSecureCoding> {

	unsigned char midiChannel;
	NSArray* enabledProfiles;
	NSArray* disabledProfiles;

}

@property (nonatomic,readonly) unsigned char midiChannel; 
@property (nonatomic,readonly) NSArray * enabledProfiles; 
@property (nonatomic,readonly) NSArray * disabledProfiles; 
+(BOOL)supportsSecureCoding;
+(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithChannel:(unsigned char)arg1 enabledProfiles:(id)arg2 disabledProfiles:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned char)midiChannel;
-(NSArray *)enabledProfiles;
-(NSArray *)disabledProfiles;
-(id)initWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2 ;
-(void)updateWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2 ;
-(id)bytesWithChannel:(unsigned char)arg1 ;
@end

