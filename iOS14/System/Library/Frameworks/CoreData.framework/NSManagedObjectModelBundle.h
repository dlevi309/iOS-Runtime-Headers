/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSBundle, NSDictionary;

@interface NSManagedObjectModelBundle : NSObject {

	NSBundle* _bundle;
	NSDictionary* _versionInfoDictionary;

}
-(id)bundle;
-(id)initWithPath:(id)arg1 ;
-(id)urlForModelVersionWithName:(id)arg1 ;
-(id)_modelForVersionHashes:(id)arg1 inStyle:(unsigned long long)arg2 ;
-(id)versionInfoDictionary;
-(id)modelVersions;
-(id)currentVersion;
-(id)currentVersionURL;
-(id)optimizedVersionURL;
-(id)_modelForVersionHashes:(id)arg1 ;
-(id)versionHashInfo;
-(void)dealloc;
@end

