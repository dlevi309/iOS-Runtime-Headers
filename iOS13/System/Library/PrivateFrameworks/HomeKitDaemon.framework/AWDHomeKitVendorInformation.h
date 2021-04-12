/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)model;
-(void)writeTo:(id)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(BOOL)hasCategory;
-(NSString *)firmwareVersion;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(BOOL)hasManufacturer;
-(BOOL)hasModel;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(BOOL)hasFirmwareVersion;
-(void)setProductData:(NSString *)arg1 ;
-(NSString *)productData;
-(BOOL)hasProductData;
@end

