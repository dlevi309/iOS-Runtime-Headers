/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTStoreBackendMigratableSource.h>

@class NSURL, AVTCoreEnvironment, NSString;

@interface AVTArchiverBasedStoreMigratableSource : NSObject <AVTStoreBackendMigratableSource> {

	NSURL* _storeLocation;
	AVTCoreEnvironment* _environment;

}

@property (nonatomic,readonly) NSURL * storeLocation;                         //@synthesize storeLocation=_storeLocation - In the implementation block
@property (nonatomic,readonly) AVTCoreEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)storeLocation;
-(BOOL)migrationNeeded;
-(AVTCoreEnvironment *)environment;
-(id)initWithStoreLocation:(id)arg1 environment:(id)arg2 ;
-(id)createSourceBackend;
-(BOOL)finalizeMigration:(id*)arg1 ;
-(id)migratedRecordFromRecord:(id)arg1 index:(unsigned long long)arg2 totalCount:(unsigned long long)arg3 ;
@end

