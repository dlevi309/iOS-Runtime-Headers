/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <SoftwareUpdateServices/SUOptionsBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class SUDescriptor, NSObject;

@interface SUDownloadOptions : SUOptionsBase <NSSecureCoding, NSCopying> {

	BOOL _downloadOnly;
	BOOL _autoDownload;
	int _downloadFeeAgreementStatus;
	int _termsAndConditionsAgreementStatus;
	SUDescriptor* _downloadDescriptor;
	int _activeDownloadPolicyType;
	NSObject*<OS_dispatch_queue> _stateQueue;

}

@property (nonatomic,retain) SUDescriptor * downloadDescriptor;                                                  //@synthesize downloadDescriptor=_downloadDescriptor - In the implementation block
@property (assign,getter=isDownloadOnly,nonatomic) BOOL downloadOnly;                                            //@synthesize downloadOnly=_downloadOnly - In the implementation block
@property (assign,getter=isAutoDownload,nonatomic) BOOL autoDownload;                                            //@synthesize autoDownload=_autoDownload - In the implementation block
@property (assign,nonatomic) int downloadFeeAgreementStatus;                                                     //@synthesize downloadFeeAgreementStatus=_downloadFeeAgreementStatus - In the implementation block
@property (assign,nonatomic) int termsAndConditionsAgreementStatus;                                              //@synthesize termsAndConditionsAgreementStatus=_termsAndConditionsAgreementStatus - In the implementation block
@property (assign,nonatomic) int activeDownloadPolicyType; 
@property (nonatomic,retain) id<SUDownloadPolicy> activeDownloadPolicy; 
@property (getter=isEnabledForCellular,nonatomic,readonly) BOOL enabledForCellular; 
@property (getter=isEnabledForWifi,nonatomic,readonly) BOOL enabledForWifi; 
@property (getter=isEnabledOnBatteryPower,nonatomic,readonly) BOOL enabledOnBatteryPower; 
@property (getter=isEnabledForCellularRoaming,nonatomic,readonly) BOOL enabledForCellularRoaming; 
@property (getter=isEnabledForExpensiveNetwork,nonatomic,readonly) BOOL enabledForExpensiveNetwork; 
+(BOOL)supportsSecureCoding;
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)allowCellular;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isAutoDownload;
-(id)initWithCoder:(id)arg1 ;
-(void)setDownloadOnly:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEnabledForWifi;
-(BOOL)isEnabledOnBatteryPower;
-(BOOL)isEnabledForCellularRoaming;
-(BOOL)isDownloadOnly;
-(int)downloadFeeAgreementStatus;
-(int)termsAndConditionsAgreementStatus;
-(int)activeDownloadPolicyType;
-(id<SUDownloadPolicy>)activeDownloadPolicy;
-(BOOL)allowExpensiveNetwork;
-(void)setAutoDownload:(BOOL)arg1 ;
-(void)setDownloadFeeAgreementStatus:(int)arg1 ;
-(void)setTermsAndConditionsAgreementStatus:(int)arg1 ;
-(void)setDownloadDescriptor:(SUDescriptor *)arg1 ;
-(void)setActiveDownloadPolicyType:(int)arg1 ;
-(BOOL)isEnabledForCellular;
-(id)initWithMetadata:(id)arg1 andDescriptor:(id)arg2 ;
-(void)setActiveDownloadPolicy:(id<SUDownloadPolicy>)arg1 ;
-(BOOL)isEnabledForExpensiveNetwork;
-(SUDescriptor *)downloadDescriptor;
@end

