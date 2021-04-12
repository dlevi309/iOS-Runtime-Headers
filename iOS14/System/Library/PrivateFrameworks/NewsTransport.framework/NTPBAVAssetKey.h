/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCAVAssetKeyType.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDate, NTPBDate, NSString;

@interface NTPBAVAssetKey : PBCodable <FCAVAssetKeyType, FCKeyValueStoreCoding, NSCopying> {

	NTPBDate* _createdAt;
	NSData* _data;
	NTPBDate* _expiresAt;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) BOOL isExpired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL hasCreatedAt; 
@property (nonatomic,retain) NTPBDate * createdAt;                   //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) BOOL hasExpiresAt; 
@property (nonatomic,retain) NTPBDate * expiresAt;                   //@synthesize expiresAt=_expiresAt - In the implementation block
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
-(void)writeToKeyValuePair:(id)arg1 ;
-(NSDate *)creationDate;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(id)dictionaryRepresentation;
-(BOOL)hasCreatedAt;
-(void)setCreatedAt:(NTPBDate *)arg1 ;
-(NTPBDate *)createdAt;
-(BOOL)hasIdentifier;
-(BOOL)hasData;
-(void)mergeFrom:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSString *)description;
-(NTPBDate *)expiresAt;
-(NSData *)data;
-(BOOL)hasExpiresAt;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setExpiresAt:(NTPBDate *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

