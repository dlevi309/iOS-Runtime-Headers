/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITableViewDropItem.h>

@class UIDragItem, NSIndexPath, NSString;

@interface _UITableViewDropItemImpl : NSObject <_UITableViewDropItem> {

	UIDragItem* _dragItem;
	NSIndexPath* _sourceIndexPath;
	NSIndexPath* _translatedSourceIndexPath;

}

@property (nonatomic,retain) UIDragItem * dragItem;                                                                                                        //@synthesize dragItem=_dragItem - In the implementation block
@property (nonatomic,retain) NSIndexPath * sourceIndexPath;                                                                                                //@synthesize sourceIndexPath=_sourceIndexPath - In the implementation block
@property (setter=_setTranslatedSourceIndexPath:,getter=_translatedSourceIndexPath,nonatomic,retain) NSIndexPath * translatedSourceIndexPath;              //@synthesize translatedSourceIndexPath=_translatedSourceIndexPath - In the implementation block
@property (nonatomic,readonly) CGSize previewSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIDragItem *)dragItem;
-(id)initWithDragItem:(id)arg1 sourceIndexPath:(id)arg2 ;
-(void)_translateSourceIndexPath:(/*^block*/id)arg1 ;
-(id)_translatedSourceIndexPath;
-(void)_setTranslatedSourceIndexPath:(id)arg1 ;
-(CGSize)previewSize;
-(void)setDragItem:(UIDragItem *)arg1 ;
-(NSIndexPath *)sourceIndexPath;
-(void)setSourceIndexPath:(NSIndexPath *)arg1 ;
@end

