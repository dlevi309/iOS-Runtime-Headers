/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKDiscoverUserInfosOperation : CKOperation {

	/*^block*/id _discoverUserInfosCompletionBlock;
	NSArray* _emailAddresses;
	NSArray* _userRecordIDs;
	NSMutableDictionary* _emailsToUserInfos;
	NSMutableDictionary* _userRecordIDsToUserInfos;

}

@property (nonatomic,retain) NSMutableDictionary * emailsToUserInfos;                     //@synthesize emailsToUserInfos=_emailsToUserInfos - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userRecordIDsToUserInfos;              //@synthesize userRecordIDsToUserInfos=_userRecordIDsToUserInfos - In the implementation block
@property (nonatomic,copy) NSArray * emailAddresses;                                      //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy) NSArray * userRecordIDs;                                       //@synthesize userRecordIDs=_userRecordIDs - In the implementation block
@property (nonatomic,copy) id discoverUserInfosCompletionBlock;                           //@synthesize discoverUserInfosCompletionBlock=_discoverUserInfosCompletionBlock - In the implementation block
-(id)init;
-(NSArray *)emailAddresses;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(Class)operationInfoClass;
-(id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2 ;
-(void)setDiscoverUserInfosCompletionBlock:(id)arg1 ;
-(NSArray *)userRecordIDs;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setUserRecordIDs:(NSArray *)arg1 ;
-(id)discoverUserInfosCompletionBlock;
-(NSMutableDictionary *)emailsToUserInfos;
-(NSMutableDictionary *)userRecordIDsToUserInfos;
-(void)setEmailsToUserInfos:(NSMutableDictionary *)arg1 ;
-(void)setUserRecordIDsToUserInfos:(NSMutableDictionary *)arg1 ;
@end

