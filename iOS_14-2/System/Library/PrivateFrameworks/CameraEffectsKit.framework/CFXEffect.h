/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, JFXEffect;

@interface CFXEffect : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _localizedTitle;
	JFXEffect* _jtEffect;

}

@property (nonatomic,readonly) BOOL isNone; 
@property (nonatomic,retain) JFXEffect * jtEffect;                          //@synthesize jtEffect=_jtEffect - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
+(void)setupFactoryDelegate;
+(void)initEffectRegistry;
+(id)effectIdentifiersForEffectType:(id)arg1 ;
+(void)preWarmShaderCache;
+(id)effectWithIdentifier:(id)arg1 forEffectType:(id)arg2 ;
+(id)effectWithJTEffect:(id)arg1 ;
-(NSString *)localizedTitle;
-(BOOL)isNone;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(JFXEffect *)jtEffect;
-(id)initWithJTEffect:(id)arg1 ;
-(void)setJtEffect:(JFXEffect *)arg1 ;
@end

