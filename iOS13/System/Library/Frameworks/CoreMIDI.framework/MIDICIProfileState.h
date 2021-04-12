/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MIDICIProfileState : NSObject <NSSecureCoding> {

	NSArray* enabledProfiles;
	NSArray* disabledProfiles;

}

@property (nonatomic,readonly) NSArray * enabledProfiles; 
@property (nonatomic,readonly) NSArray * disabledProfiles; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2 ;
-(void)updateWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2 ;
-(NSArray *)enabledProfiles;
-(NSArray *)disabledProfiles;
@end

