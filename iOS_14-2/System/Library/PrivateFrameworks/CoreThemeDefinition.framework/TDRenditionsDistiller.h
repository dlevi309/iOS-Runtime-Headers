/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/


@protocol OS_dispatch_group;
@class CoreThemeDocument, NSMutableArray, NSConditionLock, NSObject, TDLogger;

@interface TDRenditionsDistiller : NSObject {

	CoreThemeDocument* document;
	NSMutableArray* renditionInQueue;
	NSMutableArray* csiDataInfoOutQueue;
	NSConditionLock* inQueueLock;
	NSConditionLock* outQueueLock;
	BOOL shouldCompressCSIDataFlag;
	BOOL noMoreCSIDataInfo;
	BOOL noMoreRenditions;
	NSObject*<OS_dispatch_group> _group;
	TDLogger* _logger;

}

@property (retain) TDLogger * logger;              //@synthesize logger=_logger - In the implementation block
-(void)waitUntilFinished;
-(void)setLogger:(TDLogger *)arg1 ;
-(TDLogger *)logger;
-(void)dealloc;
-(id)initWithDocument:(id)arg1 shouldCompressCSIDataFlag:(BOOL)arg2 ;
-(void)detachDistillationThread;
-(void)enqueueAbortFlag;
-(void)enqueueRenditionSpec:(id)arg1 ;
-(void)enqueueLastRenditionFlag;
-(id)nextCSIDataInfoFromQueue;
-(void)_distill:(id)arg1 ;
-(void)_enqueueOnQueue:(id)arg1 withQueueLock:(id)arg2 object:(id)arg3 ;
-(void)_enqueueOnOutQueueTheObject:(id)arg1 ;
-(id)_nextObjectFromInQueue;
-(void)_enqueueDistillingAbortedInfo;
-(void)_enqueueCSIDataInfo:(id)arg1 ;
-(void)_enqueueLastCSIDataInfoFlag;
-(void)_enqueueOnInQueueTheObject:(id)arg1 ;
@end

