/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UICollectionLayoutFramesQueryOffsets : NSObject {

	long long _indexOffset;
	long long _supplementaryIndexOffset;
	CGPoint _frameOffset;

}

@property (assign,nonatomic) CGPoint frameOffset;                             //@synthesize frameOffset=_frameOffset - In the implementation block
@property (assign,nonatomic) long long indexOffset;                           //@synthesize indexOffset=_indexOffset - In the implementation block
@property (assign,nonatomic) long long supplementaryIndexOffset;              //@synthesize supplementaryIndexOffset=_supplementaryIndexOffset - In the implementation block
-(id)init;
-(CGPoint)frameOffset;
-(void)setFrameOffset:(CGPoint)arg1 ;
-(id)initWithFrameOffset:(CGPoint)arg1 indexOffset:(long long)arg2 supplementaryIndexOffset:(long long)arg3 ;
-(long long)indexOffset;
-(void)setIndexOffset:(long long)arg1 ;
-(long long)supplementaryIndexOffset;
-(void)setSupplementaryIndexOffset:(long long)arg1 ;
@end

