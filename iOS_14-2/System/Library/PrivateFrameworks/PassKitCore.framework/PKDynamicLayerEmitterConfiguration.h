/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CAEmitterLayer;

@interface PKDynamicLayerEmitterConfiguration : NSObject <NSSecureCoding, NSCopying> {

	CAEmitterLayer* _emitterLayer;
	unsigned long long _style;
	unsigned long long _density;
	unsigned long long _physicsEffect;

}

@property (assign,nonatomic) unsigned long long style;                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long density;                    //@synthesize density=_density - In the implementation block
@property (assign,nonatomic) unsigned long long physicsEffect;              //@synthesize physicsEffect=_physicsEffect - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)density;
-(float)_emitterBirthrate;
-(float)_emitterScaleWithPixelSize:(CGSize)arg1 ;
-(void)setPhysicsEffect:(unsigned long long)arg1 ;
-(void)configureEmitterLayer:(id)arg1 withImage:(CGImageRef)arg2 ;
-(void)configureEmitterLayer:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)setDensity:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)physicsEffect;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)style;
@end

