/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDiffableDataSourceItemRenderer.h>

@interface _UIOutlineItemRenderer : _UIDiffableDataSourceItemRenderer {

	/*^block*/id _willUpdateCellHandler;

}

@property (nonatomic,copy) id willUpdateCellHandler;              //@synthesize willUpdateCellHandler=_willUpdateCellHandler - In the implementation block
-(id)initWithIdentifier:(id)arg1 cellClass:(Class)arg2 handler:(/*^block*/id)arg3 ;
-(id)willUpdateCellHandler;
-(void)setWillUpdateCellHandler:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

