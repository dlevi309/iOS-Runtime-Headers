/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CSSearchQuery, FPQueryEnumerationSettings, NSString;

@interface FPSpotlightQueryDescriptor : NSObject <NSCopying> {

	CSSearchQuery* _searchQuery;
	FPQueryEnumerationSettings* _settings;

}

@property (nonatomic,readonly) FPQueryEnumerationSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSString * name; 
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(id)queryStringForMountPoint:(id)arg1 ;
-(NSString *)name;
-(BOOL)keepCollectorsAlive;
-(BOOL)supportsQueryingAllMountPoints;
-(unsigned long long)desiredCount;
-(void)augmentQueryContext:(id)arg1 ;
-(BOOL)isEqualToItemQueryDescriptor:(id)arg1 ;
-(FPQueryEnumerationSettings *)settings;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

