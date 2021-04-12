/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate, NSNumber, ATXNotificationContext, NSMutableArray;

@interface ATXNotificationsRecord : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _finished;
	long long _outcome;
	long long _endingInteraction;
	NSString* _appName;
	NSDate* _publicationDate;
	NSString* _categoryID;
	NSString* _title;
	NSString* _subtitle;
	NSString* _message;
	NSNumber* _numSuppActions;
	NSNumber* _timezone;
	unsigned long long _incomingFeed;
	BOOL _hidden;
	NSDate* _activatedTime;
	NSDate* _unlockedTime;
	NSString* _notificationId;
	ATXNotificationContext* _ctx;
	NSDate* _creationTime;
	NSMutableArray* _stream;

}

@property (nonatomic,retain) NSString * appName;                        //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSString * notificationId;                 //@synthesize notificationId=_notificationId - In the implementation block
@property (nonatomic,retain) ATXNotificationContext * ctx;              //@synthesize ctx=_ctx - In the implementation block
@property (nonatomic,retain) NSDate * creationTime;                     //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * stream;                   //@synthesize stream=_stream - In the implementation block
+(id)serializeMetadata:(id)arg1 error:(id)arg2 ;
+(BOOL)isNotificationMetadataFromLockscreen:(id)arg1 ;
-(id)init;
-(void)start;
-(ATXNotificationContext *)ctx;
-(void)setCtx:(ATXNotificationContext *)arg1 ;
-(id)message;
-(NSMutableArray *)stream;
-(void)setStream:(NSMutableArray *)arg1 ;
-(BOOL)isExpired;
-(NSDate *)creationTime;
-(void)setCreationTime:(NSDate *)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(BOOL)addEvent:(id)arg1 ;
-(BOOL)isIgnored;
-(NSString *)notificationId;
-(void)setNotificationId:(NSString *)arg1 ;
-(id)initWithSerializedMetadata:(id)arg1 notificationID:(id)arg2 timestamp:(id)arg3 ;
-(id)initWithATXNotificationsInterface:(id)arg1 notificationID:(id)arg2 timestamp:(id)arg3 motion:(id)arg4 ;
-(long long)determineEndingInteraction;
-(long long)determineOutcome;
-(BOOL)isCleared;
-(BOOL)isEngagement;
-(long long)getOutcome;
-(long long)getEndingInteraction;
-(BOOL)isOnLockscreen;
-(BOOL)hasOrbed;
-(BOOL)hasGivenEventType:(long long)arg1 ;
-(BOOL)hasTappedCoalesceAndIsTopOfPile;
-(BOOL)hasDeviceStateChanged:(long long)arg1 ;
-(long long)findNextEventInStreamAndRecordTime:(id)arg1 forType:(long long)arg2 ;
-(id)getSerializedMetadata;
-(id)json:(BOOL)arg1 ;
-(id)pbmsg;
-(id)messageWithGrade:(id)arg1 userid:(id)arg2 ;
-(id)pbmsgWithGrade:(id)arg1 userId:(id)arg2 ;
@end

