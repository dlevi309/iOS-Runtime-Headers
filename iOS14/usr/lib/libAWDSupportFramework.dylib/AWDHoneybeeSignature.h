/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDHoneybeeSignature : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _instances;
	NSMutableArray* _keywords;
	NSString* _radarAttachmentFilename;
	NSMutableArray* _radarAttachmentTypes;
	NSString* _radarAttachmentUUID;
	NSString* _radarComponent;
	NSString* _radarDescription;
	NSString* _radarSignature;
	NSString* _radarTitle;
	NSString* _radarVersion;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasRadarTitle; 
@property (nonatomic,retain) NSString * radarTitle;                              //@synthesize radarTitle=_radarTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasRadarSignature; 
@property (nonatomic,retain) NSString * radarSignature;                          //@synthesize radarSignature=_radarSignature - In the implementation block
@property (nonatomic,readonly) BOOL hasRadarDescription; 
@property (nonatomic,retain) NSString * radarDescription;                        //@synthesize radarDescription=_radarDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasRadarComponent; 
@property (nonatomic,retain) NSString * radarComponent;                          //@synthesize radarComponent=_radarComponent - In the implementation block
@property (nonatomic,readonly) BOOL hasRadarVersion; 
@property (nonatomic,retain) NSString * radarVersion;                            //@synthesize radarVersion=_radarVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasRadarAttachmentUUID; 
@property (nonatomic,retain) NSString * radarAttachmentUUID;                     //@synthesize radarAttachmentUUID=_radarAttachmentUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * radarAttachmentTypes;              //@synthesize radarAttachmentTypes=_radarAttachmentTypes - In the implementation block
@property (nonatomic,readonly) BOOL hasRadarAttachmentFilename; 
@property (nonatomic,retain) NSString * radarAttachmentFilename;                 //@synthesize radarAttachmentFilename=_radarAttachmentFilename - In the implementation block
@property (nonatomic,retain) NSMutableArray * keywords;                          //@synthesize keywords=_keywords - In the implementation block
@property (assign,nonatomic) BOOL hasInstances; 
@property (assign,nonatomic) int instances;                                      //@synthesize instances=_instances - In the implementation block
+(Class)keywordsType;
+(Class)radarAttachmentTypesType;
-(id)dictionaryRepresentation;
-(void)setKeywords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)keywords;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)keywordsCount;
-(void)clearKeywords;
-(id)keywordsAtIndex:(unsigned long long)arg1 ;
-(int)instances;
-(id)description;
-(void)addKeywords:(id)arg1 ;
-(NSString *)radarTitle;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)radarDescription;
-(void)setRadarDescription:(NSString *)arg1 ;
-(void)setRadarTitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setInstances:(int)arg1 ;
-(void)setRadarSignature:(NSString *)arg1 ;
-(void)setRadarComponent:(NSString *)arg1 ;
-(void)setRadarVersion:(NSString *)arg1 ;
-(void)setRadarAttachmentUUID:(NSString *)arg1 ;
-(void)setRadarAttachmentTypes:(NSMutableArray *)arg1 ;
-(void)setRadarAttachmentFilename:(NSString *)arg1 ;
-(void)addRadarAttachmentTypes:(id)arg1 ;
-(unsigned long long)radarAttachmentTypesCount;
-(void)clearRadarAttachmentTypes;
-(id)radarAttachmentTypesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRadarTitle;
-(BOOL)hasRadarSignature;
-(BOOL)hasRadarDescription;
-(BOOL)hasRadarComponent;
-(BOOL)hasRadarVersion;
-(BOOL)hasRadarAttachmentUUID;
-(BOOL)hasRadarAttachmentFilename;
-(void)setHasInstances:(BOOL)arg1 ;
-(BOOL)hasInstances;
-(NSString *)radarSignature;
-(NSString *)radarComponent;
-(NSString *)radarVersion;
-(NSString *)radarAttachmentUUID;
-(NSMutableArray *)radarAttachmentTypes;
-(NSString *)radarAttachmentFilename;
@end
