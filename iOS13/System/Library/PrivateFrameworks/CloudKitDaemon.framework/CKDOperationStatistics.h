/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary, CKDOperationMetrics;

@interface CKDOperationStatistics : NSObject <NSCopying> {

	NSString* _operationClassName;
	NSMutableDictionary* _recentErrorsByDate;
	unsigned long long _operationCount;
	CKDOperationMetrics* _aggregateCKMetrics;
	CKDOperationMetrics* _aggregateMMCSMetrics;

}

@property (nonatomic,readonly) NSString * operationClassName;                           //@synthesize operationClassName=_operationClassName - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * recentErrorsByDate;                //@synthesize recentErrorsByDate=_recentErrorsByDate - In the implementation block
@property (readonly) unsigned long long operationCount;                                 //@synthesize operationCount=_operationCount - In the implementation block
@property (nonatomic,readonly) CKDOperationMetrics * aggregateCKMetrics;                //@synthesize aggregateCKMetrics=_aggregateCKMetrics - In the implementation block
@property (nonatomic,readonly) CKDOperationMetrics * aggregateMMCSMetrics;              //@synthesize aggregateMMCSMetrics=_aggregateMMCSMetrics - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addOperation:(id)arg1 ;
-(unsigned long long)operationCount;
-(void)merge:(id)arg1 ;
-(id)CKStatusReportArray;
-(id)initWithOperationClassName:(id)arg1 ;
-(NSString *)operationClassName;
-(NSMutableDictionary *)recentErrorsByDate;
-(CKDOperationMetrics *)aggregateCKMetrics;
-(CKDOperationMetrics *)aggregateMMCSMetrics;
-(id)_trimmedError:(id)arg1 ;
-(void)_addMetrics:(id)arg1 toAggregate:(id)arg2 ;
@end

