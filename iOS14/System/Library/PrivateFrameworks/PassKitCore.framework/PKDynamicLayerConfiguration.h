/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKDynamicLayerEmitterConfiguration, PKDynamicLayerTransactionEffectConfiguration;

@interface PKDynamicLayerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supported;
	BOOL _parallaxEnabled;
	unsigned long long _version;
	PKDynamicLayerEmitterConfiguration* _backgroundParallaxEmitter;
	PKDynamicLayerEmitterConfiguration* _neutralEmitter;
	PKDynamicLayerEmitterConfiguration* _foregroundParallaxEmitter;
	PKDynamicLayerEmitterConfiguration* _staticOverlayEmitter;
	PKDynamicLayerTransactionEffectConfiguration* _transactionEffect;

}

@property (assign,getter=isSupported,nonatomic) BOOL supported;                                             //@synthesize supported=_supported - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL parallaxEnabled;                                                          //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (nonatomic,retain) PKDynamicLayerEmitterConfiguration * backgroundParallaxEmitter;                //@synthesize backgroundParallaxEmitter=_backgroundParallaxEmitter - In the implementation block
@property (nonatomic,retain) PKDynamicLayerEmitterConfiguration * neutralEmitter;                           //@synthesize neutralEmitter=_neutralEmitter - In the implementation block
@property (nonatomic,retain) PKDynamicLayerEmitterConfiguration * foregroundParallaxEmitter;                //@synthesize foregroundParallaxEmitter=_foregroundParallaxEmitter - In the implementation block
@property (nonatomic,retain) PKDynamicLayerEmitterConfiguration * staticOverlayEmitter;                     //@synthesize staticOverlayEmitter=_staticOverlayEmitter - In the implementation block
@property (nonatomic,retain) PKDynamicLayerTransactionEffectConfiguration * transactionEffect;              //@synthesize transactionEffect=_transactionEffect - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isSupported;
-(PKDynamicLayerEmitterConfiguration *)neutralEmitter;
-(void)setNeutralEmitter:(PKDynamicLayerEmitterConfiguration *)arg1 ;
-(void)setBackgroundParallaxEmitter:(PKDynamicLayerEmitterConfiguration *)arg1 ;
-(void)setForegroundParallaxEmitter:(PKDynamicLayerEmitterConfiguration *)arg1 ;
-(void)setStaticOverlayEmitter:(PKDynamicLayerEmitterConfiguration *)arg1 ;
-(void)setTransactionEffect:(PKDynamicLayerTransactionEffectConfiguration *)arg1 ;
-(PKDynamicLayerEmitterConfiguration *)backgroundParallaxEmitter;
-(PKDynamicLayerEmitterConfiguration *)foregroundParallaxEmitter;
-(PKDynamicLayerEmitterConfiguration *)staticOverlayEmitter;
-(PKDynamicLayerTransactionEffectConfiguration *)transactionEffect;
-(BOOL)parallaxEnabled;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSupported:(BOOL)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

