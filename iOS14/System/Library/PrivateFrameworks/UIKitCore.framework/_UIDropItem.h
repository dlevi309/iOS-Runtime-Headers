/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)localObject;
-(id)itemProvider;
-(void)_setDropItemProvider:(id)arg1 ;
-(void)_setLocalDragItem:(id)arg1 ;
-(id)_dropItemProvider;
-(id)_privateLocalContext;
-(void)_setPrivateLocalContext:(id)arg1 ;
-(void)setLocalObject:(id)arg1 ;
-(id)_localDragItem;
@end

