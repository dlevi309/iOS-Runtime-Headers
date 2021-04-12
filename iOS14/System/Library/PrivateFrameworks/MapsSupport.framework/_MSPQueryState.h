/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

