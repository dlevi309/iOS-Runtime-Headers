/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/_PASSqliteRowIdCursor.h>

@class NSIndexSet, NSMutableIndexSet;

@interface _PASSqliteRowIdIndexSetCursor : _PASSqliteRowIdCursor {

	unsigned long long _currentIndex;
	NSIndexSet* _indexSet;
	NSMutableIndexSet* _mutableIndexSet;
	BOOL _isDescending;

}

@property (nonatomic,readonly) NSMutableIndexSet * mutableIndexSet; 
+(id)planningInfoForRowIdConstraint:(int)arg1 ;
+(BOOL)canOrderByRowId:(BOOL)arg1 ;
+(double)costFactorForRandomAccess;
-(id)init;
-(void)applyRowIdConstraint:(int)arg1 withArgument:(id)arg2 ;
-(NSMutableIndexSet *)mutableIndexSet;
-(void)matchNoRows;
-(void)finalizeConstraints;
-(unsigned long long)currentIndexedRowId;
-(void)setIndexSet:(id)arg1 ;
-(void)applyRowIdSort:(BOOL)arg1 ;
-(void)matchOneRow:(unsigned long long)arg1 ;
-(void)stepIndexedRow;
@end

