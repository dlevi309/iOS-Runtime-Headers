/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDTileGeometryProviding <NSObject>
@property (assign,nonatomic) BOOL tileGeometryDirty; 
@required
-(unsigned long long)tileGeometryCountWithLayer:(id)arg1;
-(void)tileGeometryAddVisibileIndices:(id)arg1 withLayer:(id)arg2 visibleBounds:(CGRect)arg3;
-(BOOL)tileGeometryDirty;
-(void)setTileGeometryDirty:(BOOL)arg1;
-(void)tileGeometryConfigureWithLayer:(id)arg1 tileLayer:(id)arg2 atIndex:(unsigned long long)arg3;
-(CGRect*)tileGeometryRectWithLayer:(id)arg1 atIndex:(unsigned long long)arg2 mask:(unsigned*)arg3;

@end

