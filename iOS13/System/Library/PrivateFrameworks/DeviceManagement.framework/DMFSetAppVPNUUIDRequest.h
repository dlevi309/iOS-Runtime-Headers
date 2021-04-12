/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFAppRequest.h>

@class NSString;

@interface DMFSetAppVPNUUIDRequest : DMFAppRequest {

	NSString* _UUIDString;

}

@property (nonatomic,copy) NSString * UUIDString;              //@synthesize UUIDString=_UUIDString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)UUIDString;
-(void)setUUIDString:(NSString *)arg1 ;
@end

