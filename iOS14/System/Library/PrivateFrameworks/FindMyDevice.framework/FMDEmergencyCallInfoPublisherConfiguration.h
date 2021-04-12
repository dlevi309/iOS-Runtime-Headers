/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMDEmergencyCallInfoPublisherConfiguration : NSObject <NSSecureCoding> {

	NSString* _serverHost;

}

@property (nonatomic,copy) NSString * serverHost;              //@synthesize serverHost=_serverHost - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)serverHost;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setServerHost:(NSString *)arg1 ;
@end

