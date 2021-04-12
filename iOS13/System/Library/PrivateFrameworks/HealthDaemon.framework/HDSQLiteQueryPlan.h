/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSArray;

@interface HDSQLiteQueryPlan : NSObject {

	BOOL _includesTableScan;
	BOOL _usesIndex;
	BOOL _usesCoveringIndex;
	NSArray* _queryPlanRows;
	NSArray* _indices;

}

@property (nonatomic,copy,readonly) NSArray * queryPlanRows;              //@synthesize queryPlanRows=_queryPlanRows - In the implementation block
@property (nonatomic,readonly) BOOL includesTableScan;                    //@synthesize includesTableScan=_includesTableScan - In the implementation block
@property (nonatomic,readonly) BOOL usesIndex;                            //@synthesize usesIndex=_usesIndex - In the implementation block
@property (nonatomic,readonly) BOOL usesCoveringIndex;                    //@synthesize usesCoveringIndex=_usesCoveringIndex - In the implementation block
@property (nonatomic,readonly) NSArray * indices;                         //@synthesize indices=_indices - In the implementation block
-(id)description;
-(NSArray *)indices;
-(id)initWithQueryPlanRows:(id)arg1 ;
-(NSArray *)queryPlanRows;
-(BOOL)includesTableScan;
-(BOOL)usesIndex;
-(BOOL)usesCoveringIndex;
@end

