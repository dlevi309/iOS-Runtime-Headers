/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/


@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSMutableDictionary, LKSwitchOperation, NSObject, NSDate;

@interface LKLogEventController : NSObject {

	BOOL _streamingLogs;
	NSMutableArray* _switchOperationsMutableArray;
	NSMutableDictionary* _mutableKeychainItemsAddedByActivityID;
	LKSwitchOperation* _switchOperation;
	NSObject*<OS_dispatch_semaphore> _dynamicdsema;
	NSDate* _logEnumarationEndTime;
	/*^block*/id _logEventHandler;

}

@property (nonatomic,retain) NSMutableArray * switchOperationsMutableArray;                            //@synthesize switchOperationsMutableArray=_switchOperationsMutableArray - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableKeychainItemsAddedByActivityID;              //@synthesize mutableKeychainItemsAddedByActivityID=_mutableKeychainItemsAddedByActivityID - In the implementation block
@property (nonatomic,retain) LKSwitchOperation * switchOperation;                                      //@synthesize switchOperation=_switchOperation - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> dynamicdsema;                            //@synthesize dynamicdsema=_dynamicdsema - In the implementation block
@property (nonatomic,retain) NSDate * logEnumarationEndTime;                                           //@synthesize logEnumarationEndTime=_logEnumarationEndTime - In the implementation block
@property (assign,nonatomic) BOOL streamingLogs;                                                       //@synthesize streamingLogs=_streamingLogs - In the implementation block
@property (nonatomic,copy) id logEventHandler;                                                         //@synthesize logEventHandler=_logEventHandler - In the implementation block
+(id)loginDetailsPredicate;
-(id)init;
-(BOOL)streamingLogs;
-(NSDate *)logEnumarationEndTime;
-(NSObject*<OS_dispatch_semaphore>)dynamicdsema;
-(void)_parseUserManagementFrameworkLog:(id)arg1 ;
-(void)_parseBuddLog:(id)arg1 ;
-(void)_parseSpringBoardLog:(id)arg1 ;
-(BOOL)_needToParseSecurityLogs;
-(BOOL)_isKeychainLog:(id)arg1 ;
-(void)_parseKeychainLog:(id)arg1 ;
-(LKSwitchOperation *)switchOperation;
-(NSMutableArray *)switchOperationsMutableArray;
-(void)setSwitchOperation:(LKSwitchOperation *)arg1 ;
-(void)_handleKeychainItemEventFromLogEvent:(id)arg1 ;
-(NSMutableDictionary *)mutableKeychainItemsAddedByActivityID;
-(void)setDynamicdsema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setStreamingLogs:(BOOL)arg1 ;
-(id)logEventHandler;
-(void)enumuratePersistentLogsSynchronouslyFromDate:(id)arg1 logArchivePath:(id)arg2 predicate:(id)arg3 logEventHandler:(/*^block*/id)arg4 ;
-(void)setLogEnumarationEndTime:(NSDate *)arg1 ;
-(void)enumurateLogEventsSynchronouslyFromDate:(id)arg1 predicate:(id)arg2 logEventHandler:(/*^block*/id)arg3 ;
-(id)loginDetailsWithStartDate:(id)arg1 logArchivePath:(id)arg2 ;
-(void)setSwitchOperationsMutableArray:(NSMutableArray *)arg1 ;
-(void)setMutableKeychainItemsAddedByActivityID:(NSMutableDictionary *)arg1 ;
-(void)setLogEventHandler:(id)arg1 ;
@end
