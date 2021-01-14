/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DMFOSUpdate : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isCritical;
	BOOL _restartRequired;
	BOOL _allowsInstallLater;
	NSString* _productKey;
	NSString* _humanReadableName;
	NSString* _productName;
	NSString* _version;
	NSString* _build;
	unsigned long long _downloadSize;
	unsigned long long _installSize;

}

@property (nonatomic,copy,readonly) NSString * productKey;                     //@synthesize productKey=_productKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * humanReadableName;              //@synthesize humanReadableName=_humanReadableName - In the implementation block
@property (nonatomic,copy,readonly) NSString * productName;                    //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSString * build;                          //@synthesize build=_build - In the implementation block
@property (nonatomic,readonly) unsigned long long downloadSize;                //@synthesize downloadSize=_downloadSize - In the implementation block
@property (nonatomic,readonly) unsigned long long installSize;                 //@synthesize installSize=_installSize - In the implementation block
@property (nonatomic,readonly) BOOL isCritical;                                //@synthesize isCritical=_isCritical - In the implementation block
@property (nonatomic,readonly) BOOL restartRequired;                           //@synthesize restartRequired=_restartRequired - In the implementation block
@property (nonatomic,readonly) BOOL allowsInstallLater;                        //@synthesize allowsInstallLater=_allowsInstallLater - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)productName;
-(NSString *)build;
-(unsigned long long)downloadSize;
-(unsigned long long)installSize;
-(BOOL)restartRequired;
-(BOOL)allowsInstallLater;
-(id)initWithProductKey:(id)arg1 humanReadableName:(id)arg2 productName:(id)arg3 version:(id)arg4 build:(id)arg5 downloadSize:(unsigned long long)arg6 installSize:(unsigned long long)arg7 isCritical:(BOOL)arg8 restartRequired:(BOOL)arg9 allowsInstallLater:(BOOL)arg10 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)humanReadableName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)productKey;
-(BOOL)isCritical;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

