/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@class NSMutableArray;

@interface BBMaskedSet : NSObject {

	unsigned long long _maskBits;
	NSMutableArray* _maskObjectSets;

}

@property (nonatomic,retain) NSMutableArray * maskObjectSets;              //@synthesize maskObjectSets=_maskObjectSets - In the implementation block
-(void)setMaskObjectSets:(NSMutableArray *)arg1 ;
-(void)addObject:(id)arg1 withMask:(unsigned long long)arg2 ;
-(void)_executeUsingMask:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithMaskBits:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(void)removeObject:(id)arg1 ;
-(id)objectsForMask:(unsigned long long)arg1 ;
-(NSMutableArray *)maskObjectSets;
@end

