/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <NetAppsUtilities/NATreeNode.h>

@class NSSet;

@interface NAMutableTreeNode : NATreeNode

@property (nonatomic,retain) id representedObject; 
@property (nonatomic,copy) NSSet * childNodes; 
-(void)setChildNodes:(NSSet *)arg1 ;
-(void)addChildren:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(void)removeChild:(id)arg1 ;
-(void)removeChildrenPassingTest:(/*^block*/id)arg1 ;
@end

