/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIDiffableDataSourceSectionControllerHandlers : NSObject <NSCopying> {

	/*^block*/id _shouldExpandItemHandler;
	/*^block*/id _willExpandItemHandler;
	/*^block*/id _shouldCollapseItemHandler;
	/*^block*/id _willCollapseItemHandler;
	/*^block*/id _childSnapshotForExpandingParentHandler;

}

@property (nonatomic,copy) id shouldExpandItemHandler;                             //@synthesize shouldExpandItemHandler=_shouldExpandItemHandler - In the implementation block
@property (nonatomic,copy) id willExpandItemHandler;                               //@synthesize willExpandItemHandler=_willExpandItemHandler - In the implementation block
@property (nonatomic,copy) id shouldCollapseItemHandler;                           //@synthesize shouldCollapseItemHandler=_shouldCollapseItemHandler - In the implementation block
@property (nonatomic,copy) id willCollapseItemHandler;                             //@synthesize willCollapseItemHandler=_willCollapseItemHandler - In the implementation block
@property (nonatomic,copy) id childSnapshotForExpandingParentHandler;              //@synthesize childSnapshotForExpandingParentHandler=_childSnapshotForExpandingParentHandler - In the implementation block
-(id)shouldExpandItemHandler;
-(id)willExpandItemHandler;
-(id)shouldCollapseItemHandler;
-(id)willCollapseItemHandler;
-(void)setWillExpandItemHandler:(id)arg1 ;
-(id)childSnapshotForExpandingParentHandler;
-(void)setShouldExpandItemHandler:(id)arg1 ;
-(void)setChildSnapshotForExpandingParentHandler:(id)arg1 ;
-(void)setShouldCollapseItemHandler:(id)arg1 ;
-(void)setWillCollapseItemHandler:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

