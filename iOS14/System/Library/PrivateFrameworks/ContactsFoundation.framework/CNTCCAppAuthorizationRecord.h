/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSString;

@interface CNTCCAppAuthorizationRecord : NSObject {

	NSString* _bundleIdentifier;
	NSString* _localizedName;
	long long _recordType;
	long long _authorizationStatus;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                 //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) long long recordType;                     //@synthesize recordType=_recordType - In the implementation block
@property (assign,nonatomic) long long authorizationStatus;              //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
+(long long)authorizationStatusFromAuthorizationRight:(unsigned long long)arg1 ;
+(unsigned long long)authorizationRightFromAuthorizationStatus:(long long)arg1 ;
-(NSString *)localizedName;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(long long)recordType;
-(long long)authorizationStatus;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 localizedName:(id)arg2 recordType:(long long)arg3 authorizationStatus:(long long)arg4 ;
-(id)initWithTCCAuthorizationRecord:(id)arg1 ;
@end

