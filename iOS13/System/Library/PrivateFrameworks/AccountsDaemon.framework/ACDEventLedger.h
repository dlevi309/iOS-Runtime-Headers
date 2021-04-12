/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)simulateCrashWithMessage:(id)arg1 ;
-(void)recordEvent:(id)arg1 ;
-(NSMutableArray *)eventLedger;
-(id)historyDescription;
-(void)setEventLedger:(NSMutableArray *)arg1 ;
@end

