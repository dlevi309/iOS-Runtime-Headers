/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dataRepresentation;
-(void)setDescription:(NSString *)arg1 ;
-(NSArray *)attach;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(NSArray *)attendee;
-(void)setAttendee:(NSArray *)arg1 ;
-(void)setAttach:(NSArray *)arg1 ;
-(id)initWithICSAlarm:(id)arg1 ;
-(void)applyToAlarm:(id)arg1 ;
@end

