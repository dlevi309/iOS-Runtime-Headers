/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBTopOfFeedModuleExposure : PBCodable <NSCopying> {

	NSData* _feedViewExposureId;
	int _moduleEventType;
	NSData* _moduleExposureId;
	int _moduleItemCount;
	int _moduleLocation;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasModuleEventType; 
@property (assign,nonatomic) int moduleEventType;                       //@synthesize moduleEventType=_moduleEventType - In the implementation block
@property (assign,nonatomic) BOOL hasModuleLocation; 
@property (assign,nonatomic) int moduleLocation;                        //@synthesize moduleLocation=_moduleLocation - In the implementation block
@property (assign,nonatomic) BOOL hasModuleItemCount; 
@property (assign,nonatomic) int moduleItemCount;                       //@synthesize moduleItemCount=_moduleItemCount - In the implementation block
@property (nonatomic,readonly) BOOL hasModuleExposureId; 
@property (nonatomic,retain) NSData * moduleExposureId;                 //@synthesize moduleExposureId=_moduleExposureId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;               //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
-(id)moduleEventTypeAsString:(int)arg1 ;
-(void)setHasModuleEventType:(BOOL)arg1 ;
-(int)moduleLocation;
-(void)setHasModuleLocation:(BOOL)arg1 ;
-(int)moduleItemCount;
-(int)moduleEventType;
-(BOOL)hasFeedViewExposureId;
-(id)dictionaryRepresentation;
-(void)setModuleExposureId:(NSData *)arg1 ;
-(NSData *)feedViewExposureId;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasModuleLocation;
-(void)setModuleEventType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasModuleExposureId;
-(id)description;
-(int)StringAsModuleEventType:(id)arg1 ;
-(void)setModuleItemCount:(int)arg1 ;
-(void)setModuleLocation:(int)arg1 ;
-(NSData *)moduleExposureId;
-(unsigned long long)hash;
-(BOOL)hasModuleItemCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasModuleItemCount:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasModuleEventType;
-(id)moduleLocationAsString:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)StringAsModuleLocation:(id)arg1 ;
@end

