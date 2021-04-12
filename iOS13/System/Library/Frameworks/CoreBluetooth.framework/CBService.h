/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)invalidate;
-(BOOL)isPrimary;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(void)setIsPrimary:(BOOL)arg1 ;
-(NSArray *)characteristics;
-(CBPeripheral *)peripheral;
-(id)initWithPeripheral:(id)arg1 dictionary:(id)arg2 ;
-(NSNumber *)startHandle;
-(NSNumber *)endHandle;
-(NSArray *)includedServices;
-(void)setIncludedServices:(NSArray *)arg1 ;
-(id)handleIncludedServicesDiscovered:(id)arg1 ;
-(id)handleCharacteristicsDiscovered:(id)arg1 ;
@end

