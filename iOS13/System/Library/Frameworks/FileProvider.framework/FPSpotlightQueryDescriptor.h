/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CSSearchQuery, FPQueryEnumerationSettings;

@interface FPSpotlightQueryDescriptor : NSObject <NSCopying> {

	CSSearchQuery* _searchQuery;
	FPQueryEnumerationSettings* _settings;

}

@property (nonatomic,readonly) FPQueryEnumerationSettings * settings;              //@synthesize settings=_settings - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(FPQueryEnumerationSettings *)settings;
-(id)queryStringForMountPoint:(id)arg1 ;
-(BOOL)keepCollectorsAlive;
-(BOOL)supportsQueryingAllMountPoints;
-(unsigned long long)desiredCount;
-(void)augmentQueryContext:(id)arg1 ;
-(BOOL)isEqualToItemQueryDescriptor:(id)arg1 ;
@end

