/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMDEmergencyCallInfoPublisherConfiguration : NSObject <NSSecureCoding> {

	NSString* _serverHost;

}

@property (nonatomic,copy) NSString * serverHost;              //@synthesize serverHost=_serverHost - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serverHost;
-(void)setServerHost:(NSString *)arg1 ;
@end

