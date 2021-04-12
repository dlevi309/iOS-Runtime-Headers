/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class SFTrustPolicy, SFRevocationPolicy, NSArray;

@interface SFTrustEvaluator_Ivars : NSObject {

	SFTrustPolicy* trustPolicy;
	SFRevocationPolicy* revocationPolicy;
	NSArray* applicationAnchorCertificates;
	struct {
		unsigned allowCertificateFetching : 1;
		unsigned trustSystemAnchorCertificates : 1;
	}  trustEvaluatorFlags;

}
@end

