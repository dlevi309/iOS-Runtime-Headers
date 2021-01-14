/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ENRegion, NSURL, NSString;

@interface ENRegionServerNKDConfiguration : NSObject <NSSecureCoding, NSCopying> {

	ENRegion* _region;
	NSURL* _tekLocalDownloadBaseURL;
	NSURL* _tekLocalDownloadIndexURL;
	double _tekPublishInterval;
	NSURL* _tekUploadURL;
	NSString* _healthAuthorityID;
	NSString* _testVerificationAPIKey;
	NSURL* _testVerificationCertificateURL;
	NSURL* _testVerificationURL;

}

@property (nonatomic,copy,readonly) ENRegion * region;                                   //@synthesize region=_region - In the implementation block
@property (nonatomic,copy,readonly) NSURL * tekLocalDownloadBaseURL;                     //@synthesize tekLocalDownloadBaseURL=_tekLocalDownloadBaseURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * tekLocalDownloadIndexURL;                    //@synthesize tekLocalDownloadIndexURL=_tekLocalDownloadIndexURL - In the implementation block
@property (nonatomic,readonly) double tekPublishInterval;                                //@synthesize tekPublishInterval=_tekPublishInterval - In the implementation block
@property (nonatomic,copy,readonly) NSURL * tekUploadURL;                                //@synthesize tekUploadURL=_tekUploadURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * healthAuthorityID;                        //@synthesize healthAuthorityID=_healthAuthorityID - In the implementation block
@property (nonatomic,copy,readonly) NSString * testVerificationAPIKey;                   //@synthesize testVerificationAPIKey=_testVerificationAPIKey - In the implementation block
@property (nonatomic,copy,readonly) NSURL * testVerificationCertificateURL;              //@synthesize testVerificationCertificateURL=_testVerificationCertificateURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * testVerificationURL;                         //@synthesize testVerificationURL=_testVerificationURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(ENRegion *)region;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithServerResponseDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)tekLocalDownloadBaseURL;
-(NSURL *)tekLocalDownloadIndexURL;
-(double)tekPublishInterval;
-(NSURL *)tekUploadURL;
-(NSString *)healthAuthorityID;
-(NSString *)testVerificationAPIKey;
-(NSURL *)testVerificationCertificateURL;
-(NSURL *)testVerificationURL;
@end

