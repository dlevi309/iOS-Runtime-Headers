/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesFeedLayoutGenerator.h>

@class PXMemoriesSpec, NSIndexSet, NSDictionary;

@interface PXMemoriesFeedEntryLayoutGenerator : PXMemoriesFeedLayoutGenerator {

	CGSize _size;
	PXMemoriesSpec* _spec;
	NSIndexSet* _geometryKinds;
	CGRect _sectionHeaderRect;
	NSDictionary* _rectsByIndexByKind;
	BOOL _isPrepared;
	long long _layoutAxis;

}

@property (assign,nonatomic) long long layoutAxis;              //@synthesize layoutAxis=_layoutAxis - In the implementation block
-(void)setLayoutAxis:(long long)arg1 ;
-(long long)layoutAxis;
-(CGSize)estimatedSize;
-(CGSize)size;
-(id)initWithMetrics:(id)arg1 ;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(void)invalidate;
-(id)geometryKinds;
-(unsigned long long)numberOfGeometriesWithKind:(long long)arg1 ;
-(void)_prepareLayoutIfNeeded;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

