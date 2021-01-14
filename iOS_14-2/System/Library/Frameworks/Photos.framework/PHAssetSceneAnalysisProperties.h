/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@class NSDate, NSData;

@interface PHAssetSceneAnalysisProperties : PHAssetPropertySet {

	unsigned long long _sceneAnalysisVersion;
	NSDate* _sceneAnalysisTimestamp;
	NSData* _distanceIdentity;

}

@property (nonatomic,readonly) unsigned long long sceneAnalysisVersion;              //@synthesize sceneAnalysisVersion=_sceneAnalysisVersion - In the implementation block
@property (nonatomic,readonly) NSDate * sceneAnalysisTimestamp;                      //@synthesize sceneAnalysisTimestamp=_sceneAnalysisTimestamp - In the implementation block
@property (nonatomic,readonly) NSData * distanceIdentity;                            //@synthesize distanceIdentity=_distanceIdentity - In the implementation block
+(id)propertySetName;
+(id)propertiesToFetch;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(NSDate *)sceneAnalysisTimestamp;
-(NSData *)distanceIdentity;
-(unsigned long long)sceneAnalysisVersion;
@end

