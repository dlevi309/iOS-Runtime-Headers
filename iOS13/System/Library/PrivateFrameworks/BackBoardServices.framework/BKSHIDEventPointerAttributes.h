/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDigitizerAttributes.h>

@class NSArray;

@interface BKSHIDEventPointerAttributes : BKSHIDEventDigitizerAttributes {

	unsigned short _pointerState;
	NSArray* _hitTestContexts;
	double _unacceleratedRelativePositionX;
	double _unacceleratedRelativePositionY;
	double _acceleratedRelativePositionX;
	double _acceleratedRelativePositionY;
	long long _activeModifiers;
	long long _fingerDownCount;

}

@property (assign,nonatomic) unsigned short pointerState;                        //@synthesize pointerState=_pointerState - In the implementation block
@property (nonatomic,copy) NSArray * hitTestContexts;                            //@synthesize hitTestContexts=_hitTestContexts - In the implementation block
@property (assign,nonatomic) double unacceleratedRelativePositionX;              //@synthesize unacceleratedRelativePositionX=_unacceleratedRelativePositionX - In the implementation block
@property (assign,nonatomic) double unacceleratedRelativePositionY;              //@synthesize unacceleratedRelativePositionY=_unacceleratedRelativePositionY - In the implementation block
@property (assign,nonatomic) double acceleratedRelativePositionX;                //@synthesize acceleratedRelativePositionX=_acceleratedRelativePositionX - In the implementation block
@property (assign,nonatomic) double acceleratedRelativePositionY;                //@synthesize acceleratedRelativePositionY=_acceleratedRelativePositionY - In the implementation block
@property (assign,nonatomic) long long activeModifiers;                          //@synthesize activeModifiers=_activeModifiers - In the implementation block
@property (assign,nonatomic) long long fingerDownCount;                          //@synthesize fingerDownCount=_fingerDownCount - In the implementation block
+(id)protobufSchema;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned short)pointerState;
-(long long)fingerDownCount;
-(long long)activeModifiers;
-(void)setPointerState:(unsigned short)arg1 ;
-(NSArray *)hitTestContexts;
-(void)setHitTestContexts:(NSArray *)arg1 ;
-(double)unacceleratedRelativePositionX;
-(void)setUnacceleratedRelativePositionX:(double)arg1 ;
-(double)unacceleratedRelativePositionY;
-(void)setUnacceleratedRelativePositionY:(double)arg1 ;
-(double)acceleratedRelativePositionX;
-(void)setAcceleratedRelativePositionX:(double)arg1 ;
-(double)acceleratedRelativePositionY;
-(void)setAcceleratedRelativePositionY:(double)arg1 ;
-(void)setActiveModifiers:(long long)arg1 ;
-(void)setFingerDownCount:(long long)arg1 ;
@end

