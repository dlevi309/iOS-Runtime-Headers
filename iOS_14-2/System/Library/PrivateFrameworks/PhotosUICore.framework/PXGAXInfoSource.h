/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSIndexSet;


@protocol PXGAXInfoSource <NSObject>
@property (nonatomic,readonly) NSIndexSet * axSpriteIndexes; 
@property (nonatomic,readonly) NSIndexSet * axVisibleSpriteIndexes; 
@property (nonatomic,readonly) NSIndexSet * axSelectedSpriteIndexes; 
@required
-(id)axContentInfoAtSpriteIndex:(unsigned)arg1;
-(id)axSpriteIndexesInRect:(CGRect)arg1;
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2;
-(NSIndexSet *)axVisibleSpriteIndexes;
-(NSIndexSet *)axSpriteIndexes;
-(NSIndexSet *)axSelectedSpriteIndexes;

@end

