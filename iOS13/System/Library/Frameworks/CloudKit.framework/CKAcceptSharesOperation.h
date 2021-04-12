/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKAcceptSharesOperation : CKOperation {

	/*^block*/id _perShareCompletionBlock;
	/*^block*/id _acceptSharesCompletionBlock;
	NSArray* _shareMetadatas;
	NSMutableDictionary* _errorsByShareURL;
	NSMutableDictionary* _shareMetadatasByShareURL;

}

@property (nonatomic,retain) NSMutableDictionary * errorsByShareURL;                      //@synthesize errorsByShareURL=_errorsByShareURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareMetadatasByShareURL;              //@synthesize shareMetadatasByShareURL=_shareMetadatasByShareURL - In the implementation block
@property (nonatomic,copy) NSArray * shareMetadatas;                                      //@synthesize shareMetadatas=_shareMetadatas - In the implementation block
@property (nonatomic,copy) id perShareCompletionBlock;                                    //@synthesize perShareCompletionBlock=_perShareCompletionBlock - In the implementation block
@property (nonatomic,copy) id acceptSharesCompletionBlock;                                //@synthesize acceptSharesCompletionBlock=_acceptSharesCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)initWithShareMetadatas:(id)arg1 ;
-(void)setPerShareCompletionBlock:(id)arg1 ;
-(void)setAcceptSharesCompletionBlock:(id)arg1 ;
-(void)setShareMetadatas:(NSArray *)arg1 ;
-(NSArray *)shareMetadatas;
-(id)perShareCompletionBlock;
-(id)acceptSharesCompletionBlock;
-(NSMutableDictionary *)shareMetadatasByShareURL;
-(NSMutableDictionary *)errorsByShareURL;
-(void)setErrorsByShareURL:(NSMutableDictionary *)arg1 ;
-(void)setShareMetadatasByShareURL:(NSMutableDictionary *)arg1 ;
@end

