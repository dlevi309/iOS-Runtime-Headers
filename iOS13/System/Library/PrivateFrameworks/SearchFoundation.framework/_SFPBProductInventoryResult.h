/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1;
-(void)setProductIdentifier:(id)arg1;
-(NSString *)productIdentifier;
-(NSData *)jsonData;
-(void)setAvailabilitys:(id)arg1;
-(NSArray *)availabilitys;
-(id)initWithJSON:(id)arg1;
-(void)addAvailability:(id)arg1;
-(void)clearAvailability;
-(unsigned long long)availabilityCount;
-(id)availabilityAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface _SFPBProductInventoryResult : PBCodable <_SFPBProductInventoryResult, NSSecureCoding> {

	NSString* _productIdentifier;
	NSArray* _availabilitys;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * availabilitys;                   //@synthesize availabilitys=_availabilitys - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)setAvailabilitys:(NSArray *)arg1 ;
-(NSArray *)availabilitys;
-(void)setAvailability:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addAvailability:(id)arg1 ;
-(void)clearAvailability;
-(unsigned long long)availabilityCount;
-(id)availabilityAtIndex:(unsigned long long)arg1 ;
@end

