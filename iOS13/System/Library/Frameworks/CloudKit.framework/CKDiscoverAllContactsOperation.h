/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@class NSMutableArray;

@interface CKDiscoverAllContactsOperation : CKOperation {

	/*^block*/id _discoverAllContactsCompletionBlock;
	NSMutableArray* _discoveredUserInfos;

}

@property (nonatomic,retain) NSMutableArray * discoveredUserInfos;              //@synthesize discoveredUserInfos=_discoveredUserInfos - In the implementation block
@property (nonatomic,copy) id discoverAllContactsCompletionBlock;               //@synthesize discoverAllContactsCompletionBlock=_discoverAllContactsCompletionBlock - In the implementation block
-(id)init;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)discoverAllContactsCompletionBlock;
-(NSMutableArray *)discoveredUserInfos;
-(void)setDiscoverAllContactsCompletionBlock:(id)arg1 ;
-(Class)operationInfoClass;
-(void)setDiscoveredUserInfos:(NSMutableArray *)arg1 ;
@end

