/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDFetchUserQuotaURLRequest : CKDURLRequest {

	/*^block*/id _quotaFetchedBlock;

}

@property (nonatomic,copy) id quotaFetchedBlock;              //@synthesize quotaFetchedBlock=_quotaFetchedBlock - In the implementation block
-(int)operationType;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setQuotaFetchedBlock:(id)arg1 ;
-(id)quotaFetchedBlock;
@end

