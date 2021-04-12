/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SGRealtimeSuggestion.h>

@class SGReminder, NSString;

@interface SGRealtimeReminder : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion> {

	SGReminder* _reminder;
	NSString* _notes;

}

@property (nonatomic,readonly) SGReminder * reminder;               //@synthesize reminder=_reminder - In the implementation block
@property (nonatomic,readonly) NSString * notes;                    //@synthesize notes=_notes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)notes;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(SGReminder *)reminder;
-(id)initWithReminder:(id)arg1 notes:(id)arg2 ;
-(BOOL)isEqualToRealtimeReminder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

