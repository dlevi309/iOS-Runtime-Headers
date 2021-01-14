/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@class NSURL, NSArray;

@interface OSLogEventStore : NSObject {

	NSURL* _archiveURL;
	NSArray* _relativeFilePaths;
	/*^block*/id _progressHandler;
	/*^block*/id _upgradeHandler;

}

@property (nonatomic,retain) NSURL * _archiveURL;                       //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,retain) NSArray * _relativeFilePaths;              //@synthesize relativeFilePaths=_relativeFilePaths - In the implementation block
@property (nonatomic,copy) id _progressHandler;                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id _upgradeHandler;                          //@synthesize upgradeHandler=_upgradeHandler - In the implementation block
+(id)localStore;
+(id)storeWithArchiveURL:(id)arg1 ;
+(id)storeWithFileURL:(id)arg1 ;
+(id)storeWithArchiveURL:(id)arg1 relativePaths:(id)arg2 ;
-(NSArray *)_relativeFilePaths;
-(id)_upgradeHandler;
-(id)initWithArchiveURL:(id)arg1 ;
-(id)initWithArchiveURL:(id)arg1 relativePaths:(id)arg2 ;
-(void)setUpgradeConfirmationHandler:(/*^block*/id)arg1 ;
-(void)set_archiveURL:(NSURL *)arg1 ;
-(void)set_relativeFilePaths:(NSArray *)arg1 ;
-(void)set_progressHandler:(id)arg1 ;
-(void)set_upgradeHandler:(id)arg1 ;
-(void)setProgressHandler:(/*^block*/id)arg1 ;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_progressHandler;
-(NSURL *)_archiveURL;
@end

