/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <Foundation/NSOperation.h>
#import <CalendarDaemon/CalSearchDataSink.h>

@protocol OS_dispatch_semaphore, NSObject;
@class ClientConnection, CalSearch, NSObject, NSString;

@interface CADCalSearchOperation : NSOperation <CalSearchDataSink> {

	ClientConnection* _connection;
	CalSearch* _search;
	NSObject*<OS_dispatch_semaphore> _finishedSemaphore;
	unsigned _replyID;
	long long _lastIndex;
	id<NSObject> _boostToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operationWithConnection:(id)arg1 filter:(CalFilterRef)arg2 replyID:(unsigned)arg3 ;
-(void)_completeOperation;
-(id)search;
-(void)main;
-(BOOL)calSearchShouldStopSearching:(id)arg1 ;
-(void)calSearchComplete:(id)arg1 ;
-(void)calSearch:(id)arg1 foundOccurrences:(CFArrayRef)arg2 cachedDays:(CFArrayRef)arg3 cachedDaysIndexes:(CFArrayRef)arg4 ;
-(void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2 ;
-(unsigned)replyID;
-(void)cancel;
-(void)dealloc;
-(id)initWithConnection:(id)arg1 filter:(CalFilterRef)arg2 replyID:(unsigned)arg3 ;
@end

