/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBTodaySectionIdentifierToGroupTypes : PBCodable <NSCopying> {

	SCD_Struct_NT10* _groupTypes;
	NSString* _personalizationSectionIdentifier;

}

@property (nonatomic,retain) NSString * personalizationSectionIdentifier;              //@synthesize personalizationSectionIdentifier=_personalizationSectionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long groupTypesCount; 
@property (nonatomic,readonly) int* groupTypes; 
-(id)dictionaryRepresentation;
-(unsigned long long)groupTypesCount;
-(int)groupTypesAtIndex:(unsigned long long)arg1 ;
-(NSString *)personalizationSectionIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int*)groupTypes;
-(unsigned long long)hash;
-(void)setPersonalizationSectionIdentifier:(NSString *)arg1 ;
-(void)addGroupTypes:(int)arg1 ;
-(void)clearGroupTypes;
-(void)setGroupTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)groupTypesAsString:(int)arg1 ;
-(int)StringAsGroupTypes:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

