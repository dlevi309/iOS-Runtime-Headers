/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface _UIFocusMovementInfo : NSObject <NSCopying, BSXPCCoding> {

	BOOL _looping;
	BOOL _shouldLoadScrollableContainer;
	BOOL _isInitialMovement;
	BOOL _isVelocityBased;
	_UIFocusMovementInfo* _primaryMovementInfo;
	_UIFocusMovementInfo* _secondaryMovementInfo;
	unsigned long long _heading;
	unsigned long long _secondaryHeading;
	unsigned long long _linearHeading;
	CGVector _velocity;
	CGRect _fallbackMovementOriginatingFrame;

}

@property (assign,setter=_setHeading:,nonatomic) unsigned long long heading;                                                                                             //@synthesize heading=_heading - In the implementation block
@property (assign,setter=_setSecondaryHeading:,getter=_secondaryHeading,nonatomic) unsigned long long secondaryHeading;                                                  //@synthesize secondaryHeading=_secondaryHeading - In the implementation block
@property (assign,setter=_setLooping:,getter=_isLooping,nonatomic) BOOL looping;                                                                                         //@synthesize looping=_looping - In the implementation block
@property (assign,setter=_setLinearHeading:,getter=_linearHeading,nonatomic) unsigned long long linearHeading;                                                           //@synthesize linearHeading=_linearHeading - In the implementation block
@property (assign,setter=_setShouldLoadScrollableContainer:,getter=_shouldLoadScrollableContainer,nonatomic) BOOL shouldLoadScrollableContainer;                         //@synthesize shouldLoadScrollableContainer=_shouldLoadScrollableContainer - In the implementation block
@property (assign,setter=_setVelocity:,getter=_velocity,nonatomic) CGVector velocity;                                                                                    //@synthesize velocity=_velocity - In the implementation block
@property (assign,setter=_setIsInitialMovement:,getter=_isInitialMovement,nonatomic) BOOL isInitialMovement;                                                             //@synthesize isInitialMovement=_isInitialMovement - In the implementation block
@property (assign,setter=_setIsVelocityBased:,getter=_isVelocityBased,nonatomic) BOOL isVelocityBased;                                                                   //@synthesize isVelocityBased=_isVelocityBased - In the implementation block
@property (assign,setter=_setFallbackMovementOriginatingFrame:,getter=_fallbackMovementOriginatingFrame,nonatomic) CGRect fallbackMovementOriginatingFrame;              //@synthesize fallbackMovementOriginatingFrame=_fallbackMovementOriginatingFrame - In the implementation block
@property (nonatomic,readonly) _UIFocusMovementInfo * primaryMovementInfo;                                                                                               //@synthesize primaryMovementInfo=_primaryMovementInfo - In the implementation block
@property (nonatomic,readonly) _UIFocusMovementInfo * secondaryMovementInfo;                                                                                             //@synthesize secondaryMovementInfo=_secondaryMovementInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_movementWithHeading:(unsigned long long)arg1 linearHeading:(unsigned long long)arg2 shouldLoadScrollableContainer:(BOOL)arg3 isInitial:(BOOL)arg4 looping:(BOOL)arg5 ;
+(id)_movementWithHeading:(unsigned long long)arg1 linearHeading:(unsigned long long)arg2 shouldLoadScrollableContainer:(BOOL)arg3 isInitial:(BOOL)arg4 ;
+(id)_movementWithHeading:(unsigned long long)arg1 isInitial:(BOOL)arg2 fallbackMovementOriginatingFrame:(CGRect)arg3 ;
+(id)_movementWithHeading:(unsigned long long)arg1 secondaryHeading:(unsigned long long)arg2 velocity:(CGVector)arg3 isInitial:(BOOL)arg4 ;
+(id)_movementWithHeading:(unsigned long long)arg1 isInitial:(BOOL)arg2 ;
+(id)_movementWithVelocity:(CGVector)arg1 isInitial:(BOOL)arg2 ;
+(id)_movementWithHeading:(unsigned long long)arg1 velocity:(CGVector)arg2 isInitial:(BOOL)arg3 ;
+(id)_movementWithHeading:(unsigned long long)arg1 linearHeading:(unsigned long long)arg2 isInitial:(BOOL)arg3 ;
+(id)_movementWithLinearHeading:(unsigned long long)arg1 isInitial:(BOOL)arg2 looping:(BOOL)arg3 ;
-(unsigned long long)heading;
-(void)_setHeading:(unsigned long long)arg1 ;
-(CGVector)_velocity;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isLooping;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)_setLooping:(BOOL)arg1 ;
-(void)_setIsInitialMovement:(BOOL)arg1 ;
-(void)_setIsVelocityBased:(BOOL)arg1 ;
-(void)_setFallbackMovementOriginatingFrame:(CGRect)arg1 ;
-(unsigned long long)_secondaryHeading;
-(void)_setSecondaryHeading:(unsigned long long)arg1 ;
-(void)_setLinearHeading:(unsigned long long)arg1 ;
-(unsigned long long)_linearHeading;
-(void)_setShouldLoadScrollableContainer:(BOOL)arg1 ;
-(BOOL)_isInitialMovement;
-(BOOL)_isVelocityBased;
-(CGRect)_fallbackMovementOriginatingFrame;
-(BOOL)_isLinearMovement;
-(_UIFocusMovementInfo *)primaryMovementInfo;
-(_UIFocusMovementInfo *)secondaryMovementInfo;
-(BOOL)_shouldLoadScrollableContainer;
-(void)_setVelocity:(CGVector)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

