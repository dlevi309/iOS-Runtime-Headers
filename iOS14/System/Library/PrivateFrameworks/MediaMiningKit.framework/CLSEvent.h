/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSPrimitive.h>

@class NSString, CLLocation, NSArray, NSDate;

@interface CLSEvent : CLSPrimitive {

	BOOL _meetingRoom;
	BOOL _organizedByMe;
	BOOL _accepted;
	NSString* _title;
	CLLocation* _location;
	NSArray* _attendees;
	NSArray* _performers;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                                    //@synthesize attendees=_attendees - In the implementation block
@property (nonatomic,retain) NSArray * performers;                                   //@synthesize performers=_performers - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                       //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                  //@synthesize location=_location - In the implementation block
@property (assign,getter=hasMeetingRoom,nonatomic) BOOL meetingRoom;                 //@synthesize meetingRoom=_meetingRoom - In the implementation block
@property (assign,getter=isOrganizedByMe,nonatomic) BOOL organizedByMe;              //@synthesize organizedByMe=_organizedByMe - In the implementation block
@property (assign,getter=isAccepted,nonatomic) BOOL accepted;                        //@synthesize accepted=_accepted - In the implementation block
+(id)event;
-(NSArray *)attendees;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setPerformers:(NSArray *)arg1 ;
-(id)description;
-(void)setAccepted:(BOOL)arg1 ;
-(void)setAttendees:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSArray *)performers;
-(BOOL)isAccepted;
-(void)setOrganizedByMe:(BOOL)arg1 ;
-(void)setMeetingRoom:(BOOL)arg1 ;
-(BOOL)hasMeetingRoom;
-(BOOL)isOrganizedByMe;
@end

