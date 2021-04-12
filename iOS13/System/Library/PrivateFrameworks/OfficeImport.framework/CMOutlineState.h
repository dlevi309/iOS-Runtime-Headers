/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray, WDListDefinition, WDList;

@interface CMOutlineState : NSObject {

	NSMutableArray* _counters;
	WDListDefinition* _listDefinition;
	WDList* _currentList;

}

@property (readonly) WDListDefinition * listDefinition;              //@synthesize listDefinition=_listDefinition - In the implementation block
@property (retain) WDList * currentList;                             //@synthesize currentList=_currentList - In the implementation block
-(id)init;
-(void)reset;
-(unsigned long long)levelCount;
-(WDList *)currentList;
-(unsigned long long)counterAtLevel:(unsigned char)arg1 ;
-(void)setCurrentList:(WDList *)arg1 ;
-(id)levelDescriptionAtIndex:(unsigned char)arg1 ;
-(void)increaseCounterAtLevel:(unsigned char)arg1 ;
-(WDListDefinition *)listDefinition;
-(id)initWithListDefinition:(id)arg1 ;
-(void)setCounterTo:(unsigned long long)arg1 atLevel:(unsigned char)arg2 ;
@end

