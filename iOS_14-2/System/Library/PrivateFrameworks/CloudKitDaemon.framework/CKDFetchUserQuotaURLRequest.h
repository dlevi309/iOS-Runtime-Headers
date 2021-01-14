/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDFetchUserQuotaURLRequest : CKDURLRequest {

	/*^block*/id _quotaFetchedBlock;

}

@property (nonatomic,copy) id quotaFetchedBlock;              //@synthesize quotaFetchedBlock=_quotaFetchedBlock - In the implementation block
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setQuotaFetchedBlock:(id)arg1 ;
-(id)quotaFetchedBlock;
@end

