/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDictionary, ENRegion, NSString;

@interface ENRemotePresentationRequest : NSObject <NSSecureCoding, NSCopying> {

	BOOL _testMode;
	long long _requestType;
	NSUUID* _receiptId;
	NSDictionary* _decisionInfo;
	ENRegion* _agencyRegion;
	NSString* _appBundleIdentifier;

}

@property (assign,nonatomic) long long requestType;                     //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) NSUUID * receiptId;                          //@synthesize receiptId=_receiptId - In the implementation block
@property (nonatomic,copy) NSDictionary * decisionInfo;                 //@synthesize decisionInfo=_decisionInfo - In the implementation block
@property (nonatomic,copy) ENRegion * agencyRegion;                     //@synthesize agencyRegion=_agencyRegion - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) ENRegion * region; 
@property (assign,nonatomic) BOOL testMode;                             //@synthesize testMode=_testMode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)presentationRequestWithType:(long long)arg1 ;
-(void)setTestMode:(BOOL)arg1 ;
-(ENRegion *)region;
-(void)setRequestType:(long long)arg1 ;
-(long long)requestType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(BOOL)testMode;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)receiptId;
-(void)setReceiptId:(NSUUID *)arg1 ;
-(void)setDecisionInfo:(NSDictionary *)arg1 ;
-(ENRegion *)agencyRegion;
-(NSDictionary *)decisionInfo;
-(void)setAgencyRegion:(ENRegion *)arg1 ;
-(void)onboardingRequestCompletedWithDecision:(BOOL)arg1 ;
-(void)keyReleaseRequestCompletedWithDecision:(BOOL)arg1 ;
-(void)preApprovalRequestCompletedWithDecision:(BOOL)arg1 ;
@end

