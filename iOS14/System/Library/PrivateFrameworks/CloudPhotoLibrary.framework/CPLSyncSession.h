/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol CPLSyncSessionRescheduler, OS_xpc_object;
@class NSDate, NSObject, NSString;

@interface CPLSyncSession : NSObject {

	NSDate* _expectedDate;
	unsigned long long _sequenceNumber;
	id<CPLSyncSessionRescheduler> _rescheduler;
	NSObject*<OS_xpc_object> _detachedActivity;

}

@property (nonatomic,readonly) NSDate * expectedDate;                                //@synthesize expectedDate=_expectedDate - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceNumber;                    //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (getter=isDetached,nonatomic,readonly) BOOL detached; 
@property (nonatomic,readonly) BOOL shouldDefer; 
@property (nonatomic,readonly) BOOL mightNeedForegroundToStart; 
@property (nonatomic,readonly) NSString * whenItWillStartDescription; 
@property (nonatomic,retain) id<CPLSyncSessionRescheduler> rescheduler;              //@synthesize rescheduler=_rescheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> detachedActivity;              //@synthesize detachedActivity=_detachedActivity - In the implementation block
+(id)detachedSyncSession;
-(BOOL)shouldDefer;
-(BOOL)isDetached;
-(BOOL)isAfterDate:(id)arg1 ;
-(BOOL)isBeforeDate:(id)arg1 ;
-(unsigned long long)sequenceNumber;
-(NSDate *)expectedDate;
-(id)description;
-(id)initWithSequenceNumber:(unsigned long long)arg1 expectedDate:(id)arg2 ;
-(BOOL)isInMoreThanTimeInverval:(double)arg1 ;
-(BOOL)isInLessThanTimeInterval:(double)arg1 ;
-(void)dropExpectedDate;
-(void)deferWithBlock:(/*^block*/id)arg1 ;
-(void)sessionIsDone;
-(void)sessionWontHappen;
-(void)engineIsClosing;
-(BOOL)mightNeedForegroundToStart;
-(NSString *)whenItWillStartDescription;
-(id<CPLSyncSessionRescheduler>)rescheduler;
-(void)setRescheduler:(id<CPLSyncSessionRescheduler>)arg1 ;
-(NSObject*<OS_xpc_object>)detachedActivity;
-(void)setDetachedActivity:(NSObject*<OS_xpc_object>)arg1 ;
@end

