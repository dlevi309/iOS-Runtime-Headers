/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TUPubliclyAccessibleCopying.h>
#import <libobjc.A.dylib/TUSecureCoding.h>

@class NSURL, NSData, TUCTCapabilityInfo, NSString;

@interface TUCTCapabilitiesState : NSObject <NSCopying, TUPubliclyAccessibleCopying, TUSecureCoding> {

	BOOL _provisioningURLInvalid;
	BOOL _supported;
	BOOL _enabled;
	BOOL _currentlyAvailable;
	BOOL _roamingSupported;
	BOOL _roamingEnabled;
	BOOL _emergencySupported;
	BOOL _emergencyCurrentlyAvailable;
	int _provisioningStatus;
	NSURL* _provisioningURL;
	NSData* _provisioningPostData;

}

@property (nonatomic,copy,readonly) TUCTCapabilityInfo * ctCapabilityInfo; 
@property (assign,nonatomic) int provisioningStatus;                                                             //@synthesize provisioningStatus=_provisioningStatus - In the implementation block
@property (nonatomic,copy) NSURL * provisioningURL;                                                              //@synthesize provisioningURL=_provisioningURL - In the implementation block
@property (assign,getter=isProvisioningURLInvalid,nonatomic) BOOL provisioningURLInvalid;                        //@synthesize provisioningURLInvalid=_provisioningURLInvalid - In the implementation block
@property (nonatomic,copy) NSData * provisioningPostData;                                                        //@synthesize provisioningPostData=_provisioningPostData - In the implementation block
@property (assign,getter=isSupported,nonatomic) BOOL supported;                                                  //@synthesize supported=_supported - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isCurrentlyAvailable,nonatomic) BOOL currentlyAvailable;                                //@synthesize currentlyAvailable=_currentlyAvailable - In the implementation block
@property (assign,getter=isRoamingSupported,nonatomic) BOOL roamingSupported;                                    //@synthesize roamingSupported=_roamingSupported - In the implementation block
@property (assign,getter=isRoamingEnabled,nonatomic) BOOL roamingEnabled;                                        //@synthesize roamingEnabled=_roamingEnabled - In the implementation block
@property (assign,getter=isEmergencySupported,nonatomic) BOOL emergencySupported;                                //@synthesize emergencySupported=_emergencySupported - In the implementation block
@property (assign,getter=isEmergencyCurrentlyAvailable,nonatomic) BOOL emergencyCurrentlyAvailable;              //@synthesize emergencyCurrentlyAvailable=_emergencyCurrentlyAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isSupported;
-(BOOL)isCurrentlyAvailable;
-(TUCTCapabilityInfo *)ctCapabilityInfo;
-(BOOL)isRoamingSupported;
-(BOOL)isRoamingEnabled;
-(BOOL)isEmergencySupported;
-(BOOL)isEmergencyCurrentlyAvailable;
-(int)provisioningStatus;
-(NSURL *)provisioningURL;
-(BOOL)isProvisioningURLInvalid;
-(NSData *)provisioningPostData;
-(void)setProvisioningStatus:(int)arg1 ;
-(void)setProvisioningURL:(NSURL *)arg1 ;
-(void)setProvisioningPostData:(NSData *)arg1 ;
-(void)setRoamingEnabled:(BOOL)arg1 ;
-(id)publiclyAccessibleCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToCapabilitiesState:(id)arg1 ;
-(void)setSupported:(BOOL)arg1 ;
-(void)setCurrentlyAvailable:(BOOL)arg1 ;
-(void)setRoamingSupported:(BOOL)arg1 ;
-(void)setEmergencySupported:(BOOL)arg1 ;
-(void)setEmergencyCurrentlyAvailable:(BOOL)arg1 ;
-(id)publiclyAccessibleCopy;
-(id)archivedDataWithError:(id*)arg1 ;
-(id)initWithCapabilityInfo:(id)arg1 ;
-(void)invalidateProvisioningURL;
-(void)setProvisioningURLInvalid:(BOOL)arg1 ;
@end

