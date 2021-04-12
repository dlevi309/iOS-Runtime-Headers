/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNManipulableItem.h>

@interface SCNNodeManipulableItem : SCNManipulableItem
+(void)removeItemsFromScene:(id)arg1 ;
+(void)addItems:(id)arg1 toScene:(id)arg2 ;
+(id)nodeManipulatorItemWithNode:(id)arg1 screenSize:(double)arg2 ;
-(id)parentItem;
-(SCNVector3)scale;
-(void)setTransform:(SCNMatrix4)arg1 ;
-(SCNMatrix4)transform;
-(void)setPosition:(SCNVector3)arg1 ;
-(SCNMatrix4)worldTransform;
-(void)setWorldTransform:(SCNMatrix4)arg1 ;
-(void)validateClone;
-(id)cloneForManipulators;
-(BOOL)isNodeManipulator;
@end

