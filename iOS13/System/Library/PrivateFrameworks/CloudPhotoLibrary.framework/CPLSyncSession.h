/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol CPLSyncSessionRescheduler;
@class NSDate, NSString;

@interface CPLSyncSession : NSObject {

	NSDate* _expectedDate;
	unsigned long long _sequenceNumber;
	id<CPLSyncSessionRescheduler> _rescheduler;

}

@property (nonatomic,readonly) NSDate * expectedDate;                                //@synthesize expectedDate=_expectedDate - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceNumber;                    //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (getter=isDetached,nonatomic,readonly) BOOL detached; 
@property (nonatomic,readonly) BOOL shouldDefer; 
@property (nonatomic,readonly) BOOL mightNeedForegroundToStart; 
@property (nonatomic,readonly) NSString * whenItWillStartDescription; 
@property (nonatomic,retain) id<CPLSyncSessionRescheduler> rescheduler;              //@synthesize rescheduler=_rescheduler - In the implementation block
+(id)detachedSyncSession;
-(id)description;
-(BOOL)shouldDefer;
-(unsigned long long)sequenceNumber;
-(BOOL)isAfterDate:(id)arg1 ;
-(BOOL)isBeforeDate:(id)arg1 ;
-(BOOL)isDetached;
-(NSDate *)expectedDate;
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
@end

