/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@class NSData, NSString, NSDate;

@interface OspreyConnectionPreferences : NSObject {

	NSData* _deviceAttestationData;
	NSString* _connectionHost;
	NSDate* _deviceAttestionExpireOn;

}

@property (nonatomic,copy) NSString * connectionHost;                      //@synthesize connectionHost=_connectionHost - In the implementation block
@property (nonatomic,copy) NSDate * deviceAttestionExpireOn;               //@synthesize deviceAttestionExpireOn=_deviceAttestionExpireOn - In the implementation block
@property (nonatomic,readonly) BOOL isDeviceAttestionExpired; 
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithConnectionHost:(id)arg1 ;
-(NSString *)connectionHost;
-(BOOL)isDeviceAttestionExpired;
-(BOOL)setDeviceAttestationData:(id)arg1 withExpiration:(id)arg2 ;
-(id)deviceAttestationData;
-(void)deleteDeviceAttestationData;
-(void)setConnectionHost:(NSString *)arg1 ;
-(NSDate *)deviceAttestionExpireOn;
-(void)setDeviceAttestionExpireOn:(NSDate *)arg1 ;
@end

