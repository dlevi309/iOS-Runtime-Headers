/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOScreenDimension;

@interface GEOCarInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _engineTypes;
	SCD_Struct_GE90* _inputMethods;
	GEOScreenResolution _screenResolution;
	NSString* _carName;
	NSString* _manufacturer;
	NSString* _model;
	GEOScreenDimension* _screenDimension;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _brightness;
	int _colorRange;
	int _deviceConnection;
	int _navAidedDrivingStatus;
	BOOL _destinationSharingEnabled;
	struct {
		unsigned has_screenResolution : 1;
		unsigned has_brightness : 1;
		unsigned has_colorRange : 1;
		unsigned has_deviceConnection : 1;
		unsigned has_navAidedDrivingStatus : 1;
		unsigned has_destinationSharingEnabled : 1;
		unsigned read_unknownFields : 1;
		unsigned read_engineTypes : 1;
		unsigned read_inputMethods : 1;
		unsigned read_carName : 1;
		unsigned read_manufacturer : 1;
		unsigned read_model : 1;
		unsigned read_screenDimension : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer; 
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model; 
@property (assign,nonatomic) BOOL hasScreenResolution; 
@property (assign,nonatomic) GEOScreenResolution screenResolution; 
@property (assign,nonatomic) BOOL hasDeviceConnection; 
@property (assign,nonatomic) int deviceConnection; 
@property (assign,nonatomic) BOOL hasDestinationSharingEnabled; 
@property (assign,nonatomic) BOOL destinationSharingEnabled; 
@property (assign,nonatomic) BOOL hasNavAidedDrivingStatus; 
@property (assign,nonatomic) int navAidedDrivingStatus; 
@property (nonatomic,readonly) unsigned long long engineTypesCount; 
@property (nonatomic,readonly) int* engineTypes; 
@property (nonatomic,readonly) BOOL hasCarName; 
@property (nonatomic,retain) NSString * carName; 
@property (nonatomic,readonly) BOOL hasScreenDimension; 
@property (nonatomic,retain) GEOScreenDimension * screenDimension; 
@property (assign,nonatomic) BOOL hasColorRange; 
@property (assign,nonatomic) int colorRange; 
@property (assign,nonatomic) BOOL hasBrightness; 
@property (assign,nonatomic) int brightness; 
@property (nonatomic,readonly) unsigned long long inputMethodsCount; 
@property (nonatomic,readonly) int* inputMethods; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)carInfoWithTraits:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)model;
-(NSString *)manufacturer;
-(NSString *)carName;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasModel;
-(GEOScreenDimension *)screenDimension;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setScreenResolution:(GEOScreenResolution)arg1 ;
-(void)setDestinationSharingEnabled:(BOOL)arg1 ;
-(void)setCarName:(NSString *)arg1 ;
-(BOOL)hasCarName;
-(void)setNavAidedDrivingStatus:(int)arg1 ;
-(void)setScreenDimension:(GEOScreenDimension *)arg1 ;
-(void)setColorRange:(int)arg1 ;
-(void)addInputMethod:(int)arg1 ;
-(BOOL)hasManufacturer;
-(unsigned long long)inputMethodsCount;
-(void)clearInputMethods;
-(int)inputMethodAtIndex:(unsigned long long)arg1 ;
-(GEOScreenResolution)screenResolution;
-(BOOL)hasScreenResolution;
-(void)setHasScreenResolution:(BOOL)arg1 ;
-(void)setHasDeviceConnection:(BOOL)arg1 ;
-(id)deviceConnectionAsString:(int)arg1 ;
-(BOOL)hasScreenDimension;
-(int)StringAsDeviceConnection:(id)arg1 ;
-(BOOL)destinationSharingEnabled;
-(void)setHasDestinationSharingEnabled:(BOOL)arg1 ;
-(BOOL)hasDestinationSharingEnabled;
-(int)navAidedDrivingStatus;
-(void)setHasNavAidedDrivingStatus:(BOOL)arg1 ;
-(int)colorRange;
-(BOOL)hasNavAidedDrivingStatus;
-(id)navAidedDrivingStatusAsString:(int)arg1 ;
-(int)StringAsNavAidedDrivingStatus:(id)arg1 ;
-(void)setHasColorRange:(BOOL)arg1 ;
-(BOOL)hasColorRange;
-(void)setHasBrightness:(BOOL)arg1 ;
-(BOOL)hasBrightness;
-(int*)inputMethods;
-(void)setInputMethods:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)inputMethodsAsString:(int)arg1 ;
-(int)StringAsInputMethods:(id)arg1 ;
-(int)brightness;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setModel:(NSString *)arg1 ;
-(void)setDeviceConnection:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(int)deviceConnection;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addEngineType:(int)arg1 ;
-(unsigned long long)engineTypesCount;
-(void)clearEngineTypes;
-(int)engineTypeAtIndex:(unsigned long long)arg1 ;
-(int*)engineTypes;
-(void)setEngineTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)engineTypesAsString:(int)arg1 ;
-(int)StringAsEngineTypes:(id)arg1 ;
-(void)setBrightness:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDeviceConnection;
-(void)dealloc;
@end

