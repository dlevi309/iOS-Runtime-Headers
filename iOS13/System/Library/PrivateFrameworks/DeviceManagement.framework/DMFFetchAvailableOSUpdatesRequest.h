/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)productVersion;
-(void)setProductVersion:(NSString *)arg1 ;
-(BOOL)useDelay;
-(void)setUseDelay:(BOOL)arg1 ;
@end

