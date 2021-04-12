/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSDate;

@interface RTFMCScoreBoard : NSObject {

	BOOL _engaged;
	BOOL _assisted;
	int _locationType;
	int _parkingEvents;
	int _engagedParkingEvents;
	int _assistedParkingEvents;
	int _engagements;
	int _assistances;
	int _suppressedEvents;
	NSDate* _creationDate;

}

@property (nonatomic,retain) NSDate * creationDate;                  //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) int locationType;                       //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic) BOOL engaged;                           //@synthesize engaged=_engaged - In the implementation block
@property (assign,nonatomic) BOOL assisted;                          //@synthesize assisted=_assisted - In the implementation block
@property (assign,nonatomic) int parkingEvents;                      //@synthesize parkingEvents=_parkingEvents - In the implementation block
@property (assign,nonatomic) int engagedParkingEvents;               //@synthesize engagedParkingEvents=_engagedParkingEvents - In the implementation block
@property (assign,nonatomic) int assistedParkingEvents;              //@synthesize assistedParkingEvents=_assistedParkingEvents - In the implementation block
@property (assign,nonatomic) int engagements;                        //@synthesize engagements=_engagements - In the implementation block
@property (assign,nonatomic) int assistances;                        //@synthesize assistances=_assistances - In the implementation block
@property (assign,nonatomic) int suppressedEvents;                   //@synthesize suppressedEvents=_suppressedEvents - In the implementation block
-(id)init;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setEngaged:(BOOL)arg1 ;
-(void)engagementEvent;
-(void)setLocationType:(int)arg1 ;
-(NSDate *)creationDate;
-(int)locationType;
-(BOOL)engaged;
-(int)engagements;
-(void)setEngagements:(int)arg1 ;
-(int)parkingEvents;
-(int)assistances;
-(int)assistedParkingEvents;
-(int)engagedParkingEvents;
-(id)initWithLocationType:(int)arg1 ;
-(void)clearScoreBoard;
-(void)setAssisted:(BOOL)arg1 ;
-(void)setParkingEvents:(int)arg1 ;
-(void)setEngagedParkingEvents:(int)arg1 ;
-(void)setAssistedParkingEvents:(int)arg1 ;
-(void)setAssistances:(int)arg1 ;
-(void)setSuppressedEvents:(int)arg1 ;
-(int)suppressedEvents;
-(BOOL)assisted;
-(void)copyToMetric:(id)arg1 ;
-(void)parkingEvent;
-(void)assistanceEvent;
-(void)suppressedEvent;
@end

