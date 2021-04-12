/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface CKDContainerInfo : NSObject <NSCopying, NSSecureCoding> {

	NSURL* _publicCloudDBURL;
	NSURL* _publicShareServiceURL;
	NSURL* _publicDeviceServiceURL;
	NSURL* _publicCodeServiceURL;
	NSURL* _publicMetricsServiceURL;
	NSString* _containerScopedUserID;
	NSString* _orgAdminUserID;
	long long _environment;

}

@property (nonatomic,copy) NSURL * publicCloudDBURL;                      //@synthesize publicCloudDBURL=_publicCloudDBURL - In the implementation block
@property (nonatomic,copy) NSURL * publicShareServiceURL;                 //@synthesize publicShareServiceURL=_publicShareServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * publicDeviceServiceURL;                //@synthesize publicDeviceServiceURL=_publicDeviceServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * publicCodeServiceURL;                  //@synthesize publicCodeServiceURL=_publicCodeServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * publicMetricsServiceURL;               //@synthesize publicMetricsServiceURL=_publicMetricsServiceURL - In the implementation block
@property (nonatomic,copy) NSString * containerScopedUserID;              //@synthesize containerScopedUserID=_containerScopedUserID - In the implementation block
@property (nonatomic,copy) NSString * orgAdminUserID;                     //@synthesize orgAdminUserID=_orgAdminUserID - In the implementation block
@property (assign,nonatomic) long long environment;                       //@synthesize environment=_environment - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setContainerScopedUserID:(NSString *)arg1 ;
-(NSURL *)publicDeviceServiceURL;
-(NSURL *)publicMetricsServiceURL;
-(id)init;
-(void)setPublicCodeServiceURL:(NSURL *)arg1 ;
-(id)CKPropertiesDescription;
-(void)setOrgAdminUserID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSURL *)publicCloudDBURL;
-(void)setPublicDeviceServiceURL:(NSURL *)arg1 ;
-(void)setEnvironment:(long long)arg1 ;
-(void)setPublicCloudDBURL:(NSURL *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)publicShareServiceURL;
-(long long)environment;
-(NSString *)containerScopedUserID;
-(void)setPublicMetricsServiceURL:(NSURL *)arg1 ;
-(NSURL *)publicCodeServiceURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)orgAdminUserID;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPublicShareServiceURL:(NSURL *)arg1 ;
@end

