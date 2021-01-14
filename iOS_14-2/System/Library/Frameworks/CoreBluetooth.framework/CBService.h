/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CBAttribute.h>

@class CBPeripheral, NSArray, NSNumber;

@interface CBService : CBAttribute {

	BOOL _isPrimary;
	CBPeripheral* _peripheral;
	NSArray* _includedServices;
	NSArray* _characteristics;
	NSNumber* _startHandle;
	NSNumber* _endHandle;

}

@property (assign,nonatomic) BOOL isPrimary;                           //@synthesize isPrimary=_isPrimary - In the implementation block
@property (retain) NSArray * includedServices;                         //@synthesize includedServices=_includedServices - In the implementation block
@property (retain) NSArray * characteristics;                          //@synthesize characteristics=_characteristics - In the implementation block
@property (nonatomic,readonly) NSNumber * startHandle;                 //@synthesize startHandle=_startHandle - In the implementation block
@property (nonatomic,readonly) NSNumber * endHandle;                   //@synthesize endHandle=_endHandle - In the implementation block
@property (nonatomic,readonly) CBPeripheral * peripheral;              //@synthesize peripheral=_peripheral - In the implementation block
-(BOOL)isPrimary;
-(id)description;
-(NSNumber *)endHandle;
-(id)initWithPeripheral:(id)arg1 dictionary:(id)arg2 ;
-(NSNumber *)startHandle;
-(NSArray *)includedServices;
-(void)setIncludedServices:(NSArray *)arg1 ;
-(CBPeripheral *)peripheral;
-(id)handleIncludedServicesDiscovered:(id)arg1 ;
-(id)handleCharacteristicsDiscovered:(id)arg1 ;
-(void)invalidate;
-(NSArray *)characteristics;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(void)setIsPrimary:(BOOL)arg1 ;
@end

