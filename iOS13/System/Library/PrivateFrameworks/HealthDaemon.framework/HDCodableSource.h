/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableSource : PBCodable <NSCopying> {

	double _modificationDate;
	long long _options;
	NSString* _bundleIdentifier;
	NSString* _name;
	NSString* _owningAppBundleIdentifier;
	NSString* _productType;
	NSData* _uuid;
	BOOL _deleted;
	SCD_Struct_HD3 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasProductType; 
@property (nonatomic,retain) NSString * productType;                            //@synthesize productType=_productType - In the implementation block
@property (assign,nonatomic) BOOL hasOptions; 
@property (assign,nonatomic) long long options;                                 //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDate; 
@property (assign,nonatomic) double modificationDate;                           //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) BOOL hasDeleted; 
@property (assign,nonatomic) BOOL deleted;                                      //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,readonly) BOOL hasOwningAppBundleIdentifier; 
@property (nonatomic,retain) NSString * owningAppBundleIdentifier;              //@synthesize owningAppBundleIdentifier=_owningAppBundleIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)options;
-(void)setName:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(id)dictionaryRepresentation;
-(NSData *)uuid;
-(void)setOptions:(long long)arg1 ;
-(double)modificationDate;
-(void)setUuid:(NSData *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)deleted;
-(BOOL)hasName;
-(NSString *)productType;
-(void)setModificationDate:(double)arg1 ;
-(BOOL)hasOptions;
-(void)setDeleted:(BOOL)arg1 ;
-(void)setHasDeleted:(BOOL)arg1 ;
-(BOOL)hasDeleted;
-(BOOL)hasBundleIdentifier;
-(BOOL)hasUuid;
-(void)setProductType:(NSString *)arg1 ;
-(BOOL)hasProductType;
-(void)setHasOptions:(BOOL)arg1 ;
-(BOOL)hasModificationDate;
-(void)setHasModificationDate:(BOOL)arg1 ;
-(id)decodedUUID;
-(NSString *)owningAppBundleIdentifier;
-(id)decodedModificationDate;
-(void)setOwningAppBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasOwningAppBundleIdentifier;
@end

