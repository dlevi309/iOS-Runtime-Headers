/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFAppRequest.h>

@class NSString;

@interface DMFSetAppVPNUUIDRequest : DMFAppRequest {

	NSString* _UUIDString;

}

@property (nonatomic,copy) NSString * UUIDString;              //@synthesize UUIDString=_UUIDString - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)UUIDString;
-(void)setUUIDString:(NSString *)arg1 ;
@end

