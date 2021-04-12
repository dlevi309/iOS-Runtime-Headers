/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <Trial/Trial-Structs.h>
#import <libobjc.A.dylib/TRIPaths.h>

@class TRIAppContainer;

@interface TRIStandardPaths : NSObject <TRIPaths> {

	unsigned _schemaVersion;
	TRIAppContainer* _container;
	BOOL _isClient;
	atomic_flag _loggedRootDir;

}
+(unsigned)resetStorageRequestSchemaVersion;
+(unsigned)legacySchemaVersion;
+(unsigned)currentSchemaVersion;
+(id)schemaVersionFile;
+(id)sharedSystemPaths;
+(id)resolveHardCodedPath:(id)arg1 ;
-(BOOL)validateWithError:(id*)arg1 ;
-(id)experimentsDir;
-(id)init;
-(id)systemDataFile;
-(id)_trialSystemRootDirWithError:(id*)arg1 ;
-(id)_trialSystemRootDir;
-(id)treatmentsDir;
-(id)logDir;
-(id)containerDir;
-(id)_versionSpecificStorageDir;
-(id)assetStore;
-(id)namespaceDescriptorsPathForLayer:(unsigned long long)arg1 ;
-(id)_realHomeDirectory;
-(id)initWithSchemaVersion:(unsigned)arg1 container:(id)arg2 asClientProcess:(BOOL)arg3 ;
-(id)subjectDataFile;
-(id)namespaceDescriptorsExperimentDir;
-(id)namespaceDescriptorsDefaultDir;
-(id)pathsForContainer:(id)arg1 asClientProcess:(BOOL)arg2 ;
-(id)namespaceDescriptorsDir;
-(id)deviceIdentifierFile;
-(id)trialRootDir;
-(id)container;
-(id)_pathErrorWithDescription:(id)arg1 ;
-(id)namespaceDescriptorsRolloutDir;
-(id)trialRootDirWithError:(id*)arg1 ;
-(id)_versionSpecificSystemStorageDir;
-(id)initWithCurrentSchemaVersion;
-(id)databaseDir;
@end

