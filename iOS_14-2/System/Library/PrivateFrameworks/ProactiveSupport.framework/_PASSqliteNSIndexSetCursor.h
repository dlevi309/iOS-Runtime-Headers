/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/_PASSqliteRowIdIndexSetCursor.h>

@class NSIndexSet;

@interface _PASSqliteNSIndexSetCursor : _PASSqliteRowIdIndexSetCursor

@property (nonatomic,retain) NSIndexSet * collection; 
+(const char*)sqliteCreateTableStatement;
+(const char*)sqliteMethodName;
+(BOOL)canOrderByValue:(BOOL)arg1 ;
+(double)baseEstimatedRows;
+(id)planningInfoForValueConstraint:(int)arg1 ;
+(double)baseEstimatedCost;
-(void)setCollection:(NSIndexSet *)arg1 ;
-(id)currentIndexedValue;
-(void)applyConstraint:(int)arg1 withArgument:(id)arg2 ;
-(void)applyValueSort:(BOOL)arg1 ;
@end

