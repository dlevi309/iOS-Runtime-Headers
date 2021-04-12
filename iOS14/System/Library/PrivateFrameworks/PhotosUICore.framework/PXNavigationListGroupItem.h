/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXNavigationListItem.h>

@class PHCollection;

@interface PXNavigationListGroupItem : PXNavigationListItem {

	BOOL _group;
	BOOL _draggable;
	BOOL _expandable;
	PHCollection* _collection;

}
+(id)titleForIdentifier:(id)arg1 ;
-(id)collection;
-(BOOL)isGroup;
-(BOOL)isDraggable;
-(id)initWithIdentifier:(id)arg1 collection:(id)arg2 ;
-(BOOL)isExpandable;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

