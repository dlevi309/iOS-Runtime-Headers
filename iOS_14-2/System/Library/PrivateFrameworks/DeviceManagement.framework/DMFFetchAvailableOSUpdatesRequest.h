/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFFetchAvailableOSUpdatesRequest : DMFTaskRequest {

	BOOL _useDelay;
	NSString* _productVersion;

}

@property (nonatomic,copy) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
@property (assign,nonatomic) BOOL useDelay;                        //@synthesize useDelay=_useDelay - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(id)init;
-(NSString *)productVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setProductVersion:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)useDelay;
-(void)setUseDelay:(BOOL)arg1 ;
@end

