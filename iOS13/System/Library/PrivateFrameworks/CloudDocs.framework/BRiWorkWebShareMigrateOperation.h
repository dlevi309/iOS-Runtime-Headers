/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithURL:(id)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)main;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)_startSharingReadWrite:(BOOL)arg1 ;
-(void)_migrateShare;
-(void)_copyShare;
-(id)shareMigrationCompletionBlock;
-(void)setShareMigrationCompletionBlock:(id)arg1 ;
@end

