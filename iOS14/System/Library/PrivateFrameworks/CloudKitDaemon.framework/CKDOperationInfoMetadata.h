/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class CKOperationInfo, NSDate, NSNumber;

@interface CKDOperationInfoMetadata : NSObject {

	CKOperationInfo* _operationInfo;
	NSDate* _lastAttemptDate;
	NSNumber* _retryNumber;

}

@property (nonatomic,retain) CKOperationInfo * operationInfo;              //@synthesize operationInfo=_operationInfo - In the implementation block
@property (nonatomic,retain) NSDate * lastAttemptDate;                     //@synthesize lastAttemptDate=_lastAttemptDate - In the implementation block
@property (nonatomic,retain) NSNumber * retryNumber;                       //@synthesize retryNumber=_retryNumber - In the implementation block
-(CKOperationInfo *)operationInfo;
-(void)setOperationInfo:(CKOperationInfo *)arg1 ;
-(NSNumber *)retryNumber;
-(NSDate *)lastAttemptDate;
-(void)setLastAttemptDate:(NSDate *)arg1 ;
-(void)setRetryNumber:(NSNumber *)arg1 ;
@end

