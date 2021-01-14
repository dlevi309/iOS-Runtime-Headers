/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/

#import <AirTraffic/AirTraffic-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSArray, NSDictionary, NSError, ATSession;

@interface ATSessionTask : NSObject <NSSecureCoding, NSCopying> {

	BOOL _finished;
	BOOL _running;
	BOOL _cancelled;
	BOOL _suspended;
	NSString* _sessionTaskIdentifier;
	NSString* _sessionGroupingKey;
	NSString* _localizedDescription;
	NSString* _dataClass;
	double _progress;
	unsigned long long _totalItemCount;
	unsigned long long _completedItemCount;
	NSNumber* _totalBytesToTransfer;
	NSNumber* _totalBytesTransferred;
	NSArray* _currentItemDescriptions;
	NSArray* _currentItems;
	NSArray* _recentlyFailedAssets;
	NSDictionary* _properties;
	NSError* _error;
	ATSession* _session;
	double _startTime;
	double _finishTime;

}

@property (getter=isRunning) BOOL running;                             //@synthesize running=_running - In the implementation block
@property (getter=isFinished) BOOL finished;                           //@synthesize finished=_finished - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                         //@synthesize cancelled=_cancelled - In the implementation block
@property (getter=isSuspended) BOOL suspended;                         //@synthesize suspended=_suspended - In the implementation block
@property (__weak) ATSession * session;                                //@synthesize session=_session - In the implementation block
@property (copy) NSString * sessionTaskIdentifier;                     //@synthesize sessionTaskIdentifier=_sessionTaskIdentifier - In the implementation block
@property (copy) NSString * localizedDescription;                      //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (copy) NSString * sessionGroupingKey;                        //@synthesize sessionGroupingKey=_sessionGroupingKey - In the implementation block
@property (copy) NSString * dataClass;                                 //@synthesize dataClass=_dataClass - In the implementation block
@property (assign) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (assign) unsigned long long totalItemCount;                  //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (assign) unsigned long long completedItemCount;              //@synthesize completedItemCount=_completedItemCount - In the implementation block
@property (copy) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (copy) NSArray * currentItemDescriptions;                    //@synthesize currentItemDescriptions=_currentItemDescriptions - In the implementation block
@property (copy) NSArray * currentItems;                               //@synthesize currentItems=_currentItems - In the implementation block
@property (copy) NSArray * recentlyFailedAssets;                       //@synthesize recentlyFailedAssets=_recentlyFailedAssets - In the implementation block
@property (copy) NSDictionary * properties;                            //@synthesize properties=_properties - In the implementation block
@property (copy) NSNumber * totalBytesToTransfer;                      //@synthesize totalBytesToTransfer=_totalBytesToTransfer - In the implementation block
@property (copy) NSNumber * totalBytesTransferred;                     //@synthesize totalBytesTransferred=_totalBytesTransferred - In the implementation block
@property (assign) double startTime;                                   //@synthesize startTime=_startTime - In the implementation block
@property (assign) double finishTime;                                  //@synthesize finishTime=_finishTime - In the implementation block
@property (readonly) double duration; 
+(BOOL)supportsSecureCoding;
-(void)setRunning:(BOOL)arg1 ;
-(unsigned long long)totalItemCount;
-(void)setCancelled:(BOOL)arg1 ;
-(NSDictionary *)properties;
-(BOOL)isSuspended;
-(double)progress;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(void)start;
-(void)setStartTime:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_start;
-(ATSession *)session;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(NSError *)error;
-(id)description;
-(NSString *)localizedDescription;
-(void)setSession:(ATSession *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)setDataClass:(NSString *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(NSArray *)currentItems;
-(BOOL)isRunning;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setTotalItemCount:(unsigned long long)arg1 ;
-(double)finishTime;
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSString *)sessionTaskIdentifier;
-(NSString *)sessionGroupingKey;
-(void)setFinishTime:(double)arg1 ;
-(id)baseClassRepresentation;
-(id)initWithDataClass:(id)arg1 ;
-(void)setSessionTaskIdentifier:(NSString *)arg1 ;
-(void)setSessionGroupingKey:(NSString *)arg1 ;
-(unsigned long long)completedItemCount;
-(void)setCompletedItemCount:(unsigned long long)arg1 ;
-(NSArray *)currentItemDescriptions;
-(void)setCurrentItemDescriptions:(NSArray *)arg1 ;
-(void)setCurrentItems:(NSArray *)arg1 ;
-(NSArray *)recentlyFailedAssets;
-(void)setRecentlyFailedAssets:(NSArray *)arg1 ;
-(NSNumber *)totalBytesTransferred;
-(void)setTotalBytesTransferred:(NSNumber *)arg1 ;
-(NSNumber *)totalBytesToTransfer;
-(void)setTotalBytesToTransfer:(NSNumber *)arg1 ;
-(double)duration;
-(void)cancel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)dataClass;
-(double)startTime;
-(BOOL)isCancelled;
@end

