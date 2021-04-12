/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

