/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableIndexSet;

@interface _UIKBRTMutableOrderIndexSet : NSObject {

	BOOL _reversed;
	NSMutableIndexSet* _indexSet;

}

@property (nonatomic,readonly) NSMutableIndexSet * indexSet;              //@synthesize indexSet=_indexSet - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long lowestIndex; 
@property (readonly) unsigned long long highestIndex; 
@property (readonly) unsigned long long beginningIndex; 
@property (readonly) unsigned long long endingIndex; 
@property (assign,nonatomic) BOOL reversed;                               //@synthesize reversed=_reversed - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)addIndex:(unsigned long long)arg1 ;
-(id)initWithIndexesInRange:(NSRange)arg1 ;
-(NSMutableIndexSet *)indexSet;
-(void)removeIndex:(unsigned long long)arg1 ;
-(void)removeIndexes:(id)arg1 ;
-(void)setReversed:(BOOL)arg1 ;
-(unsigned long long)lowestIndex;
-(unsigned long long)highestIndex;
-(unsigned long long)beginningIndex;
-(unsigned long long)endingIndex;
-(BOOL)reversed;
@end

