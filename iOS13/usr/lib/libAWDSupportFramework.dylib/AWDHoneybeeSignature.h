/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSMutableArray *)keywords;
-(void)setKeywords:(NSMutableArray *)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)addKeywords:(id)arg1 ;
-(unsigned long long)keywordsCount;
-(void)clearKeywords;
-(id)keywordsAtIndex:(unsigned long long)arg1 ;
-(NSString *)radarDescription;
-(int)instances;
-(void)setRadarDescription:(NSString *)arg1 ;
-(NSString *)radarTitle;
-(void)setRadarTitle:(NSString *)arg1 ;
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

