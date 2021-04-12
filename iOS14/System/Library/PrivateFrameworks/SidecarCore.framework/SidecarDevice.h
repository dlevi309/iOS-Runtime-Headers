/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSURL;

@interface SidecarDevice : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _model;
	NSString* _name;
	unsigned long long _status;
	NSString* _version;
	long long _rapportVersion;
	NSString* _deviceTypeIdentifier;
	unsigned long long _generation;

}

@property (nonatomic,readonly) long long rapportVersion; 
@property (nonatomic,readonly) NSUUID * identifier; 
@property (nonatomic,readonly) NSURL * imageURL; 
@property (nonatomic,readonly) NSString * localizedDeviceType; 
@property (nonatomic,readonly) NSString * model; 
@property (assign,nonatomic) unsigned long long status; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) BOOL hasHomeButton; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * deviceTypeIdentifier; 
+(id)allDevices;
+(BOOL)supportsSecureCoding;
+(id)imageURLForDeviceTypeIdentifier:(id)arg1 ;
-(NSString *)model;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(NSString *)deviceTypeIdentifier;
-(BOOL)hasHomeButton;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(NSUUID *)identifier;
-(NSURL *)imageURL;
-(NSString *)version;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)status;
-(id)initWithIdentifier:(id)arg1 model:(id)arg2 name:(id)arg3 version:(id)arg4 ;
-(void)_updateFromDevice:(id)arg1 generation:(unsigned long long)arg2 ;
-(id)initWithIdentifier:(id)arg1 model:(id)arg2 name:(id)arg3 ;
-(long long)rapportVersion;
-(NSString *)localizedDeviceType;
@end

