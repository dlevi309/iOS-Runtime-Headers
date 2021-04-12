/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class EKAvailabilityCache, NSDate, NSString, NSArray, NSObject, NSError;

@interface EKRequestAvailabilityOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	EKAvailabilityCache* _availabilityCache;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _ignoredEventID;
	NSArray* _addresses;
	/*^block*/id _resultsBlock;
	id _requestID;
	NSObject*<OS_dispatch_queue> _queue;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)init;
-(id)description;
-(NSError *)error;
-(void)cancel;
-(void)start;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)_finishWithError:(id)arg1 ;
-(id)initWithSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(/*^block*/id)arg6 ;
@end

