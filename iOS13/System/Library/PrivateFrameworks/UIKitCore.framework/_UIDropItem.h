/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIDragItem.h>

@class UIDragItem, NSItemProvider;

@interface _UIDropItem : UIDragItem {

	UIDragItem* _localDragItem;
	NSItemProvider* _dropItemProvider;

}

@property (setter=_setLocalDragItem:,getter=_localDragItem,nonatomic,retain) UIDragItem * localDragItem;                           //@synthesize localDragItem=_localDragItem - In the implementation block
@property (setter=_setDropItemProvider:,getter=_dropItemProvider,nonatomic,retain) NSItemProvider * dropItemProvider;              //@synthesize dropItemProvider=_dropItemProvider - In the implementation block
-(id)itemProvider;
-(id)localObject;
-(void)setLocalObject:(id)arg1 ;
-(void)_setPrivateLocalContext:(id)arg1 ;
-(id)_privateLocalContext;
-(void)_setDropItemProvider:(id)arg1 ;
-(id)_localDragItem;
-(void)_setLocalDragItem:(id)arg1 ;
-(id)_dropItemProvider;
@end

