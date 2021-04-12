/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSDictionary;

@interface CKFetchShareMetadataOperation : CKOperation {

	BOOL _shouldFetchRootRecord;
	/*^block*/id _perShareMetadataBlock;
	/*^block*/id _fetchShareMetadataCompletionBlock;
	NSArray* _shareURLs;
	NSArray* _rootRecordDesiredKeys;
	NSMutableDictionary* _errorsByURL;
	NSMutableSet* _packagesToDestroy;
	NSDictionary* _shareInvitationTokensByShareURL;

}

@property (nonatomic,retain) NSMutableDictionary * errorsByURL;                         //@synthesize errorsByURL=_errorsByURL - In the implementation block
@property (nonatomic,retain) NSMutableSet * packagesToDestroy;                          //@synthesize packagesToDestroy=_packagesToDestroy - In the implementation block
@property (nonatomic,copy) NSDictionary * shareInvitationTokensByShareURL;              //@synthesize shareInvitationTokensByShareURL=_shareInvitationTokensByShareURL - In the implementation block
@property (nonatomic,copy) NSArray * shareURLs;                                         //@synthesize shareURLs=_shareURLs - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchRootRecord;                                //@synthesize shouldFetchRootRecord=_shouldFetchRootRecord - In the implementation block
@property (nonatomic,copy) NSArray * rootRecordDesiredKeys;                             //@synthesize rootRecordDesiredKeys=_rootRecordDesiredKeys - In the implementation block
@property (nonatomic,copy) id perShareMetadataBlock;                                    //@synthesize perShareMetadataBlock=_perShareMetadataBlock - In the implementation block
@property (nonatomic,copy) id fetchShareMetadataCompletionBlock;                        //@synthesize fetchShareMetadataCompletionBlock=_fetchShareMetadataCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)initWithShareURLs:(id)arg1 ;
-(void)setPerShareMetadataBlock:(id)arg1 ;
-(void)setFetchShareMetadataCompletionBlock:(id)arg1 ;
-(NSArray *)shareURLs;
-(BOOL)shouldFetchRootRecord;
-(void)setShouldFetchRootRecord:(BOOL)arg1 ;
-(NSArray *)rootRecordDesiredKeys;
-(void)setRootRecordDesiredKeys:(NSArray *)arg1 ;
-(NSDictionary *)shareInvitationTokensByShareURL;
-(void)setShareInvitationTokensByShareURL:(NSDictionary *)arg1 ;
-(void)setShareURLs:(NSArray *)arg1 ;
-(id)perShareMetadataBlock;
-(id)fetchShareMetadataCompletionBlock;
-(NSMutableSet *)packagesToDestroy;
-(BOOL)claimPackagesInRecord:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)errorsByURL;
-(id)initWithShareURLs:(id)arg1 invitationTokensByShareURL:(id)arg2 ;
-(void)setErrorsByURL:(NSMutableDictionary *)arg1 ;
-(void)setPackagesToDestroy:(NSMutableSet *)arg1 ;
@end

