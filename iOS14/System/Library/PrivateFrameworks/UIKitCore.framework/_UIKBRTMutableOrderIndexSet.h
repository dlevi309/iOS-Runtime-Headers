/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setReversed:(BOOL)arg1 ;
-(void)addIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)beginningIndex;
-(unsigned long long)count;
-(BOOL)reversed;
-(id)initWithIndexesInRange:(NSRange)arg1 ;
-(id)description;
-(NSMutableIndexSet *)indexSet;
-(void)removeIndex:(unsigned long long)arg1 ;
-(unsigned long long)lowestIndex;
-(unsigned long long)endingIndex;
-(unsigned long long)highestIndex;
-(void)removeIndexes:(id)arg1 ;
@end

