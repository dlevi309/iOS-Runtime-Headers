/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSURL* _publicDatabaseRPCServiceURL;
	NSString* _containerScopedUserID;
	NSString* _orgAdminUserID;
	long long _environment;

}

@property (nonatomic,copy) NSURL * publicCloudDBURL;                         //@synthesize publicCloudDBURL=_publicCloudDBURL - In the implementation block
@property (nonatomic,copy) NSURL * publicShareServiceURL;                    //@synthesize publicShareServiceURL=_publicShareServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * publicDeviceServiceURL;                   //@synthesize publicDeviceServiceURL=_publicDeviceServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * publicCodeServiceURL;                     //@synthesize publicCodeServiceURL=_publicCodeServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * publicMetricsServiceURL;                  //@synthesize publicMetricsServiceURL=_publicMetricsServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * publicDatabaseRPCServiceURL;              //@synthesize publicDatabaseRPCServiceURL=_publicDatabaseRPCServiceURL - In the implementation block
@property (nonatomic,copy) NSString * containerScopedUserID;                 //@synthesize containerScopedUserID=_containerScopedUserID - In the implementation block
@property (nonatomic,copy) NSString * orgAdminUserID;                        //@synthesize orgAdminUserID=_orgAdminUserID - In the implementation block
@property (assign,nonatomic) long long environment;                          //@synthesize environment=_environment - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)environment;
-(void)setEnvironment:(long long)arg1 ;
-(id)CKPropertiesDescription;
-(void)setContainerScopedUserID:(NSString *)arg1 ;
-(void)setOrgAdminUserID:(NSString *)arg1 ;
-(NSString *)containerScopedUserID;
-(NSString *)orgAdminUserID;
-(NSURL *)publicCloudDBURL;
-(NSURL *)publicShareServiceURL;
-(NSURL *)publicDeviceServiceURL;
-(NSURL *)publicCodeServiceURL;
-(NSURL *)publicMetricsServiceURL;
-(NSURL *)publicDatabaseRPCServiceURL;
-(void)setPublicCloudDBURL:(NSURL *)arg1 ;
-(void)setPublicShareServiceURL:(NSURL *)arg1 ;
-(void)setPublicDeviceServiceURL:(NSURL *)arg1 ;
-(void)setPublicCodeServiceURL:(NSURL *)arg1 ;
-(void)setPublicMetricsServiceURL:(NSURL *)arg1 ;
-(void)setPublicDatabaseRPCServiceURL:(NSURL *)arg1 ;
@end

