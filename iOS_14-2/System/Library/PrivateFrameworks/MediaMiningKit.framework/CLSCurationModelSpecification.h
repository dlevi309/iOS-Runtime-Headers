/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLSCurationModelSpecification : NSObject <NSCopying> {

	unsigned long long _curationModelVersion;
	unsigned long long _sceneAnalysisVersion;
	unsigned long long _mediaAnalysisVersion;
	unsigned long long _faceAnalysisVersion;

}

@property (readonly) unsigned long long curationModelVersion;              //@synthesize curationModelVersion=_curationModelVersion - In the implementation block
@property (readonly) unsigned long long sceneAnalysisVersion;              //@synthesize sceneAnalysisVersion=_sceneAnalysisVersion - In the implementation block
@property (readonly) unsigned long long mediaAnalysisVersion;              //@synthesize mediaAnalysisVersion=_mediaAnalysisVersion - In the implementation block
@property (readonly) unsigned long long faceAnalysisVersion;               //@synthesize faceAnalysisVersion=_faceAnalysisVersion - In the implementation block
-(unsigned long long)mediaAnalysisVersion;
-(id)initWithAsset:(id)arg1 curationModelVersion:(unsigned long long)arg2 ;
-(id)initWithItemInfo:(id)arg1 options:(id)arg2 ;
-(unsigned long long)hash;
-(unsigned long long)curationModelVersion;
-(unsigned long long)sceneAnalysisVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)faceAnalysisVersion;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCurationModelVersion:(unsigned long long)arg1 sceneAnalysisVersion:(unsigned long long)arg2 mediaAnalysisVersion:(unsigned long long)arg3 faceAnalysisVersion:(unsigned long long)arg4 ;
@end

