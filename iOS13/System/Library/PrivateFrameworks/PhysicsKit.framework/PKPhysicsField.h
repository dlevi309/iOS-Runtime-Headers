/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
*/


#import <PhysicsKit/PhysicsKit-Structs.h>
@class PKRegion;

@interface PKPhysicsField : NSObject {

	shared_ptr<PKCField>* _field;
	PKRegion* _region;
	 _position;
	float _rotation;
	 _scale;
	BOOL _override;

}

@property (assign,nonatomic) float strength; 
@property (assign,nonatomic) float falloff; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isOverride,nonatomic) BOOL override;                    //@synthesize override=_override - In the implementation block
@property (nonatomic,retain) id region; 
@property (assign,nonatomic)  direction; 
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic)  position; 
@property (assign,nonatomic) float rotation; 
@property (assign,nonatomic)  scale; 
@property (assign,nonatomic) float minimumRadius; 
@property (assign,nonatomic,__weak) id<NSObject> representedObject; 
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-()scale;
-()position;
-(BOOL)isEnabled;
-(id)region;
-()direction;
-(void)setDirection:;
-(void)setScale:;
-(float)falloff;
-(void)setFalloff:(float)arg1 ;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(void)setPosition:;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(id<NSObject>)representedObject;
-(void)setRepresentedObject:(id<NSObject>)arg1 ;
-(shared_ptr<PKCField>*)_field;
-(void)setRegion:(id)arg1 ;
-(void)setStrength:(float)arg1 ;
-(float)strength;
-(void)setMinimumRadius:(float)arg1 ;
-(float)minimumRadius;
-(void)setOverride:(BOOL)arg1 ;
-(BOOL)override;
-(void)set_field:(shared_ptr<PKCField>*)arg1 ;
-(void)setIsOverride:(BOOL)arg1 ;
-(BOOL)isOverride;
@end

