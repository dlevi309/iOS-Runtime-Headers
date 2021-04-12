/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSDate, NSArray;

@interface EKInviteeAlternativeTime : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _conflictedParticipants;

}

@property (nonatomic,retain) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSArray * conflictedParticipants;              //@synthesize conflictedParticipants=_conflictedParticipants - In the implementation block
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)description;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 conflictedParticipants:(id)arg3 ;
-(NSArray *)conflictedParticipants;
-(void)setConflictedParticipants:(NSArray *)arg1 ;
@end

