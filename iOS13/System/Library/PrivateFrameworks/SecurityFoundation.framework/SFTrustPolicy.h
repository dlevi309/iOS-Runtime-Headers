/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

