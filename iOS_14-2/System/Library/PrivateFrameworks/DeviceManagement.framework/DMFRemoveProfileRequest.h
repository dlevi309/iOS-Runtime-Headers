/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFRemoveProfileRequest : DMFTaskRequest {

	unsigned long long _type;
	NSString* _profileIdentifier;

}

@property (assign,nonatomic) unsigned long long type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * profileIdentifier;              //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(NSString *)profileIdentifier;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
@end

