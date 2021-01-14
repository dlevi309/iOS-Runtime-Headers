/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFScheduleOSUpdateRequest : DMFTaskRequest {

	BOOL _useDelay;
	unsigned long long _action;
	NSString* _productKey;
	NSString* _productVersion;

}

@property (assign,nonatomic) unsigned long long action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * productKey;                    //@synthesize productKey=_productKey - In the implementation block
@property (nonatomic,copy) NSString * productVersion;                //@synthesize productVersion=_productVersion - In the implementation block
@property (assign,nonatomic) BOOL useDelay;                          //@synthesize useDelay=_useDelay - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)_descriptionForAction:(unsigned long long)arg1 ;
+(BOOL)_action:(unsigned long long*)arg1 fromString:(id)arg2 ;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(id)init;
-(NSString *)productVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)action;
-(void)setAction:(unsigned long long)arg1 ;
-(void)setProductVersion:(NSString *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)useDelay;
-(void)setUseDelay:(BOOL)arg1 ;
-(NSString *)productKey;
-(void)setProductKey:(NSString *)arg1 ;
@end

