/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSArray, AVTMemoji, AVTMaterial, NSString;

@interface AVTComponent : NSObject {

	long long _type;
	NSArray* _assets;
	BOOL _mirrored;
	AVTMemoji* _memoji;
	AVTMaterial* _materials[3];
	NSString* _morphVariant;
	NSString* _imageVariant;
	NSString* _materialVariant;
	double _morphVariantIntensity;
	double _textureAssetPresence;

}

@property (readonly) NSArray * assets;                                    //@synthesize assets=_assets - In the implementation block
@property (readonly) long long type; 
@property (nonatomic,readonly) NSString * morphVariant;                   //@synthesize morphVariant=_morphVariant - In the implementation block
@property (nonatomic,readonly) NSString * imageVariant;                   //@synthesize imageVariant=_imageVariant - In the implementation block
@property (nonatomic,readonly) NSString * materialVariant;                //@synthesize materialVariant=_materialVariant - In the implementation block
@property (nonatomic,readonly) double morphVariantIntensity;              //@synthesize morphVariantIntensity=_morphVariantIntensity - In the implementation block
@property (nonatomic,readonly) double textureAssetPresence;               //@synthesize textureAssetPresence=_textureAssetPresence - In the implementation block
@property (nonatomic,readonly) BOOL mirrored;                             //@synthesize mirrored=_mirrored - In the implementation block
-(NSArray *)assets;
-(id)memoji;
-(BOOL)mirrored;
-(id)description;
-(long long)type;
-(void)setMemoji:(id)arg1 ;
-(NSString *)morphVariant;
-(double)morphVariantIntensity;
-(id)materialAtIndex:(unsigned long long)arg1 ;
-(void)setMaterial:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithType:(long long)arg1 assets:(id)arg2 morphVariant:(id)arg3 imageVariant:(id)arg4 materialVariant:(id)arg5 morphVariantIntensity:(double)arg6 textureAssetPresence:(double)arg7 mirrored:(BOOL)arg8 ;
-(NSString *)imageVariant;
-(NSString *)materialVariant;
-(double)textureAssetPresence;
@end

