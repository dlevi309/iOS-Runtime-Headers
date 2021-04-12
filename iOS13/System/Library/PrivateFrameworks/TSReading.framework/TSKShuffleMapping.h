/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSKShuffleMapping : NSObject <NSCopying> {

	unsigned short mStartIndex;
	unsigned short mEndIndex;
	unsigned short* mMapping;
	BOOL mIsVertical;
	BOOL mIsMoveOperation;
	unsigned short mFirstMovedIndex;
	unsigned short mDestinationIndexForMove;
	unsigned short mNumberOfIndicesMoved;

}

@property (nonatomic,readonly) unsigned short startIndex; 
@property (nonatomic,readonly) unsigned short endIndex; 
@property (nonatomic,readonly) unsigned short* mapping; 
@property (nonatomic,readonly) unsigned short mappingSize; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)startIndex;
-(unsigned short*)mapping;
-(BOOL)isVertical;
-(BOOL)isMove;
-(unsigned short)endIndex;
-(id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2 mapping:(unsigned short*)arg3 ;
-(unsigned short)mappingSize;
-(id)initWithStartIndex:(unsigned short)arg1 endIndex:(unsigned short)arg2 ;
-(id)initForMovedIndicesStartingAtIndex:(unsigned short)arg1 destinationIndex:(unsigned short)arg2 numberOfIndices:(unsigned short)arg3 vertical:(BOOL)arg4 ;
-(id)copyInverse;
-(unsigned short)mapIndex:(unsigned short)arg1 ;
-(unsigned short)reverseMapIndex:(unsigned short)arg1 ;
-(void)enumerateMappingRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)insert:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2 insertingBefore:(BOOL)arg3 ;
-(void)remove:(unsigned short)arg1 indicesAtIndex:(unsigned short)arg2 ;
-(void)swapIndex:(unsigned short)arg1 withIndex:(unsigned short)arg2 ;
@end

