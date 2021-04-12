/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLPhotoLibraryPathManager, PFTimedPerfCheck, PLModelMigratorLog;

@interface PLModelMigratorPostProcessor : NSObject {

	PLPhotoLibraryPathManager* _pathManager;
	unsigned char _type;
	unsigned short _tag;
	PFTimedPerfCheck* _lifetimePerfCheck;
	PLModelMigratorLog* _logger;
	BOOL _success;

}

@property (assign,getter=isSuccess,nonatomic) BOOL success;              //@synthesize success=_success - In the implementation block
@property (readonly) PLModelMigratorLog * logger;                        //@synthesize logger=_logger - In the implementation block
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)isSuccess;
-(id)init;
-(id)initWithPathManager:(id)arg1 postMigrationType:(unsigned char)arg2 ;
-(void)_initialLog;
-(id)_generateActionTagHashBase;
-(id)_generateActionTagHash;
-(PLModelMigratorLog *)logger;
-(void)dealloc;
@end

