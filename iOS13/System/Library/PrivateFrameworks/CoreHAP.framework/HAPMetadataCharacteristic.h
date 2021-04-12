/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber, HAPMetadataCharacteristicValue;

@interface HAPMetadataCharacteristic : HMFObject {

	NSString* _name;
	NSString* _chrDescription;
	NSString* _uuidStr;
	NSNumber* _properties;
	NSString* _format;
	NSString* _units;
	HAPMetadataCharacteristicValue* _valueMetadata;

}

@property (nonatomic,retain) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * chrDescription;                                   //@synthesize chrDescription=_chrDescription - In the implementation block
@property (nonatomic,retain) NSString * uuidStr;                                          //@synthesize uuidStr=_uuidStr - In the implementation block
@property (nonatomic,retain) NSNumber * properties;                                       //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSString * format;                                           //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSString * units;                                            //@synthesize units=_units - In the implementation block
@property (nonatomic,retain) HAPMetadataCharacteristicValue * valueMetadata;              //@synthesize valueMetadata=_valueMetadata - In the implementation block
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)dump;
-(NSString *)format;
-(NSNumber *)properties;
-(void)setProperties:(NSNumber *)arg1 ;
-(void)setFormat:(NSString *)arg1 ;
-(NSString *)units;
-(void)setUnits:(NSString *)arg1 ;
-(HAPMetadataCharacteristicValue *)valueMetadata;
-(void)setValueMetadata:(HAPMetadataCharacteristicValue *)arg1 ;
-(NSString *)chrDescription;
-(void)setChrDescription:(NSString *)arg1 ;
-(NSString *)uuidStr;
-(id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 format:(id)arg4 properties:(id)arg5 ;
-(id)generateDictionary:(id)arg1 ;
-(void)setUuidStr:(NSString *)arg1 ;
@end

