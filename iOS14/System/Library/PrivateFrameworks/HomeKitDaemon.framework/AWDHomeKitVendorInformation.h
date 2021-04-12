/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitVendorInformation : PBCodable <NSCopying> {

	NSString* _category;
	NSString* _firmwareVersion;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _name;
	NSString* _productData;

}

@property (nonatomic,readonly) BOOL hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                        //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL hasFirmwareVersion; 
@property (nonatomic,retain) NSString * firmwareVersion;              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasProductData; 
@property (nonatomic,retain) NSString * productData;                  //@synthesize productData=_productData - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                     //@synthesize category=_category - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)firmwareVersion;
-(NSString *)model;
-(NSString *)manufacturer;
-(void)setCategory:(NSString *)arg1 ;
-(BOOL)hasName;
-(BOOL)hasModel;
-(void)setManufacturer:(NSString *)arg1 ;
-(BOOL)hasManufacturer;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)category;
-(BOOL)hasFirmwareVersion;
-(NSString *)name;
-(id)description;
-(void)setModel:(NSString *)arg1 ;
-(BOOL)hasCategory;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setProductData:(NSString *)arg1 ;
-(NSString *)productData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasProductData;
@end

