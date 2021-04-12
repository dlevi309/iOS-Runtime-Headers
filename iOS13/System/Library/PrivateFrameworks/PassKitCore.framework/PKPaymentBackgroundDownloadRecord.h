/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKPaymentBackgroundDownloadRecord : NSObject <NSSecureCoding> {

	long long _taskType;
	long long _retryCount;

}

@property (assign,nonatomic) long long taskType;                //@synthesize taskType=_taskType - In the implementation block
@property (assign,nonatomic) long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)taskWithType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTaskType:(long long)arg1 ;
-(long long)retryCount;
-(void)setRetryCount:(long long)arg1 ;
-(long long)taskType;
@end

