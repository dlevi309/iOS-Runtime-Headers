/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
*/


@protocol OS_dispatch_source;
@class NSDate, NSObject, NSMutableDictionary;

@interface DADClientAccountTimers : NSObject {

	NSDate* _lastAllFolderContentsRequestDate;
	NSDate* _lastFolderListRequestDate;
	NSDate* _lastFolderWipeRequestDate;
	NSObject*<OS_dispatch_source> _deferredAllFolderContentsSource;
	NSObject*<OS_dispatch_source> _deferredFolderListSource;
	NSObject*<OS_dispatch_source> _deferredFolderContentsSource;
	NSMutableDictionary* _folderIdToLastFolderContentsRequestDate;

}

@property (nonatomic,retain) NSMutableDictionary * folderIdToLastFolderContentsRequestDate;                     //@synthesize folderIdToLastFolderContentsRequestDate=_folderIdToLastFolderContentsRequestDate - In the implementation block
@property (nonatomic,retain) NSDate * lastAllFolderContentsRequestDate;                                         //@synthesize lastAllFolderContentsRequestDate=_lastAllFolderContentsRequestDate - In the implementation block
@property (nonatomic,retain) NSDate * lastFolderListRequestDate;                                                //@synthesize lastFolderListRequestDate=_lastFolderListRequestDate - In the implementation block
@property (nonatomic,retain) NSDate * lastFolderWipeRequestDate;                                                //@synthesize lastFolderWipeRequestDate=_lastFolderWipeRequestDate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_source> deferredAllFolderContentsSource;              //@synthesize deferredAllFolderContentsSource=_deferredAllFolderContentsSource - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_source> deferredFolderListSource;                     //@synthesize deferredFolderListSource=_deferredFolderListSource - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_source> deferredFolderContentsSource;                 //@synthesize deferredFolderContentsSource=_deferredFolderContentsSource - In the implementation block
-(void)setLastFolderWipeRequestDate:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_source>)deferredFolderContentsSource;
-(long long)clientBehaviorForFolderContents;
-(NSMutableDictionary *)folderIdToLastFolderContentsRequestDate;
-(NSObject*<OS_dispatch_source>)deferredAllFolderContentsSource;
-(void)setFolderIdToLastFolderContentsRequestDate:(NSMutableDictionary *)arg1 ;
-(long long)clientBehaviorForFolderIds:(id)arg1 ;
-(NSDate *)lastAllFolderContentsRequestDate;
-(NSDate *)lastFolderWipeRequestDate;
-(void)setDeferredFolderListSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)allowFolderWipe;
-(void)killAllTimers;
-(void)setDeferredFolderContentsSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(long long)clientBehaviorForFolderList;
-(void)setLastFolderListRequestDate:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_source>)deferredFolderListSource;
-(double)deferredTimerInterval;
-(NSDate *)lastFolderListRequestDate;
-(void)setDeferredAllFolderContentsSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setLastAllFolderContentsRequestDate:(NSDate *)arg1 ;
-(void)setLastFolderContentRequestDate:(id)arg1 forFolderWithId:(id)arg2 ;
-(void)dealloc;
@end

