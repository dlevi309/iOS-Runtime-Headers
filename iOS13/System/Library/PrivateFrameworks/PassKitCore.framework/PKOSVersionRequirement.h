/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)watch;
-(id)asDictionary;
-(NSString *)iphone;
-(NSString *)ipad;
-(NSString *)ipod;
-(NSString *)appletv;
-(NSString *)mac;
-(long long)compare:(id)arg1 deviceClass:(id)arg2 ;
-(id)versionForDeviceClass:(id)arg1 ;
-(NSString *)specifiediphone;
@end

