/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSXPCListener, ServiceImpl;

@interface AnalyticsPortal : NSObject {

	NSXPCListener* listener;
	ServiceImpl* si;

}
+(id)sharedInstance;
+(void)shutdown;
+(void)clientTransactionsRelease;
+(void)setListeningPort:(const char*)arg1 queue:(id)arg2 ;
-(void)shutdown;
-(void)clientTransactionsRelease;
-(void)setListeningPort:(const char*)arg1 queue:(id)arg2 ;
@end

