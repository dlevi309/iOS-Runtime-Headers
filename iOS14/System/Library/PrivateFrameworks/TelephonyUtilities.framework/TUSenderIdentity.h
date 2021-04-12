/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, TUHandle, NSString;

@interface TUSenderIdentity : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSUUID* _accountUUID;
	TUHandle* _handle;
	NSString* _localizedName;
	NSString* _localizedShortName;

}

@property (nonatomic,readonly) NSUUID * UUID;                                   //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSUUID * accountUUID;                            //@synthesize accountUUID=_accountUUID - In the implementation block
@property (nonatomic,readonly) TUHandle * handle;                               //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedShortName;              //@synthesize localizedShortName=_localizedShortName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localizedShortName;
-(NSString *)localizedName;
-(NSUUID *)UUID;
-(NSUUID *)accountUUID;
-(TUHandle *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToSenderIdentity:(id)arg1 ;
-(id)initWithUUID:(id)arg1 accountUUID:(id)arg2 localizedName:(id)arg3 localizedShortName:(id)arg4 handle:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

