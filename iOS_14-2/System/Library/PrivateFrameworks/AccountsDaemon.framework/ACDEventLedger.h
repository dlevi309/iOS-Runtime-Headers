/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@class NSMutableArray;

@interface ACDEventLedger : NSObject {

	char* _crashInfoString;
	NSMutableArray* _eventLedger;

}

@property (retain) NSMutableArray * eventLedger;              //@synthesize eventLedger=_eventLedger - In the implementation block
+(id)sharedLedger;
-(id)init;
-(void)recordEvent:(id)arg1 ;
-(void)simulateCrashWithMessage:(id)arg1 ;
-(NSMutableArray *)eventLedger;
-(id)historyDescription;
-(void)setEventLedger:(NSMutableArray *)arg1 ;
@end

