/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SCNNode *)node;
-(void)setScreenSize:(double)arg1 ;
-(id)parentItem;
-(SCNVector3)scale;
-(void)setNode:(SCNNode *)arg1 ;
-(double)screenSize;
-(void)setTransform:(SCNMatrix4)arg1 ;
-(SCNMatrix4)transform;
-(id)component;
-(void)setComponent:(id)arg1 ;
-(void)setPosition:(SCNVector3)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(SCNVector3)elementPosition;
-(SCNMatrix4)worldTransform;
-(void)setWorldTransform:(SCNMatrix4)arg1 ;
-(void)validateClone;
-(id)cloneForManipulators;
-(unsigned long long)elementIndex;
-(BOOL)isNodeManipulator;
-(void)setElementIndex:(unsigned long long)arg1 ;
@end

