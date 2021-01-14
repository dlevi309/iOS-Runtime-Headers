/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSString, PKInkParticleDescriptor;

@interface PKInkRenderingDescriptor : NSObject {

	NSString* _identifier;
	unsigned long long _version;
	unsigned long long _type;
	unsigned long long _blendMode;
	PKInkParticleDescriptor* _particleDescriptor;

}

@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long blendMode;                              //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,retain) PKInkParticleDescriptor * particleDescriptor;              //@synthesize particleDescriptor=_particleDescriptor - In the implementation block
-(unsigned long long)blendMode;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setBlendMode:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(PKInkParticleDescriptor *)particleDescriptor;
-(void)setParticleDescriptor:(PKInkParticleDescriptor *)arg1 ;
@end

