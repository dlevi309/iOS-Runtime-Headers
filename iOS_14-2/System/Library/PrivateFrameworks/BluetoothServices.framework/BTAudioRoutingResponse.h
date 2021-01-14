/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServices.framework/BluetoothServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError;

@interface BTAudioRoutingResponse : NSObject <NSSecureCoding> {

	int _action;
	unsigned _clientID;
	NSString* _deviceAddress;
	NSError* _error;
	NSString* _reason;

}

@property (assign,nonatomic) int action;                          //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned clientID;                   //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSString * deviceAddress;              //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,copy) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)clientID;
-(void)setClientID:(unsigned)arg1 ;
-(NSString *)deviceAddress;
-(void)setDeviceAddress:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(NSString *)reason;
-(id)initWithCoder:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

