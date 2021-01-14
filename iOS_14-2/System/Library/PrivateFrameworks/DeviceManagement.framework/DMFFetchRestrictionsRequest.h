/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFFetchRestrictionsRequest : DMFTaskRequest {

	BOOL _includeProfileRestrictions;
	unsigned long long _profileFilterFlags;

}

@property (assign,nonatomic) BOOL includeProfileRestrictions;                    //@synthesize includeProfileRestrictions=_includeProfileRestrictions - In the implementation block
@property (assign,nonatomic) unsigned long long profileFilterFlags;              //@synthesize profileFilterFlags=_profileFilterFlags - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)includeProfileRestrictions;
-(unsigned long long)profileFilterFlags;
-(void)setIncludeProfileRestrictions:(BOOL)arg1 ;
-(void)setProfileFilterFlags:(unsigned long long)arg1 ;
@end

