/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/

#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface QLCachedThumbnailDescriptor : NSObject <NSCopying> {

	BOOL _iconMode;
	float _size;
	int _interpolationQuality;
	long long _iconVariant;
	unsigned long long _badgeType;
	unsigned long long _externalGeneratorDataHash;

}

@property (readonly) float size;                                              //@synthesize size=_size - In the implementation block
@property (readonly) BOOL iconMode;                                           //@synthesize iconMode=_iconMode - In the implementation block
@property (readonly) unsigned long long badgeType;                            //@synthesize badgeType=_badgeType - In the implementation block
@property (assign) long long iconVariant;                                     //@synthesize iconVariant=_iconVariant - In the implementation block
@property (assign) int interpolationQuality;                                  //@synthesize interpolationQuality=_interpolationQuality - In the implementation block
@property (assign) unsigned long long externalGeneratorDataHash;              //@synthesize externalGeneratorDataHash=_externalGeneratorDataHash - In the implementation block
-(float)size;
-(unsigned long long)badgeType;
-(unsigned long long)hash;
-(void)setIconVariant:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)iconMode;
-(long long)iconVariant;
-(int)interpolationQuality;
-(unsigned long long)externalGeneratorDataHash;
-(void)setInterpolationQuality:(int)arg1 ;
-(void)setExternalGeneratorDataHash:(unsigned long long)arg1 ;
-(id)initWithSize:(float)arg1 iconMode:(BOOL)arg2 badgeType:(unsigned long long)arg3 externalGeneratorDataHash:(unsigned long long)arg4 ;
-(id)initWithThumbnailRequest:(id)arg1 ;
-(id)initWithSize:(float)arg1 iconMode:(BOOL)arg2 badgeType:(unsigned long long)arg3 ;
@end

