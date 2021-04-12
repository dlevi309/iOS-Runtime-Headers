/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)retryNumber;
-(NSDate *)lastAttemptDate;
-(void)setOperationInfo:(CKOperationInfo *)arg1 ;
-(void)setLastAttemptDate:(NSDate *)arg1 ;
-(void)setRetryNumber:(NSNumber *)arg1 ;
@end

