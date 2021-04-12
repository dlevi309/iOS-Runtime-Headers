/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrameOffset:(CGPoint)arg1 indexOffset:(long long)arg2 supplementaryIndexOffset:(long long)arg3 ;
-(void)setFrameOffset:(CGPoint)arg1 ;
-(CGPoint)frameOffset;
-(long long)indexOffset;
-(void)setIndexOffset:(long long)arg1 ;
-(long long)supplementaryIndexOffset;
-(void)setSupplementaryIndexOffset:(long long)arg1 ;
@end

