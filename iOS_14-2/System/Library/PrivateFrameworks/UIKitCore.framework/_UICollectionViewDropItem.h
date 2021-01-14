/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionViewDropItem.h>

@protocol _UICollectionViewDropItem <UICollectionViewDropItem>
@end


@class UIDragItem, NSIndexPath, NSString;

@interface _UICollectionViewDropItem : NSObject <_UICollectionViewDropItem> {

	UIDragItem* _dragItem;
	NSIndexPath* _sourceIndexPath;
	CGSize _previewSize;

}

@property (nonatomic,retain) UIDragItem * dragItem;                      //@synthesize dragItem=_dragItem - In the implementation block
@property (assign,nonatomic) CGSize previewSize;                         //@synthesize previewSize=_previewSize - In the implementation block
@property (nonatomic,retain) NSIndexPath * sourceIndexPath;              //@synthesize sourceIndexPath=_sourceIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIDragItem *)dragItem;
-(NSString *)description;
-(id)initWithDragItem:(id)arg1 previewSize:(CGSize)arg2 sourceIndexPath:(id)arg3 ;
-(CGSize)previewSize;
-(void)setDragItem:(UIDragItem *)arg1 ;
-(NSIndexPath *)sourceIndexPath;
-(void)setPreviewSize:(CGSize)arg1 ;
-(void)setSourceIndexPath:(NSIndexPath *)arg1 ;
@end

