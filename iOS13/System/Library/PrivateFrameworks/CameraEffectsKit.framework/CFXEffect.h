/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, JTEffect;

@interface CFXEffect : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _localizedTitle;
	JTEffect* _jtEffect;

}

@property (nonatomic,readonly) BOOL isNone; 
@property (nonatomic,retain) JTEffect * jtEffect;                           //@synthesize jtEffect=_jtEffect - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
+(void)initEffectRegistry;
+(void)preWarmShaderCache;
+(id)effectWithIdentifier:(id)arg1 forEffectType:(id)arg2 ;
+(id)effectWithJTEffect:(id)arg1 ;
+(id)effectIdentifiersForEffectType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)localizedTitle;
-(BOOL)isNone;
-(JTEffect *)jtEffect;
-(id)initWithJTEffect:(id)arg1 ;
-(void)setJtEffect:(JTEffect *)arg1 ;
@end

