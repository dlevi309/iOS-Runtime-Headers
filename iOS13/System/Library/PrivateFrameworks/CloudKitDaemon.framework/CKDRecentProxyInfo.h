/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString, NSMutableSet, NSDate, NSMutableDictionary;

@interface CKDRecentProxyInfo : NSObject {

	NSString* _processName;
	NSMutableSet* _containerIdentifiers;
	NSDate* _lastSeen;
	unsigned long long _connectionCount;
	NSMutableDictionary* _operationStatisticsByClassName;

}

@property (nonatomic,readonly) NSString * processName;                                            //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) NSMutableSet * containerIdentifiers;                               //@synthesize containerIdentifiers=_containerIdentifiers - In the implementation block
@property (nonatomic,readonly) NSDate * lastSeen;                                                 //@synthesize lastSeen=_lastSeen - In the implementation block
@property (readonly) unsigned long long connectionCount;                                          //@synthesize connectionCount=_connectionCount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * operationStatisticsByClassName;              //@synthesize operationStatisticsByClassName=_operationStatisticsByClassName - In the implementation block
-(NSString *)processName;
-(unsigned long long)connectionCount;
-(id)CKStatusReportArray;
-(NSMutableSet *)containerIdentifiers;
-(NSDate *)lastSeen;
-(id)initWithProxy:(id)arg1 ;
-(void)mergeProxy:(id)arg1 ;
-(NSMutableDictionary *)operationStatisticsByClassName;
@end

