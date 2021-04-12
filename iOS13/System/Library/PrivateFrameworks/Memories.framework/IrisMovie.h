/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/VideoMovie.h>

@interface IrisMovie : VideoMovie {

	SCD_Struct_PM5 _cachedPreciseAssetStart;

}

@property (assign,nonatomic) SCD_Struct_PM5 cachedPreciseAssetStart;              //@synthesize cachedPreciseAssetStart=_cachedPreciseAssetStart - In the implementation block
@property (nonatomic,readonly) BOOL front; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)duration;
-(SCD_Struct_PM5)startTime;
-(void)cacheVideoTrackInformationOfAsset:(id)arg1 ;
-(SCD_Struct_PM5)cachedPreciseAssetStart;
-(void)setCachedPreciseAssetStart:(SCD_Struct_PM5)arg1 ;
-(BOOL)front;
-(id)initWithIdentifierURL:(id)arg1 asset:(id)arg2 front:(BOOL)arg3 ;
@end

