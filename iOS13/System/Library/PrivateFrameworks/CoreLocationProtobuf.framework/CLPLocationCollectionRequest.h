/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPAccessoryMeta, NSString, CLPMeta;

@interface CLPLocationCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _accessoryLocations;
	CLPAccessoryMeta* _accessoryMeta;
	NSString* _appBundleId;
	NSMutableArray* _appBundleIds;
	NSMutableArray* _locations;
	int _mcc;
	CLPMeta* _meta;
	int _mnc;
	int _rat;
	NSString* _tripId;
	SCD_Struct_CL1 _has;

}

@property (nonatomic,retain) CLPMeta * meta;                                   //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;                       //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                           //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,retain) NSString * tripId;                                //@synthesize tripId=_tripId - In the implementation block
@property (assign,nonatomic) BOOL hasRat; 
@property (assign,nonatomic) int rat;                                          //@synthesize rat=_rat - In the implementation block
@property (assign,nonatomic) BOOL hasMcc; 
@property (assign,nonatomic) int mcc;                                          //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) BOOL hasMnc; 
@property (assign,nonatomic) int mnc;                                          //@synthesize mnc=_mnc - In the implementation block
@property (nonatomic,retain) NSMutableArray * appBundleIds;                    //@synthesize appBundleIds=_appBundleIds - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryMeta; 
@property (nonatomic,retain) CLPAccessoryMeta * accessoryMeta;                 //@synthesize accessoryMeta=_accessoryMeta - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessoryLocations;              //@synthesize accessoryLocations=_accessoryLocations - In the implementation block
+(Class)locationType;
+(Class)appBundleIdsType;
+(Class)accessoryLocationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(int)rat;
-(void)setRat:(int)arg1 ;
-(NSString *)tripId;
-(void)setTripId:(NSString *)arg1 ;
-(NSMutableArray *)locations;
-(void)addLocation:(id)arg1 ;
-(unsigned long long)locationsCount;
-(void)clearLocations;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(BOOL)hasAppBundleId;
-(NSMutableArray *)appBundleIds;
-(void)setAppBundleIds:(NSMutableArray *)arg1 ;
-(CLPMeta *)meta;
-(void)setMeta:(CLPMeta *)arg1 ;
-(void)setHasRat:(BOOL)arg1 ;
-(BOOL)hasRat;
-(int)mcc;
-(void)setMcc:(int)arg1 ;
-(int)mnc;
-(void)setMnc:(int)arg1 ;
-(void)addAppBundleIds:(id)arg1 ;
-(void)addAccessoryLocation:(id)arg1 ;
-(unsigned long long)appBundleIdsCount;
-(void)clearAppBundleIds;
-(id)appBundleIdsAtIndex:(unsigned long long)arg1 ;
-(void)setAccessoryMeta:(CLPAccessoryMeta *)arg1 ;
-(unsigned long long)accessoryLocationsCount;
-(void)clearAccessoryLocations;
-(id)accessoryLocationAtIndex:(unsigned long long)arg1 ;
-(void)setHasMcc:(BOOL)arg1 ;
-(BOOL)hasMcc;
-(void)setHasMnc:(BOOL)arg1 ;
-(BOOL)hasMnc;
-(BOOL)hasAccessoryMeta;
-(CLPAccessoryMeta *)accessoryMeta;
-(NSMutableArray *)accessoryLocations;
-(void)setAccessoryLocations:(NSMutableArray *)arg1 ;
@end

