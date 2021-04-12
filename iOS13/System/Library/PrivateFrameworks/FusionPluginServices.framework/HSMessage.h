/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FusionPluginServices.framework/FusionPluginServices
*/

#import <FusionPluginServices/FusionPluginServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString;

@interface HSMessage : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _uuid;
	NSString* _hostEnvironment;
	NSString* _deviceEnvironment;

}

@property (nonatomic,readonly) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * hostEnvironment;                //@synthesize hostEnvironment=_hostEnvironment - In the implementation block
@property (nonatomic,retain) NSString * deviceEnvironment;              //@synthesize deviceEnvironment=_deviceEnvironment - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)supportedClasses;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(NSString *)hostEnvironment;
-(NSString *)deviceEnvironment;
-(void)setHostEnvironment:(NSString *)arg1 ;
-(void)setDeviceEnvironment:(NSString *)arg1 ;
@end

