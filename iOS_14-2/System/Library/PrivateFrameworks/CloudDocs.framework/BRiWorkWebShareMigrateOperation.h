/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class NSURL, NSOperationQueue;

@interface BRiWorkWebShareMigrateOperation : BROperation {

	NSURL* _url;
	NSOperationQueue* _operationQueue;
	/*^block*/id _shareMigrationCompletionBlock;

}

@property (nonatomic,retain) NSURL * url;                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (copy) id shareMigrationCompletionBlock;                           //@synthesize shareMigrationCompletionBlock=_shareMigrationCompletionBlock - In the implementation block
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)_startSharingReadWrite:(BOOL)arg1 ;
-(void)_migrateShare;
-(void)_copyShare;
-(id)shareMigrationCompletionBlock;
-(void)setShareMigrationCompletionBlock:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(void)main;
-(void)setUrl:(NSURL *)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

