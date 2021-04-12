/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FCCKPConfigurationFieldValue;

@interface FCCKPConfigurationField : PBCodable <NSCopying> {

	NSString* _name;
	FCCKPConfigurationFieldValue* _value;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) FCCKPConfigurationFieldValue * value;              //@synthesize value=_value - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasName;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(void)setValue:(FCCKPConfigurationFieldValue *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCCKPConfigurationFieldValue *)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

