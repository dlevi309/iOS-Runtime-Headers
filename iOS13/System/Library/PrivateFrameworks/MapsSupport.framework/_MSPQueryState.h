/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@class NSArray;

@interface _MSPQueryState : NSObject {

	NSArray* _contents;
	NSArray* _identifiers;

}

@property (readonly) NSArray * contents;                 //@synthesize contents=_contents - In the implementation block
@property (readonly) NSArray * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
-(NSArray *)contents;
-(NSArray *)identifiers;
-(id)initWithContainerContents:(id)arg1 ;
-(id)stateByInvokingPreprocessingBlock:(/*^block*/id)arg1 mappingBlock:(/*^block*/id)arg2 ;
-(id)stateByDeletingObjectsAtIndexes:(id)arg1 ;
-(id)stateByDeletingObjectAtIndex:(unsigned long long)arg1 ;
-(id)stateByMovingObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(id)initWithContents:(id)arg1 identifiers:(id)arg2 ;
@end

