/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ENAccountKey, ENDeviceKey;
@interface ENAccountIdentity : NSObject <NSSecureCoding> {

	id<ENAccountKey> _accountKey;
	id<ENDeviceKey> _deviceKey;

}

@property (nonatomic,retain) id<ENAccountKey> accountKey;              //@synthesize accountKey=_accountKey - In the implementation block
@property (nonatomic,retain) id<ENDeviceKey> deviceKey;                //@synthesize deviceKey=_deviceKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ENAccountKey>)accountKey;
-(id<ENDeviceKey>)deviceKey;
-(id)initWithAccountKey:(id)arg1 deviceKey:(id)arg2 ;
-(void)setAccountKey:(id<ENAccountKey>)arg1 ;
-(void)setDeviceKey:(id<ENDeviceKey>)arg1 ;
@end

