/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKOSVersionRequirement : NSObject <NSSecureCoding, NSCopying> {

	NSString* _iphone;
	NSString* _ipad;
	NSString* _ipod;
	NSString* _appletv;
	NSString* _mac;
	NSString* _watch;
	NSString* _specifiediphone;

}

@property (nonatomic,readonly) NSString * iphone;                       //@synthesize iphone=_iphone - In the implementation block
@property (nonatomic,readonly) NSString * ipad;                         //@synthesize ipad=_ipad - In the implementation block
@property (nonatomic,readonly) NSString * ipod;                         //@synthesize ipod=_ipod - In the implementation block
@property (nonatomic,readonly) NSString * appletv;                      //@synthesize appletv=_appletv - In the implementation block
@property (nonatomic,readonly) NSString * mac;                          //@synthesize mac=_mac - In the implementation block
@property (nonatomic,readonly) NSString * watch;                        //@synthesize watch=_watch - In the implementation block
@property (nonatomic,readonly) NSString * specifiediphone;              //@synthesize specifiediphone=_specifiediphone - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fromDeviceVersion;
-(id)asDictionary;
-(NSString *)mac;
-(NSString *)specifiediphone;
-(long long)compare:(id)arg1 deviceClass:(id)arg2 ;
-(NSString *)ipad;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)watch;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)iphone;
-(NSString *)appletv;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ipod;
-(id)versionForDeviceClass:(id)arg1 ;
-(BOOL)isEqualToOSVersionRequirement:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

