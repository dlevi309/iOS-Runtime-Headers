/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(AVTCoreEnvironment *)environment;
-(NSURL *)storeLocation;
-(BOOL)migrationNeeded;
-(id)createSourceBackend;
-(BOOL)finalizeMigration:(id*)arg1 ;
-(id)migratedRecordFromRecord:(id)arg1 index:(unsigned long long)arg2 totalCount:(unsigned long long)arg3 ;
-(id)initWithStoreLocation:(id)arg1 environment:(id)arg2 ;
@end

