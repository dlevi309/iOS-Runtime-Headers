/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/VideoMovie.h>

@interface IrisMovie : VideoMovie {

	SCD_Struct_PM8 _cachedPreciseAssetStart;

}

@property (assign,nonatomic) SCD_Struct_PM8 cachedPreciseAssetStart;              //@synthesize cachedPreciseAssetStart=_cachedPreciseAssetStart - In the implementation block
@property (nonatomic,readonly) BOOL front; 
-(BOOL)front;
-(int)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_PM8)startTime;
-(void)cacheVideoTrackInformationOfAsset:(id)arg1 ;
-(SCD_Struct_PM8)cachedPreciseAssetStart;
-(void)setCachedPreciseAssetStart:(SCD_Struct_PM8)arg1 ;
-(id)initWithIdentifierURL:(id)arg1 asset:(id)arg2 front:(BOOL)arg3 ;
@end

