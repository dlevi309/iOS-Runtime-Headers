/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@class NSArray;

@interface CKDiscoverUserInfosOperation : CKOperation {

	NSArray* _emailAddresses;
	NSArray* _userRecordIDs;
	/*^block*/id _discoverUserInfosCompletionBlock;

}

@property (nonatomic,copy) NSArray * emailAddresses;                         //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy) NSArray * userRecordIDs;                          //@synthesize userRecordIDs=_userRecordIDs - In the implementation block
@property (nonatomic,copy) id discoverUserInfosCompletionBlock;              //@synthesize discoverUserInfosCompletionBlock=_discoverUserInfosCompletionBlock - In the implementation block
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(NSArray *)emailAddresses;
-(id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2 ;
-(NSArray *)userRecordIDs;
-(void)setUserRecordIDs:(NSArray *)arg1 ;
-(id)discoverUserInfosCompletionBlock;
-(void)setDiscoverUserInfosCompletionBlock:(id)arg1 ;
@end

