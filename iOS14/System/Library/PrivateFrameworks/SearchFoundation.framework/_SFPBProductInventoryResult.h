/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBProductInventoryResult.h>
@class NSString, NSArray, NSData;


@protocol _SFPBProductInventoryResult <NSObject>
@property (nonatomic,copy) NSString * productIdentifier; 
@property (nonatomic,copy) NSArray * availabilitys; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)clearAvailability;
-(NSData *)jsonData;
-(void)setAvailabilitys:(id)arg1;
-(NSArray *)availabilitys;
-(void)setProductIdentifier:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)productIdentifier;
-(void)addAvailability:(id)arg1;
-(unsigned long long)availabilityCount;
-(id)availabilityAtIndex:(unsigned long long)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface _SFPBProductInventoryResult : PBCodable <_SFPBProductInventoryResult, NSSecureCoding> {

	NSString* _productIdentifier;
	NSArray* _availabilitys;

}

@property (nonatomic,copy) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * availabilitys;                   //@synthesize availabilitys=_availabilitys - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)clearAvailability;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)setAvailabilitys:(NSArray *)arg1 ;
-(NSArray *)availabilitys;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)productIdentifier;
-(void)addAvailability:(id)arg1 ;
-(unsigned long long)availabilityCount;
-(id)availabilityAtIndex:(unsigned long long)arg1 ;
-(void)setAvailability:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

