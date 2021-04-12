/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@class NSMutableArray;

@interface BBMaskedSet : NSObject {

	unsigned long long _maskBits;
	NSMutableArray* _maskObjectSets;

}

@property (nonatomic,retain) NSMutableArray * maskObjectSets;              //@synthesize maskObjectSets=_maskObjectSets - In the implementation block
-(void)removeObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(id)initWithMaskBits:(unsigned long long)arg1 ;
-(id)objectsForMask:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 withMask:(unsigned long long)arg2 ;
-(void)setMaskObjectSets:(NSMutableArray *)arg1 ;
-(void)_executeUsingMask:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(NSMutableArray *)maskObjectSets;
@end

