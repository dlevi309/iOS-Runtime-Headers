/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOPDMapsIdentifier, NSData;

@interface GEOMapItemIdentifier : NSObject <NSCopying, NSSecureCoding> {

	GEOPDMapsIdentifier* _mapsIdentifier;

}

@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) SCD_Struct_GE32 coordinate; 
@property (nonatomic,readonly) int resultProviderID; 
@property (getter=hasCoordinate,nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,readonly) NSData * comparableRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)mapItemIdentifiersFromMapsIdentifiers:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_GE32)coordinate;
-(unsigned long long)muid;
-(BOOL)hasCoordinate;
-(id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(SCD_Struct_GE32)arg3 ;
-(id)initWithMapsIdentifier:(id)arg1 ;
-(id)initWithPlace:(id)arg1 ;
-(BOOL)isEqualToGEOMapItemIdentifier:(id)arg1 ;
-(id)initWithMUID:(unsigned long long)arg1 coordinate:(SCD_Struct_GE32)arg2 ;
-(id)initWithXPCCoder:(id)arg1 ;
-(void)encodeWithXPCCoder:(id)arg1 ;
-(int)resultProviderID;
-(id)initWithMUID:(unsigned long long)arg1 ;
-(id)initWithBasemapId:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(SCD_Struct_GE32)arg3 ;
-(id)initWithMapItem:(id)arg1 ;
-(id)mapsIdentifier;
-(id)shortDebugDescription;
-(NSData *)comparableRepresentation;
@end

