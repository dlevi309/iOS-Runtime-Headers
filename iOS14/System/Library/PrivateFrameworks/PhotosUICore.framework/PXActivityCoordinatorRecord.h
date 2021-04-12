/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXActivityCoordinatorItem;
@interface PXActivityCoordinatorRecord : NSObject {

	id<PXActivityCoordinatorItem> _item;

}

@property (assign,nonatomic,__weak) id<PXActivityCoordinatorItem> item;              //@synthesize item=_item - In the implementation block
-(id<PXActivityCoordinatorItem>)item;
-(void)setItem:(id<PXActivityCoordinatorItem>)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

