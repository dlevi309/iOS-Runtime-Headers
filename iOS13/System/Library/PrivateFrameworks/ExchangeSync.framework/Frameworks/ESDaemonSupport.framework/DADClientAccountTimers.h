/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)killAllTimers;
-(NSMutableDictionary *)folderIdToLastFolderContentsRequestDate;
-(double)deferredTimerInterval;
-(void)setLastFolderContentRequestDate:(id)arg1 forFolderWithId:(id)arg2 ;
-(void)setDeferredAllFolderContentsSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setDeferredFolderListSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setDeferredFolderContentsSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(long long)clientBehaviorForFolderIds:(id)arg1 ;
-(long long)clientBehaviorForFolderList;
-(long long)clientBehaviorForFolderContents;
-(BOOL)allowFolderWipe;
-(NSDate *)lastAllFolderContentsRequestDate;
-(void)setLastAllFolderContentsRequestDate:(NSDate *)arg1 ;
-(NSDate *)lastFolderListRequestDate;
-(void)setLastFolderListRequestDate:(NSDate *)arg1 ;
-(NSDate *)lastFolderWipeRequestDate;
-(void)setLastFolderWipeRequestDate:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_source>)deferredAllFolderContentsSource;
-(NSObject*<OS_dispatch_source>)deferredFolderListSource;
-(NSObject*<OS_dispatch_source>)deferredFolderContentsSource;
-(void)setFolderIdToLastFolderContentsRequestDate:(NSMutableDictionary *)arg1 ;
@end

