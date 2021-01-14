/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SFTrustPolicy : NSObject <NSCopying> {

	id _trustPolicyInternal;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)evaluateCertificateChain:(id)arg1 error:(id*)arg2 ;
@end

