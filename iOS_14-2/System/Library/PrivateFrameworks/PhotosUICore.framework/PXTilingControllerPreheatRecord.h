/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXTilingControllerPreheatHandler;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSIndexSet;

@interface PXTilingControllerPreheatRecord : NSObject {

	id<PXTilingControllerPreheatHandler> _preheatHandler;
	void* _context;
	unsigned long long _tileGroup;
	NSIndexSet* _preheatedTileIndexes;
	UIEdgeInsets _padding;

}

@property (nonatomic,__weak,readonly) id<PXTilingControllerPreheatHandler> preheatHandler;              //@synthesize preheatHandler=_preheatHandler - In the implementation block
@property (nonatomic,readonly) void* context;                                                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned long long tileGroup;                                              //@synthesize tileGroup=_tileGroup - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                                      //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) NSIndexSet * preheatedTileIndexes;                                         //@synthesize preheatedTileIndexes=_preheatedTileIndexes - In the implementation block
-(void*)context;
-(void)setPreheatedTileIndexes:(NSIndexSet *)arg1 ;
-(NSIndexSet *)preheatedTileIndexes;
-(id<PXTilingControllerPreheatHandler>)preheatHandler;
-(id)initWithPreheatHandler:(id)arg1 context:(void*)arg2 ;
-(void)setTileGroup:(unsigned long long)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(unsigned long long)tileGroup;
@end

