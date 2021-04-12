/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSString;

@interface SSDownloadPolicyRule : NSObject <NSSecureCoding, SSXPCCoding, NSCopying> {

	NSSet* _applicationStates;
	float _batteryLevel;
	long long _cellularDataStates;
	long long _downloadSizeLimit;
	NSSet* _networkTypes;
	long long _powerStates;
	long long _registrationStates;
	long long _timeLimitStates;
	NSSet* _userDefaultStates;

}

@property (assign,nonatomic) long long downloadSizeLimit;                                  //@synthesize downloadSizeLimit=_downloadSizeLimit - In the implementation block
@property (nonatomic,copy) NSSet * applicationStates;                                      //@synthesize applicationStates=_applicationStates - In the implementation block
@property (nonatomic,copy) NSSet * networkTypes;                                           //@synthesize networkTypes=_networkTypes - In the implementation block
@property (nonatomic,copy) NSSet * userDefaultStates;                                      //@synthesize userDefaultStates=_userDefaultStates - In the implementation block
@property (getter=isCellularAllowed,nonatomic,readonly) BOOL cellularAllowed; 
@property (getter=isWiFiAllowed,nonatomic,readonly) BOOL wiFiAllowed; 
@property (assign,nonatomic) float batteryLevel;                                           //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign,nonatomic) long long cellularDataStates;                                 //@synthesize cellularDataStates=_cellularDataStates - In the implementation block
@property (assign,nonatomic) long long powerStates;                                        //@synthesize powerStates=_powerStates - In the implementation block
@property (assign,nonatomic) long long registrationStates;                                 //@synthesize registrationStates=_registrationStates - In the implementation block
@property (assign,nonatomic) long long timeLimitStates;                                    //@synthesize timeLimitStates=_timeLimitStates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)init;
-(NSSet *)networkTypes;
-(float)batteryLevel;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBatteryLevel:(float)arg1 ;
-(long long)downloadSizeLimit;
-(void)addUserDefaultState:(id)arg1 ;
-(void)setDownloadSizeLimit:(long long)arg1 ;
-(void)setNetworkTypes:(NSSet *)arg1 ;
-(void)setCellularDataStates:(long long)arg1 ;
-(NSSet *)applicationStates;
-(void)addApplicationState:(id)arg1 ;
-(void)setApplicationStates:(NSSet *)arg1 ;
-(long long)powerStates;
-(long long)cellularDataStates;
-(long long)registrationStates;
-(long long)timeLimitStates;
-(NSSet *)userDefaultStates;
-(void)addNetworkType:(long long)arg1 ;
-(BOOL)isCellularAllowed;
-(BOOL)isWiFiAllowed;
-(void)unionPolicyRule:(id)arg1 ;
-(void)setPowerStates:(long long)arg1 ;
-(void)setRegistrationStates:(long long)arg1 ;
-(void)setTimeLimitStates:(long long)arg1 ;
-(void)setUserDefaultStates:(NSSet *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

