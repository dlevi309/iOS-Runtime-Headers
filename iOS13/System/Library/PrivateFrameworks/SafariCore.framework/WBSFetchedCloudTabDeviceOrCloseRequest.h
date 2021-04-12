/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuidString;
-(id)initWithUUIDString:(id)arg1 deviceOrCloseRequestDictionary:(id)arg2 ;
-(NSDictionary *)deviceOrCloseRequestDictionary;
@end

