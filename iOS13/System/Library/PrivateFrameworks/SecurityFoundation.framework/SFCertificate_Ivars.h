/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSString, NSData;

@interface SFCertificate_Ivars : NSObject {

	long long certificateType;
	NSString* subject;
	NSString* issuerName;
	NSData* serialNumber;
	SecCertificateRef secCertificate;

}
@end

