/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)blendMode;
-(void)setBlendMode:(unsigned long long)arg1 ;
-(PKInkParticleDescriptor *)particleDescriptor;
-(void)setParticleDescriptor:(PKInkParticleDescriptor *)arg1 ;
@end

