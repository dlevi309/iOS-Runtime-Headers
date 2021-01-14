/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSArray;

@interface MSPublicDBInfo : NSObject <NSSecureCoding> {

	NSString* _serviceName;
	NSString* _serviceID;
	NSString* _serviceType;
	NSString* _configurationPublicKey;
	NSString* _recordName;
	NSURL* _serviceIconPath;
	NSArray* _bundleIDS;

}

@property (nonatomic,copy,readonly) NSString * serviceName;                //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceID;                  //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                         //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * configurationPublicKey;              //@synthesize configurationPublicKey=_configurationPublicKey - In the implementation block
@property (nonatomic,copy) NSString * recordName;                          //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,copy) NSURL * serviceIconPath;                        //@synthesize serviceIconPath=_serviceIconPath - In the implementation block
@property (nonatomic,retain) NSArray * bundleIDS;                          //@synthesize bundleIDS=_bundleIDS - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)serviceID;
-(void)setServiceType:(NSString *)arg1 ;
-(id)description;
-(void)setRecordName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceType;
-(NSString *)recordName;
-(id)initWithServiceName:(id)arg1 serviceID:(id)arg2 ;
-(NSString *)configurationPublicKey;
-(void)setConfigurationPublicKey:(NSString *)arg1 ;
-(NSURL *)serviceIconPath;
-(void)setServiceIconPath:(NSURL *)arg1 ;
-(NSArray *)bundleIDS;
-(void)setBundleIDS:(NSArray *)arg1 ;
@end

