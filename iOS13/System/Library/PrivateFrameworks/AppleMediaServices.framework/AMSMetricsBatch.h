/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class ACAccount, NSString, NSArray, NSURL;

@interface AMSMetricsBatch : NSObject {

	BOOL _containsLoadURL;
	ACAccount* _account;
	NSString* _canaryIdentifier;
	NSArray* _droppedEvents;
	NSArray* _eventDictionaries;
	NSArray* _events;
	NSURL* _reportURL;
	NSArray* _skippedEvents;

}

@property (nonatomic,retain) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * canaryIdentifier;              //@synthesize canaryIdentifier=_canaryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL containsLoadURL;                     //@synthesize containsLoadURL=_containsLoadURL - In the implementation block
@property (nonatomic,retain) NSArray * droppedEvents;                  //@synthesize droppedEvents=_droppedEvents - In the implementation block
@property (nonatomic,retain) NSArray * eventDictionaries;              //@synthesize eventDictionaries=_eventDictionaries - In the implementation block
@property (nonatomic,retain) NSArray * events;                         //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSURL * reportURL;                        //@synthesize reportURL=_reportURL - In the implementation block
@property (nonatomic,retain) NSArray * skippedEvents;                  //@synthesize skippedEvents=_skippedEvents - In the implementation block
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
-(NSString *)canaryIdentifier;
-(void)setCanaryIdentifier:(NSString *)arg1 ;
-(BOOL)containsLoadURL;
-(void)setContainsLoadURL:(BOOL)arg1 ;
-(NSArray *)droppedEvents;
-(void)setDroppedEvents:(NSArray *)arg1 ;
-(NSArray *)eventDictionaries;
-(void)setEventDictionaries:(NSArray *)arg1 ;
-(NSURL *)reportURL;
-(void)setReportURL:(NSURL *)arg1 ;
-(NSArray *)skippedEvents;
-(void)setSkippedEvents:(NSArray *)arg1 ;
@end

