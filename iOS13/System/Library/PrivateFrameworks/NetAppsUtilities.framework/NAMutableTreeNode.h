/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <NetAppsUtilities/NATreeNode.h>

@class NSSet;

@interface NAMutableTreeNode : NATreeNode

@property (nonatomic,retain) id representedObject; 
@property (nonatomic,copy) NSSet * childNodes; 
-(void)addChild:(id)arg1 ;
-(void)removeChild:(id)arg1 ;
-(void)addChildren:(id)arg1 ;
-(void)setChildNodes:(NSSet *)arg1 ;
-(void)removeChildrenPassingTest:(/*^block*/id)arg1 ;
@end
