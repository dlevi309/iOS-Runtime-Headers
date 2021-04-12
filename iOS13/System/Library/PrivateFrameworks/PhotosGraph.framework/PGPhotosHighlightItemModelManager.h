/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGHighlightItemModelReader.h>
#import <libobjc.A.dylib/PGHighlightItemListModelWriter.h>

@class PHPhotoLibrary, NSMutableDictionary, NSSet, NSString;

@interface PGPhotosHighlightItemModelManager : NSObject <PGHighlightItemModelReader, PGHighlightItemListModelWriter> {

	unsigned short _kind;
	PHPhotoLibrary* _library;
	NSMutableDictionary* _visibilityStateByDayHighlighItemUUID;

}

@property (nonatomic,readonly) PHPhotoLibrary * library;                                                //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) unsigned short kind;                                                     //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * visibilityStateByDayHighlighItemUUID;              //@synthesize visibilityStateByDayHighlighItemUUID=_visibilityStateByDayHighlighItemUUID - In the implementation block
@property (nonatomic,readonly) NSSet * highlightUUIDsWithVisibilityStateChange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned short)kind;
-(PHPhotoLibrary *)library;
-(id)fetchChildHighlightItemsForHighlightItem:(id)arg1 ;
-(id)fetchParentHighlightItemsForHighlightItems:(id)arg1 ;
-(id)consumeHighlightItemList:(id)arg1 ;
-(void)setVisibilityState:(unsigned short)arg1 forHighlightItem:(id)arg2 ;
-(unsigned short)visibilityStateForHighlightItem:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 forKind:(unsigned short)arg2 ;
-(NSSet *)highlightUUIDsWithVisibilityStateChange;
-(void)addVisibleHighlight:(id)arg1 inMonth:(id)arg2 ;
-(NSMutableDictionary *)visibilityStateByDayHighlighItemUUID;
@end

