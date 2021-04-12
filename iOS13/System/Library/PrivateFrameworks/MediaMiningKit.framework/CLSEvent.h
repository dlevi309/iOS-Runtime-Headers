/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CLLocation *)location;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSArray *)performers;
-(void)setPerformers:(NSArray *)arg1 ;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(void)setAccepted:(BOOL)arg1 ;
-(BOOL)isAccepted;
-(BOOL)hasMeetingRoom;
-(void)setMeetingRoom:(BOOL)arg1 ;
-(BOOL)isOrganizedByMe;
-(void)setOrganizedByMe:(BOOL)arg1 ;
@end

