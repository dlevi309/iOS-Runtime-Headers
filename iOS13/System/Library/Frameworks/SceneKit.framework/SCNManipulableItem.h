/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNNode;

@interface SCNManipulableItem : NSObject {

	double _screenSize;
	SCNNode* node;
	id component;
	unsigned long long elementIndex;

}

@property (nonatomic,retain) SCNNode * node; 
@property (nonatomic,retain) id component; 
@property (assign,nonatomic) unsigned long long elementIndex; 
@property (assign,nonatomic) SCNMatrix4 transform; 
@property (assign,nonatomic) SCNMatrix4 worldTransform; 
@property (nonatomic,readonly) SCNVector3 elementPosition; 
+(void)removeItemsFromScene:(id)arg1 ;
+(void)addItems:(id)arg1 toScene:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCNMatrix4)transform;
-(SCNVector3)scale;
-(SCNNode *)node;
-(void)setTransform:(SCNMatrix4)arg1 ;
-(void)setNode:(SCNNode *)arg1 ;
-(void)setPosition:(SCNVector3)arg1 ;
-(void)setScreenSize:(double)arg1 ;
-(id)component;
-(void)setComponent:(id)arg1 ;
-(double)screenSize;
-(id)parentItem;
-(SCNVector3)elementPosition;
-(SCNMatrix4)worldTransform;
-(void)setWorldTransform:(SCNMatrix4)arg1 ;
-(void)validateClone;
-(id)cloneForManipulators;
-(unsigned long long)elementIndex;
-(BOOL)isNodeManipulator;
-(void)setElementIndex:(unsigned long long)arg1 ;
@end

