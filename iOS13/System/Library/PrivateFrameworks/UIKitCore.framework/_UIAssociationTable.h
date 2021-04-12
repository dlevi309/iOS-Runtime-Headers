/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMapTable;

@interface _UIAssociationTable : NSObject {

	NSMapTable* _leftToRightHashTables;
	NSMapTable* _rightToLeftHashTables;

}
-(id)description;
-(BOOL)isEmpty;
-(id)initWithLeftValueOptions:(unsigned long long)arg1 rightValueOptions:(unsigned long long)arg2 ;
-(id)rightValueEnumerableForLeftValue:(id)arg1 ;
-(void)registerAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2 ;
-(void)unregisterAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2 ;
-(BOOL)hasRightValuesForLeftValue:(id)arg1 ;
-(BOOL)hasLeftValuesForRightValue:(id)arg1 ;
-(id)leftValuesForRightValue:(id)arg1 ;
-(id)leftValueEnumerable;
-(id)leftValues;
-(id)rightValues;
-(id)rightValueEnumerable;
-(id)rightValuesForLeftValue:(id)arg1 ;
-(id)leftValueEnumerableForRightValue:(id)arg1 ;
@end

