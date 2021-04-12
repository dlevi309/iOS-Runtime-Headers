/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VSDeveloperSettings : NSObject <NSSecureCoding> {

	BOOL _isInSetTopBoxMode;
	BOOL _cacheBusterEnabled;
	BOOL _requestTimeoutsDisabled;
	BOOL _simulateExpiredToken;
	BOOL _setTopBoxUseDeviceProfile;
	BOOL _setTopBoxSupportsOptOut;
	NSString* _setTopBoxBundleIdentifier;
	NSString* _setTopBoxUserToken;
	NSString* _setTopBoxIdentityProviderID;

}

@property (assign,nonatomic) BOOL isInSetTopBoxMode;                            //@synthesize isInSetTopBoxMode=_isInSetTopBoxMode - In the implementation block
@property (assign,nonatomic) BOOL cacheBusterEnabled;                           //@synthesize cacheBusterEnabled=_cacheBusterEnabled - In the implementation block
@property (assign,nonatomic) BOOL requestTimeoutsDisabled;                      //@synthesize requestTimeoutsDisabled=_requestTimeoutsDisabled - In the implementation block
@property (assign,nonatomic) BOOL simulateExpiredToken;                         //@synthesize simulateExpiredToken=_simulateExpiredToken - In the implementation block
@property (nonatomic,copy) NSString * setTopBoxBundleIdentifier;                //@synthesize setTopBoxBundleIdentifier=_setTopBoxBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * setTopBoxUserToken;                       //@synthesize setTopBoxUserToken=_setTopBoxUserToken - In the implementation block
@property (nonatomic,copy) NSString * setTopBoxIdentityProviderID;              //@synthesize setTopBoxIdentityProviderID=_setTopBoxIdentityProviderID - In the implementation block
@property (assign,nonatomic) BOOL setTopBoxUseDeviceProfile;                    //@synthesize setTopBoxUseDeviceProfile=_setTopBoxUseDeviceProfile - In the implementation block
@property (assign,nonatomic) BOOL setTopBoxSupportsOptOut;                      //@synthesize setTopBoxSupportsOptOut=_setTopBoxSupportsOptOut - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setDefaults;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)simulateExpiredToken;
-(void)setIsInSetTopBoxMode:(BOOL)arg1 ;
-(void)setCacheBusterEnabled:(BOOL)arg1 ;
-(void)setRequestTimeoutsDisabled:(BOOL)arg1 ;
-(void)setSimulateExpiredToken:(BOOL)arg1 ;
-(void)setSetTopBoxBundleIdentifier:(NSString *)arg1 ;
-(void)setSetTopBoxUserToken:(NSString *)arg1 ;
-(void)setSetTopBoxIdentityProviderID:(NSString *)arg1 ;
-(void)setSetTopBoxUseDeviceProfile:(BOOL)arg1 ;
-(void)setSetTopBoxSupportsOptOut:(BOOL)arg1 ;
-(BOOL)isInSetTopBoxMode;
-(BOOL)cacheBusterEnabled;
-(BOOL)requestTimeoutsDisabled;
-(NSString *)setTopBoxBundleIdentifier;
-(NSString *)setTopBoxUserToken;
-(NSString *)setTopBoxIdentityProviderID;
-(BOOL)setTopBoxUseDeviceProfile;
-(BOOL)setTopBoxSupportsOptOut;
@end

