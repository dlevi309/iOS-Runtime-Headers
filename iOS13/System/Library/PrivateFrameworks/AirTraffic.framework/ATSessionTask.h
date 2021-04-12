/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _sessionTaskIdentifier;
	NSString* _sessionGroupingKey;
	NSString* _localizedDescription;
	double _progress;
	unsigned long long _totalItemCount;
	unsigned long long _completedItemCount;
	NSNumber* _totalBytesToTransfer;
	NSNumber* _totalBytesTransferred;
	NSArray* _currentItemDescriptions;
	NSArray* _currentItems;
	NSDictionary* _properties;
	NSError* _error;
	ATSession* _session;
	double _startTime;
	double _finishTime;

}

@property (getter=isRunning) BOOL running;                             //@synthesize running=_running - In the implementation block
@property (getter=isFinished) BOOL finished;                           //@synthesize finished=_finished - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                         //@synthesize cancelled=_cancelled - In the implementation block
@property (__weak) ATSession * session;                                //@synthesize session=_session - In the implementation block
@property (copy) NSString * sessionTaskIdentifier;                     //@synthesize sessionTaskIdentifier=_sessionTaskIdentifier - In the implementation block
@property (copy) NSString * localizedDescription;                      //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (copy) NSString * sessionGroupingKey;                        //@synthesize sessionGroupingKey=_sessionGroupingKey - In the implementation block
@property (assign) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (assign) unsigned long long totalItemCount;                  //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (assign) unsigned long long completedItemCount;              //@synthesize completedItemCount=_completedItemCount - In the implementation block
@property (copy) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (copy) NSArray * currentItemDescriptions;                    //@synthesize currentItemDescriptions=_currentItemDescriptions - In the implementation block
@property (copy) NSArray * currentItems;                               //@synthesize currentItems=_currentItems - In the implementation block
@property (copy) NSDictionary * properties;                            //@synthesize properties=_properties - In the implementation block
@property (copy) NSNumber * totalBytesToTransfer;                      //@synthesize totalBytesToTransfer=_totalBytesToTransfer - In the implementation block
@property (copy) NSNumber * totalBytesTransferred;                     //@synthesize totalBytesTransferred=_totalBytesTransferred - In the implementation block
@property (assign) double startTime;                                   //@synthesize startTime=_startTime - In the implementation block
@property (assign) double finishTime;                                  //@synthesize finishTime=_finishTime - In the implementation block
@property (readonly) double duration; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(void)setError:(NSError *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(double)progress;
-(BOOL)isRunning;
-(double)duration;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)_start;
-(NSDictionary *)properties;
-(ATSession *)session;
-(void)setSession:(ATSession *)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(NSArray *)currentItems;
-(unsigned long long)totalItemCount;
-(void)setFinishTime:(double)arg1 ;
-(void)setTotalItemCount:(unsigned long long)arg1 ;
-(NSString *)sessionTaskIdentifier;
-(NSString *)sessionGroupingKey;
-(id)baseClassRepresentation;
-(double)finishTime;
-(void)setSessionTaskIdentifier:(NSString *)arg1 ;
-(void)setSessionGroupingKey:(NSString *)arg1 ;
-(unsigned long long)completedItemCount;
-(void)setCompletedItemCount:(unsigned long long)arg1 ;
-(NSArray *)currentItemDescriptions;
-(void)setCurrentItemDescriptions:(NSArray *)arg1 ;
-(void)setCurrentItems:(NSArray *)arg1 ;
-(NSNumber *)totalBytesTransferred;
-(void)setTotalBytesTransferred:(NSNumber *)arg1 ;
-(NSNumber *)totalBytesToTransfer;
-(void)setTotalBytesToTransfer:(NSNumber *)arg1 ;
@end

