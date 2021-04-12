/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OTOperationConfiguration : NSObject <NSSecureCoding> {

	BOOL _discretionaryNetwork;
	BOOL _useCachedAccountStatus;
	unsigned long long _timeoutWaitForCKAccount;
	long long _qualityOfService;

}

@property (assign,nonatomic) unsigned long long timeoutWaitForCKAccount;              //@synthesize timeoutWaitForCKAccount=_timeoutWaitForCKAccount - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                              //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL discretionaryNetwork;                               //@synthesize discretionaryNetwork=_discretionaryNetwork - In the implementation block
@property (assign,nonatomic) BOOL useCachedAccountStatus;                             //@synthesize useCachedAccountStatus=_useCachedAccountStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setQualityOfService:(long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)timeoutWaitForCKAccount;
-(void)setTimeoutWaitForCKAccount:(unsigned long long)arg1 ;
-(BOOL)discretionaryNetwork;
-(void)setDiscretionaryNetwork:(BOOL)arg1 ;
-(BOOL)useCachedAccountStatus;
-(void)setUseCachedAccountStatus:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)qualityOfService;
@end

