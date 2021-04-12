/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject;

@interface PPEventMetricsLogger : NSObject <NSSecureCoding> {

	opaque_pthread_mutex_t _lock;
	NSString* _path;
	NSMutableArray* _loggedInteractionsSummary;
	NSObject*<OS_dispatch_source> _persistenceTimerSource;
	NSObject*<OS_dispatch_queue> _interactionsWriteQueue;
	double _storeCreationDate;

}
+(BOOL)supportsSecureCoding;
+(unsigned long long)numberOfDaysBetweenDate:(id)arg1 andDate:(id)arg2 ;
+(id)defaultLogger;
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(id)init;
-(BOOL)resetLogs;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFileName:(id)arg1 ;
-(void)updateAndScheduleDiskWrite;
-(double)_storeAge;
-(id)initWithCoder:(id)arg1 ;
-(void)sendRTCLogsWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)logNewInteractionSummaryWithDictionary:(id)arg1 ;
-(id)logsToSend;
-(id)_createRTCReporting;
-(BOOL)storeToDisk;
-(id)_descriptionForInterface:(unsigned short)arg1 ;
-(id)_descriptionForActionType:(unsigned short)arg1 ;
-(id)eventsAndExtraordinaryEventsDictFromDate:(id)arg1 ;
-(BOOL)_removeInteractionsSummaryLogsFromLogsAndResetStoreAge:(id)arg1 ;
-(id)allowedLogFromLog:(id)arg1 ;
-(void)logEventInteractionForEventHighlight:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(BOOL)_incrementInteractionForEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(id)_interactionAttributesForEventHighlight:(id)arg1 ;
-(id)_interactionKeyForInterface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(id)_descriptionForPPRTCCategory:(unsigned short)arg1 ;
-(id)loggedInteractionsSummaryMetrics;
@end

