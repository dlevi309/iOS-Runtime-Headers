/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

