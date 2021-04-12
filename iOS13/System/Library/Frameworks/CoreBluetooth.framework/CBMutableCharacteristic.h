/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CBCharacteristic.h>

@class NSMutableArray, NSNumber, NSArray, NSData;

@interface CBMutableCharacteristic : CBCharacteristic {

	NSMutableArray* _subscribedCentrals;
	unsigned long long _permissions;
	NSNumber* _ID;

}

@property (retain) NSNumber * ID;                                         //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) unsigned long long permissions;              //@synthesize permissions=_permissions - In the implementation block
@property (retain,readonly) NSArray * subscribedCentrals;                 //@synthesize subscribedCentrals=_subscribedCentrals - In the implementation block
@property (assign,nonatomic) unsigned long long properties; 
@property (retain) NSData * value; 
@property (retain) NSArray * descriptors; 
-(void)dealloc;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)permissions;
-(NSNumber *)ID;
-(void)setPermissions:(unsigned long long)arg1 ;
-(id)initWithService:(id)arg1 dictionary:(id)arg2 ;
-(id)initWithType:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 permissions:(unsigned long long)arg4 ;
-(BOOL)handleCentralSubscribed:(id)arg1 ;
-(BOOL)handleCentralUnsubscribed:(id)arg1 ;
-(void)handlePowerNotOn;
-(NSArray *)subscribedCentrals;
-(void)setID:(NSNumber *)arg1 ;
@end

