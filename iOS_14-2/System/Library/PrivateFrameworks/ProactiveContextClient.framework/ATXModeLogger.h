/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDateFormatter, NSUserDefaults, ATXModeDuetHelper;

@interface ATXModeLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSDateFormatter* _formatter;
	NSUserDefaults* _defaults;
	ATXModeDuetHelper* _duetHelper;
	BOOL _shareDiagnosticDataWrapper;

}

@property (assign) BOOL shareDiagnosticDataWrapper;              //@synthesize shareDiagnosticDataWrapper=_shareDiagnosticDataWrapper - In the implementation block
-(id)initWithDuetHelper:(id)arg1 ;
-(id)stringForDate:(id)arg1 ;
-(id)_userDefaults;
-(id)_userID;
-(id)_lastSubmissionDate;
-(BOOL)shareDiagnosticDataWrapper;
-(void)_updateLastSubmissionDate:(id)arg1 ;
-(void)logEventsFromModeStream;
-(void)setShareDiagnosticDataWrapper:(BOOL)arg1 ;
@end

