/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSXPCListener, ServiceImpl;

@interface AnalyticsPortal : NSObject {

	NSXPCListener* listener;
	ServiceImpl* si;

}
+(void)shutdown;
+(id)sharedInstance;
+(void)setListeningPort:(const char*)arg1 queue:(id)arg2 ;
+(void)clientTransactionsRelease;
-(void)shutdown;
-(void)setListeningPort:(const char*)arg1 queue:(id)arg2 ;
-(void)clientTransactionsRelease;
@end

