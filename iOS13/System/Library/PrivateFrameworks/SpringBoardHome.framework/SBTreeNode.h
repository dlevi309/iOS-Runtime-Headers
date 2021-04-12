/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

@class NSArray, NSString;


@protocol SBTreeNode <NSObject>
@property (nonatomic,readonly) NSArray * children; 
@property (assign,nonatomic,__weak) id<SBTreeNode> parent; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@required
-(id<SBTreeNode>)parent;
-(void)setParent:(id)arg1;
-(NSString *)uniqueIdentifier;
-(NSArray *)children;
-(void)removeChild:(id)arg1;
-(void)ancestryDidChange;

@end

