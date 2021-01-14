/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MSUDataAccessor.framework/MSUDataAccessor
*/


#import <MSUDataAccessor/MSUDataAccessor-Structs.h>
@interface MSUDataAccessor : NSObject
+(void)buildErrorForRef:(id*)arg1 code:(long long)arg2 description:(id)arg3 ;
+(id)ioreg:(id)arg1 property:(id)arg2 error:(id*)arg3 ;
+(id)sharedDataAccessor;
+(id)bootUUIDWithError:(id*)arg1 ;
+(id)errorNameForCode:(long long)arg1 ;
-(id)init;
-(id)copyMountPointForVolumeType:(int)arg1 error:(id*)arg2 ;
-(id)copyBootManifestHashWithError:(id*)arg1 ;
-(id)personalizedRootWithError:(id*)arg1 ;
-(id)hardwareRootWithError:(id*)arg1 ;
-(id)resolveFilePathForEntry:(const path_table_entry*)arg1 error:(id*)arg2 ;
-(id)copyPathForPersonalizedData:(int)arg1 error:(id*)arg2 ;
-(id)copyPathForPersistentData:(int)arg1 error:(id*)arg2 ;
@end

