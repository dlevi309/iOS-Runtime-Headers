/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTStoreBackendMigrator.h>

@protocol AVTStoreBackendMigrator <NSObject>
@required
-(BOOL)migrateContentFromSource:(id)arg1 toDestination:(id)arg2 error:(id*)arg3;

@end


@protocol AVTUILogger;
@class AVTCoreEnvironment, NSString;

@interface AVTStoreBackendMigrator : NSObject <AVTStoreBackendMigrator> {

	id<AVTUILogger> _logger;
	AVTCoreEnvironment* _environment;

}

@property (nonatomic,readonly) id<AVTUILogger> logger;                        //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) AVTCoreEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEnvironment:(id)arg1 ;
-(id<AVTUILogger>)logger;
-(AVTCoreEnvironment *)environment;
-(id)updatedRecordsForMigratingRecords:(id)arg1 source:(id)arg2 destinationBackend:(id)arg3 error:(id*)arg4 ;
-(BOOL)migrateContentFromSource:(id)arg1 toDestination:(id)arg2 error:(id*)arg3 ;
@end

