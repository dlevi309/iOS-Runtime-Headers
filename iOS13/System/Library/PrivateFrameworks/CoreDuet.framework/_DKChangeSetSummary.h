/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSDate, NSSet;

@interface _DKChangeSetSummary : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	unsigned long long _sequenceNumber;
	NSSet* _eventUUIDs;

}

@property (nonatomic,retain) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain) NSSet * eventUUIDs;                             //@synthesize eventUUIDs=_eventUUIDs - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSSet *)eventUUIDs;
-(void)setEventUUIDs:(NSSet *)arg1 ;
@end

