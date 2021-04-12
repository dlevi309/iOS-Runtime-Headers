/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)summary;
-(id)copy;
-(long long)failureCount;
-(void)setFailureCount:(long long)arg1 ;
-(long long)faultCount;
-(id)initWithCoder:(id)arg1 ;
-(long long)errorCount;
-(void)setErrorCount:(long long)arg1 ;
-(long long)beginCount;
-(void)setBeginCount:(long long)arg1 ;
-(long long)endSuccessCount;
-(void)setEndSuccessCount:(long long)arg1 ;
-(long long)endFailCount;
-(void)setEndFailCount:(long long)arg1 ;
-(long long)anomalyCount;
-(void)setAnomalyCount:(long long)arg1 ;
-(void)setFaultCount:(long long)arg1 ;
-(long long)stateEventCount;
-(void)setStateEventCount:(long long)arg1 ;
-(id)initWithBeginCount:(long long)arg1 withEndSuccessCount:(long long)arg2 withEndFailCount:(long long)arg3 withErrorCount:(long long)arg4 withAnomalyCount:(long long)arg5 withFailureCount:(long long)arg6 withFaultCount:(long long)arg7 withStateEventCount:(long long)arg8 ;
@end

