/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSMutableArray;

@interface ManagedEventHandler : NSObject {

	char* _notifyString;
	int _NotifyToken;
	char* _transportMessageString;
	NSMutableArray* _managedEvents;

}
+(void)initialize;
+(id)getHandlerByName:(id)arg1 ;
-(void)populateReply:(id)arg1 ForId:(unsigned long long)arg2 Count:(unsigned long long)arg3 ;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(id)feedbackForEventId:(unsigned long long)arg1 ;
-(void)didReceiveSyndrome:(id)arg1 ;
-(void)sendNotificationWithId:(unsigned long long)arg1 ;
@end

