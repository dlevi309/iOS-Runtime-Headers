/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)endEvent:(id)arg1 ;
-(void)beginEvent:(id)arg1 ;
-(void)logEvent:(id)arg1 ID:(id)arg2 message:(id)arg3 ;
-(id)createEventTrackingID:(int)arg1 ;
-(id)createCustomEventTrackingID:(id)arg1 ;
-(void)logEventData:(id)arg1 message:(id)arg2 ;
-(void)diagnostic:(id)arg1 message:(id)arg2 ;
-(void)debug:(id)arg1 message:(id)arg2 ;
-(void)info:(id)arg1 message:(id)arg2 ;
-(void)warning:(id)arg1 message:(id)arg2 ;
-(void)error:(id)arg1 message:(id)arg2 ;
-(void)fatal:(id)arg1 message:(id)arg2 ;
-(id)incompleteEvents;
-(long long)logLevel;
-(void)setLogLevel:(long long)arg1 ;
-(void)dealloc;
@end

