/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface WBSFetchedCloudTabDeviceOrCloseRequest : NSObject <NSSecureCoding> {

	NSString* _uuidString;
	NSDictionary* _deviceOrCloseRequestDictionary;

}

@property (nonatomic,copy,readonly) NSString * uuidString;                                      //@synthesize uuidString=_uuidString - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * deviceOrCloseRequestDictionary;              //@synthesize deviceOrCloseRequestDictionary=_deviceOrCloseRequestDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uuidString;
-(id)initWithUUIDString:(id)arg1 deviceOrCloseRequestDictionary:(id)arg2 ;
-(NSDictionary *)deviceOrCloseRequestDictionary;
-(id)initWithCoder:(id)arg1 ;
@end

