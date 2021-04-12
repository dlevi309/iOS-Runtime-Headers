/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_providerNames,nonatomic,readonly) NSArray * providerNames; 
@property (nonatomic,retain) NSMutableArray * providerNames;                               //@synthesize providerNames=_providerNames - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)providerNamesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSArray *)providerNames;
-(unsigned long long)providerNamesCount;
-(void)clearProviderNames;
-(void)setProviderNames:(NSArray *)arg1 ;
-(id)_providerNames;
-(id)initWithAttribution:(id)arg1 ;
-(void)addProviderNames:(id)arg1 ;
-(id)providerNamesAtIndex:(unsigned long long)arg1 ;
@end

