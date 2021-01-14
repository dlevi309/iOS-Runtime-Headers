/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitAttribution.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, PBUnknownFields, NSMutableArray, NSString;

@interface MSPTransitStorageAttribution : PBCodable <GEOTransitAttribution, NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _providerNames;

}

@property (getter=_providerNames,nonatomic,readonly) NSArray * providerNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * providerNames;                               //@synthesize providerNames=_providerNames - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)providerNamesType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(NSArray *)providerNames;
-(unsigned long long)providerNamesCount;
-(void)clearProviderNames;
-(id)_providerNames;
-(void)setProviderNames:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAttribution:(id)arg1 ;
-(void)addProviderNames:(id)arg1 ;
-(id)providerNamesAtIndex:(unsigned long long)arg1 ;
@end

