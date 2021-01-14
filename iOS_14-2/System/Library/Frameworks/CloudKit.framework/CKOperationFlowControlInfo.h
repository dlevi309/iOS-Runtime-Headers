/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSError *)lastError;
-(void)setFlowControlEndDate:(NSDate *)arg1 ;
-(NSDate *)flowControlEndDate;
-(void)setLastError:(NSError *)arg1 ;
@end

