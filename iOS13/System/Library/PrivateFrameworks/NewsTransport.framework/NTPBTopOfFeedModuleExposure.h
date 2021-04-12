/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT4 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setModuleExposureId:(NSData *)arg1 ;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(int)moduleEventType;
-(void)setModuleEventType:(int)arg1 ;
-(void)setHasModuleEventType:(BOOL)arg1 ;
-(BOOL)hasModuleEventType;
-(id)moduleEventTypeAsString:(int)arg1 ;
-(int)StringAsModuleEventType:(id)arg1 ;
-(int)moduleLocation;
-(void)setModuleLocation:(int)arg1 ;
-(void)setHasModuleLocation:(BOOL)arg1 ;
-(BOOL)hasModuleLocation;
-(id)moduleLocationAsString:(int)arg1 ;
-(int)StringAsModuleLocation:(id)arg1 ;
-(void)setModuleItemCount:(int)arg1 ;
-(void)setHasModuleItemCount:(BOOL)arg1 ;
-(BOOL)hasModuleItemCount;
-(BOOL)hasModuleExposureId;
-(BOOL)hasFeedViewExposureId;
-(int)moduleItemCount;
-(NSData *)moduleExposureId;
-(NSData *)feedViewExposureId;
@end

