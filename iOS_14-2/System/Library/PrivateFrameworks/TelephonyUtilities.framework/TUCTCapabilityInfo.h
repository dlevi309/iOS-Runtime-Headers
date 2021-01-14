/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TUPubliclyAccessibleCopying.h>

@class NSURL, NSData, NSString;

@interface TUCTCapabilityInfo : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying> {

	BOOL _canEnable;
	BOOL _enabled;
	BOOL _canEnableRoaming;
	BOOL _roamingEnabled;
	int _provisioningStatus;
	NSURL* _provisioningURL;
	NSData* _provisioningPostData;

}

@property (assign,nonatomic) int provisioningStatus;                                                     //@synthesize provisioningStatus=_provisioningStatus - In the implementation block
@property (nonatomic,copy) NSURL * provisioningURL;                                                      //@synthesize provisioningURL=_provisioningURL - In the implementation block
@property (nonatomic,copy) NSData * provisioningPostData;                                                //@synthesize provisioningPostData=_provisioningPostData - In the implementation block
@property (assign,nonatomic) BOOL canEnable;                                                             //@synthesize canEnable=_canEnable - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL canEnableRoaming;                                                      //@synthesize canEnableRoaming=_canEnableRoaming - In the implementation block
@property (assign,getter=isRoamingEnabled,nonatomic) BOOL roamingEnabled;                                //@synthesize roamingEnabled=_roamingEnabled - In the implementation block
@property (getter=isProvisioningURLInvalid,nonatomic,readonly) BOOL provisioningURLInvalid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSURL *)provisioningURL;
-(void)setCanEnable:(BOOL)arg1 ;
-(int)provisioningStatus;
-(id)publiclyAccessibleCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isRoamingEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)invalidateProvisioningURL;
-(id)publiclyAccessibleCopy;
-(void)setRoamingEnabled:(BOOL)arg1 ;
-(void)setProvisioningURL:(NSURL *)arg1 ;
-(void)setProvisioningPostData:(NSData *)arg1 ;
-(void)setCanEnableRoaming:(BOOL)arg1 ;
-(NSString *)description;
-(NSData *)provisioningPostData;
-(BOOL)isProvisioningURLInvalid;
-(BOOL)canEnableRoaming;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)canEnable;
-(BOOL)isEnabled;
-(void)setProvisioningStatus:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

