/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)allDevices;
+(id)imageURLForDeviceTypeIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)version;
-(unsigned long long)status;
-(NSString *)model;
-(void)setStatus:(unsigned long long)arg1 ;
-(NSURL *)imageURL;
-(BOOL)hasHomeButton;
-(NSString *)deviceTypeIdentifier;
-(id)initWithIdentifier:(id)arg1 model:(id)arg2 name:(id)arg3 version:(id)arg4 ;
-(void)_updateFromDevice:(id)arg1 generation:(unsigned long long)arg2 ;
-(id)initWithIdentifier:(id)arg1 model:(id)arg2 name:(id)arg3 ;
-(long long)rapportVersion;
-(NSString *)localizedDeviceType;
@end

