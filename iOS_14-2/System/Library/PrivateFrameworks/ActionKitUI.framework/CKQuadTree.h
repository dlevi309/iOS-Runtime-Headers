/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/


@class CKQuadTreeNode;

@interface CKQuadTree : NSObject {

	CKQuadTreeNode* _rootNode;

}

@property (nonatomic,readonly) CKQuadTreeNode * rootNode;              //@synthesize rootNode=_rootNode - In the implementation block
-(id)initWithPoints:(id)arg1 ;
-(id)init;
-(CKQuadTreeNode *)rootNode;
-(void)visit:(/*^block*/id)arg1 ;
@end

