/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMapTable;

@interface _UIAssociationTable : NSObject {

	NSMapTable* _leftToRightHashTables;
	NSMapTable* _rightToLeftHashTables;

}
-(BOOL)hasLeftValuesForRightValue:(id)arg1 ;
-(id)leftValueEnumerableForRightValue:(id)arg1 ;
-(BOOL)hasRightValuesForLeftValue:(id)arg1 ;
-(id)rightValueEnumerable;
-(void)unregisterAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2 ;
-(id)description;
-(id)leftValueEnumerable;
-(id)rightValuesForLeftValue:(id)arg1 ;
-(id)rightValueEnumerableForLeftValue:(id)arg1 ;
-(id)leftValuesForRightValue:(id)arg1 ;
-(void)registerAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2 ;
-(BOOL)isEmpty;
-(id)rightValues;
-(id)initWithLeftValueOptions:(unsigned long long)arg1 rightValueOptions:(unsigned long long)arg2 ;
-(id)leftValues;
@end

