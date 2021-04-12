/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CalAlarmMetadata : NSObject <NSSecureCoding> {

	NSArray* _attach;
	NSArray* _attendee;
	NSString* _description;
	NSString* _summary;

}

@property (retain) NSArray * attach;                    //@synthesize attach=_attach - In the implementation block
@property (retain) NSArray * attendee;                  //@synthesize attendee=_attendee - In the implementation block
@property (retain) NSString * description;              //@synthesize description=_description - In the implementation block
@property (retain) NSString * summary;                  //@synthesize summary=_summary - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataWithData:(id)arg1 ;
-(id)dataRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSArray *)attach;
-(NSString *)summary;
-(NSArray *)attendee;
-(void)setAttendee:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAttach:(NSArray *)arg1 ;
-(id)initWithICSAlarm:(id)arg1 ;
-(void)applyToAlarm:(id)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
@end

