/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDTileGeometryProviding.h>

@class NSString;

@interface TSWPRepTileGeometry : NSObject <TSDTileGeometryProviding> {

	vector<TSWPRepBoundsAnalyzer::Info, std::__1::allocator<TSWPRepBoundsAnalyzer::Info> >* _infos;
	BOOL _tileGeometryDirty;
	CGSize _maxTileSize;

}

@property (assign,nonatomic) CGSize maxTileSize;                    //@synthesize maxTileSize=_maxTileSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL tileGeometryDirty;                //@synthesize tileGeometryDirty=_tileGeometryDirty - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)tileGeometryCountWithLayer:(id)arg1 ;
-(void)tileGeometryAddVisibileIndices:(id)arg1 withLayer:(id)arg2 visibleBounds:(CGRect)arg3 ;
-(BOOL)tileGeometryDirty;
-(void)setTileGeometryDirty:(BOOL)arg1 ;
-(void)tileGeometryConfigureWithLayer:(id)arg1 tileLayer:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(CGRect)tileGeometryRectWithLayer:(id)arg1 atIndex:(unsigned long long)arg2 mask:(unsigned*)arg3 ;
-(BOOL)updateWithLayer:(id)arg1 scale:(double)arg2 columns:(id)arg3 ;
-(CGSize)maxTileSize;
-(void)setMaxTileSize:(CGSize)arg1 ;
@end

