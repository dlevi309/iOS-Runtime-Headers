/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableSet;

@interface PFUbiquityEventLogging : NSObject {

	NSMutableSet* _logEvents;
	long long _logLevel;

}

@property (assign) long long logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
+(void)initialize;
+(id)sharedEventLogger;
-(id)init;
-(void)dealloc;
-(long long)logLevel;
-(void)logEvent:(id)arg1 ID:(id)arg2 message:(id)arg3 ;
-(id)createEventTrackingID:(int)arg1 ;
-(id)createCustomEventTrackingID:(id)arg1 ;
-(void)beginEvent:(id)arg1 ;
-(void)logEventData:(id)arg1 message:(id)arg2 ;
-(void)diagnostic:(id)arg1 message:(id)arg2 ;
-(void)debug:(id)arg1 message:(id)arg2 ;
-(void)info:(id)arg1 message:(id)arg2 ;
-(void)warning:(id)arg1 message:(id)arg2 ;
-(void)error:(id)arg1 message:(id)arg2 ;
-(void)fatal:(id)arg1 message:(id)arg2 ;
-(void)endEvent:(id)arg1 ;
-(id)incompleteEvents;
-(void)setLogLevel:(long long)arg1 ;
@end

