/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)includeProfileRestrictions;
-(unsigned long long)profileFilterFlags;
-(void)setIncludeProfileRestrictions:(BOOL)arg1 ;
-(void)setProfileFilterFlags:(unsigned long long)arg1 ;
@end

