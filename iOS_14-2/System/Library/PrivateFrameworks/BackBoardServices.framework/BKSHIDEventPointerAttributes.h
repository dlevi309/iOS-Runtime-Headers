/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDigitizerAttributes.h>

@class NSArray;

@interface BKSHIDEventPointerAttributes : BKSHIDEventDigitizerAttributes {

	unsigned char _pointerEdgeMask;
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
@property (assign,nonatomic) unsigned char pointerEdgeMask;                      //@synthesize pointerEdgeMask=_pointerEdgeMask - In the implementation block
+(id)protobufSchema;
-(void)setActiveModifiers:(long long)arg1 ;
-(void)setFingerDownCount:(long long)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(unsigned short)pointerState;
-(double)acceleratedRelativePositionY;
-(void)setPointerState:(unsigned short)arg1 ;
-(double)unacceleratedRelativePositionX;
-(double)unacceleratedRelativePositionY;
-(void)setUnacceleratedRelativePositionX:(double)arg1 ;
-(unsigned char)pointerEdgeMask;
-(void)setPointerEdgeMask:(unsigned char)arg1 ;
-(long long)fingerDownCount;
-(void)setUnacceleratedRelativePositionY:(double)arg1 ;
-(double)acceleratedRelativePositionX;
-(void)setHitTestContexts:(NSArray *)arg1 ;
-(long long)activeModifiers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAcceleratedRelativePositionX:(double)arg1 ;
-(void)setAcceleratedRelativePositionY:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)hitTestContexts;
@end

