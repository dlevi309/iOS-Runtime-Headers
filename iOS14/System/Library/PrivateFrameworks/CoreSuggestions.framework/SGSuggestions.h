/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SGSuggestions : NSObject <NSSecureCoding> {

	NSArray* _contacts;
	NSArray* _events;
	NSArray* _reminders;

}

@property (nonatomic,readonly) NSArray * contacts;               //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,readonly) NSArray * events;                 //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) NSArray * reminders;              //@synthesize reminders=_reminders - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)contacts;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithContacts:(id)arg1 events:(id)arg2 reminders:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)events;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)reminders;
@end

