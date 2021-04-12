/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
@class NSMutableArray, QLCacheFileIdentifier, QLThumbnailVersion;

@interface QLCacheIndexFileRequest : NSObject {

	CFArrayRef _sizes;
	NSMutableArray* _minimumSizes;
	NSMutableArray* _badgeTypes;
	NSMutableArray* _externalGeneratorDataHashs;
	CFArrayRef _lowQualities;
	BOOL _atLeastOneLowQuality;
	CFArrayRef _iconModes;
	NSMutableArray* _iconVariants;
	NSMutableArray* _interpolationQualities;
	QLCacheFileIdentifier* _fileIdentifier;
	QLThumbnailVersion* _version;
	unsigned long long _cacheId;

}

@property (readonly) QLCacheFileIdentifier * fileIdentifier;              //@synthesize fileIdentifier=_fileIdentifier - In the implementation block
@property (readonly) QLThumbnailVersion * version;                        //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long cacheId;                          //@synthesize cacheId=_cacheId - In the implementation block
-(QLCacheFileIdentifier *)fileIdentifier;
-(unsigned long long)cacheId;
-(QLThumbnailVersion *)version;
-(void)dealloc;
-(BOOL)allSizes;
-(id)initWithFileIdentifier:(id)arg1 version:(id)arg2 ;
-(unsigned char)iconModeAtIndex:(long long)arg1 ;
-(unsigned char)lowQualityAtIndex:(long long)arg1 ;
-(unsigned long long)badgeTypeAtIndex:(unsigned long long)arg1 ;
-(long long)iconVariantAtIndex:(unsigned long long)arg1 ;
-(int)interpolationQualityAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)externalGeneratorDataHashAtIndex:(unsigned long long)arg1 ;
-(id)initWithFileIdentifier:(id)arg1 ;
-(id)initWithVersionedFileIdentifier:(id)arg1 ;
-(void)appendSize:(float)arg1 minimumSize:(float)arg2 withIconMode:(unsigned char)arg3 lowQuality:(BOOL)arg4 badgeType:(unsigned long long)arg5 iconVariant:(long long)arg6 interpolationQuality:(int)arg7 externalGeneratorDataHash:(unsigned long long)arg8 ;
-(float)minimumSizeAtIndex:(unsigned long long)arg1 ;
-(float)sizeAtIndex:(long long)arg1 ;
-(BOOL)hasAtLeastOneLowQuality;
-(long long)sizeAndIconModeCount;
-(void)_setCacheId:(unsigned long long)arg1 ;
@end

