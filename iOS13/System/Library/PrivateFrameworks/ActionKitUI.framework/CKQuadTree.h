/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/


@class CKQuadTreeNode;

@interface CKQuadTree : NSObject {

	CKQuadTreeNode* _rootNode;

}

@property (nonatomic,readonly) CKQuadTreeNode * rootNode;              //@synthesize rootNode=_rootNode - In the implementation block
-(id)init;
-(CKQuadTreeNode *)rootNode;
-(id)initWithPoints:(id)arg1 ;
-(void)visit:(/*^block*/id)arg1 ;
@end

