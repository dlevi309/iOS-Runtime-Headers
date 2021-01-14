/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/


@protocol OS_dispatch_queue;
#import <BookCoverUtility/BookCoverUtility-Structs.h>
@class BCULayerRenderer, BCUCoverEffects, NSObject, NSHashTable;

@interface BCUImageRenderContext : NSObject {

	BCULayerRenderer* _renderer;
	BCUCoverEffects* _coverEffects;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSHashTable* _filterOperations;

}

@property (nonatomic,readonly) BCULayerRenderer * renderer;                           //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) BCUCoverEffects * coverEffects;                        //@synthesize coverEffects=_coverEffects - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * filterOperations;                          //@synthesize filterOperations=_filterOperations - In the implementation block
-(id)init;
-(void)filteredImageFromImage:(CGImageRef)arg1 filterInfo:(id)arg2 size:(CGSize)arg3 contentsScale:(double)arg4 completion:(/*^block*/id)arg5 ;
-(BCULayerRenderer *)renderer;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(BCUCoverEffects *)coverEffects;
-(NSHashTable *)filterOperations;
-(void)setFilterOperations:(NSHashTable *)arg1 ;
@end

