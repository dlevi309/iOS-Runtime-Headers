/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSDate *)sceneAnalysisTimestamp;
-(unsigned long long)sceneAnalysisVersion;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(NSData *)distanceIdentity;
@end

