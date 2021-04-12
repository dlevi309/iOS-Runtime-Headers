/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithAccountKey:(id)arg1 deviceKey:(id)arg2 ;
-(id<ENAccountKey>)accountKey;
-(id<ENDeviceKey>)deviceKey;
-(void)setAccountKey:(id<ENAccountKey>)arg1 ;
-(void)setDeviceKey:(id<ENDeviceKey>)arg1 ;
@end

