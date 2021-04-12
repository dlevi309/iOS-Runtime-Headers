/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SUCoreDiagStats : NSObject <NSSecureCoding> {

	long long _beginCount;
	long long _endSuccessCount;
	long long _endFailCount;
	long long _errorCount;
	long long _anomalyCount;
	long long _failureCount;
	long long _faultCount;
	long long _stateEventCount;

}

@property (assign,nonatomic) long long beginCount;                   //@synthesize beginCount=_beginCount - In the implementation block
@property (assign,nonatomic) long long endSuccessCount;              //@synthesize endSuccessCount=_endSuccessCount - In the implementation block
@property (assign,nonatomic) long long endFailCount;                 //@synthesize endFailCount=_endFailCount - In the implementation block
@property (assign,nonatomic) long long errorCount;                   //@synthesize errorCount=_errorCount - In the implementation block
@property (assign,nonatomic) long long anomalyCount;                 //@synthesize anomalyCount=_anomalyCount - In the implementation block
@property (assign,nonatomic) long long failureCount;                 //@synthesize failureCount=_failureCount - In the implementation block
@property (assign,nonatomic) long long faultCount;                   //@synthesize faultCount=_faultCount - In the implementation block
@property (assign,nonatomic) long long stateEventCount;              //@synthesize stateEventCount=_stateEventCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)errorCount;
-(long long)failureCount;
-(void)setFailureCount:(long long)arg1 ;
-(void)setErrorCount:(long long)arg1 ;
-(id)summary;
-(long long)beginCount;
-(void)setBeginCount:(long long)arg1 ;
-(long long)endSuccessCount;
-(void)setEndSuccessCount:(long long)arg1 ;
-(long long)endFailCount;
-(void)setEndFailCount:(long long)arg1 ;
-(long long)anomalyCount;
-(void)setAnomalyCount:(long long)arg1 ;
-(long long)faultCount;
-(void)setFaultCount:(long long)arg1 ;
-(long long)stateEventCount;
-(void)setStateEventCount:(long long)arg1 ;
-(id)initWithBeginCount:(long long)arg1 withEndSuccessCount:(long long)arg2 withEndFailCount:(long long)arg3 withErrorCount:(long long)arg4 withAnomalyCount:(long long)arg5 withFailureCount:(long long)arg6 withFaultCount:(long long)arg7 withStateEventCount:(long long)arg8 ;
@end

