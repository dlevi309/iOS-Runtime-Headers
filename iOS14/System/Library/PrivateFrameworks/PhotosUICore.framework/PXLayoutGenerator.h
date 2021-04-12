/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PXLayoutMetrics, NSIndexSet, NSString;

@interface PXLayoutGenerator : NSObject <NSCopying> {

	PXLayoutMetrics* _metrics;
	unsigned long long _itemCount;
	unsigned long long _keyItemIndex;
	/*^block*/id _itemLayoutInfoBlock;

}

@property (nonatomic,readonly) PXCornerSpriteIndexes cornerSpriteIndexes; 
@property (nonatomic,copy) PXLayoutMetrics * metrics;                                  //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic) unsigned long long itemCount;                             //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) unsigned long long keyItemIndex;                          //@synthesize keyItemIndex=_keyItemIndex - In the implementation block
@property (nonatomic,copy) id itemLayoutInfoBlock;                                     //@synthesize itemLayoutInfoBlock=_itemLayoutInfoBlock - In the implementation block
@property (nonatomic,readonly) CGSize estimatedSize; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) NSIndexSet * geometryKinds; 
@property (nonatomic,readonly) NSString * diagnosticDescription; 
-(void)setMetrics:(PXLayoutMetrics *)arg1 ;
-(PXLayoutMetrics *)metrics;
-(unsigned long long)keyItemIndex;
-(id)init;
-(CGSize)estimatedSize;
-(CGSize)size;
-(unsigned long long)itemCount;
-(PXCornerSpriteIndexes)cornerSpriteIndexes;
-(id)initWithMetrics:(id)arg1 ;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(NSString *)diagnosticDescription;
-(void)setKeyItemIndex:(unsigned long long)arg1 ;
-(void)setItemLayoutInfoBlock:(id)arg1 ;
-(id)itemLayoutInfoBlock;
-(void)invalidate;
-(void)setItemCount:(unsigned long long)arg1 ;
-(NSIndexSet *)geometryKinds;
-(unsigned long long)numberOfGeometriesWithKind:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

