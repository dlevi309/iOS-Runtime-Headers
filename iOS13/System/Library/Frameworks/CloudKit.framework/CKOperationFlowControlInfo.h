/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSError, NSDate;

@interface CKOperationFlowControlInfo : NSObject {

	NSError* _lastError;
	NSDate* _flowControlEndDate;

}

@property (nonatomic,retain) NSError * lastError;                      //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,retain) NSDate * flowControlEndDate;              //@synthesize flowControlEndDate=_flowControlEndDate - In the implementation block
+(id)flowControlInfoWithEndDate:(id)arg1 error:(id)arg2 ;
-(void)setFlowControlEndDate:(NSDate *)arg1 ;
-(void)setLastError:(NSError *)arg1 ;
-(NSError *)lastError;
-(NSDate *)flowControlEndDate;
@end

