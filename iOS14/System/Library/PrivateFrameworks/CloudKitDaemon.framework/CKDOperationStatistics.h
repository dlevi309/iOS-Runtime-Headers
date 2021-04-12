/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)merge:(id)arg1 ;
-(id)_trimmedError:(id)arg1 ;
-(void)addOperation:(id)arg1 ;
-(CKDOperationMetrics *)aggregateCKMetrics;
-(id)initWithOperationClassName:(id)arg1 ;
-(unsigned long long)operationCount;
-(CKDOperationMetrics *)aggregateMMCSMetrics;
-(void)_addMetrics:(id)arg1 toAggregate:(id)arg2 ;
-(NSString *)operationClassName;
-(id)CKStatusReportArray;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)recentErrorsByDate;
@end

