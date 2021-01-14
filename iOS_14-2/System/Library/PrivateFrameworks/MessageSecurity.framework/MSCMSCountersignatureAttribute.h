/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/

#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class NSArray;

@interface MSCMSCountersignatureAttribute : NSObject <MSCMSAttributeCoder> {

	NSArray* _signerInfoSet;

}

@property (retain,readonly) NSArray * signerInfoSet;              //@synthesize signerInfoSet=_signerInfoSet - In the implementation block
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(id)initWithAttribute:(id)arg1 LAContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)verifyCountersignatures:(id)arg1 error:(id*)arg2 ;
-(id)initWithSignerInfo:(id)arg1 ;
-(void)addSignerInfo:(id)arg1 ;
-(BOOL)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg1 verifyTime:(id)arg2 signature:(id)arg3 error:(id*)arg4 ;
-(NSArray *)signerInfoSet;
@end

