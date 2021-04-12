/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-()direction;
-(float)strength;
-()position;
-(shared_ptr<PKCField>*)_field;
-(id)region;
-(float)falloff;
-(void)setStrength:(float)arg1 ;
-(void)setRegion:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setRotation:(float)arg1 ;
-(float)minimumRadius;
-(id)init;
-(void)setDirection:;
-(float)rotation;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isActive;
-()scale;
-(BOOL)override;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(void)setRepresentedObject:(id<NSObject>)arg1 ;
-(void)setMinimumRadius:(float)arg1 ;
-(void)setOverride:(BOOL)arg1 ;
-(void)setScale:;
-(void)setPosition:;
-(void)setFalloff:(float)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isOverride;
-(void)setIsOverride:(BOOL)arg1 ;
-(void)dealloc;
-(id<NSObject>)representedObject;
-(void)set_field:(shared_ptr<PKCField>*)arg1 ;
@end

