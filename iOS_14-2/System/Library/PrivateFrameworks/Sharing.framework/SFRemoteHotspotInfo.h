/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _password;
	NSNumber* _channel;

}

@property (copy) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (copy) NSString * password;               //@synthesize password=_password - In the implementation block
@property (retain) NSNumber * channel;              //@synthesize channel=_channel - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithName:(id)arg1 password:(id)arg2 channel:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setChannel:(NSNumber *)arg1 ;
-(NSString *)password;
-(NSNumber *)channel;
-(NSString *)name;
-(id)description;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

