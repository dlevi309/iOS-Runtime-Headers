/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HDCodableFHIRResourceForAPI : PBCodable <NSCopying> {

	double _lastUpdatedDate;
	NSData* _data;
	NSString* _identifier;
	NSString* _resourceType;
	NSString* _sourceURL;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasResourceType; 
@property (nonatomic,retain) NSString * resourceType;              //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL;                 //@synthesize sourceURL=_sourceURL - In the implementation block
@property (assign,nonatomic) BOOL hasLastUpdatedDate; 
@property (assign,nonatomic) double lastUpdatedDate;               //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(NSString *)identifier;
-(void)setData:(NSData *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(NSString *)resourceType;
-(void)setResourceType:(NSString *)arg1 ;
-(BOOL)hasResourceType;
-(BOOL)hasIdentifier;
-(BOOL)hasData;
-(BOOL)hasSourceURL;
-(double)lastUpdatedDate;
-(void)setLastUpdatedDate:(double)arg1 ;
-(void)setHasLastUpdatedDate:(BOOL)arg1 ;
-(BOOL)hasLastUpdatedDate;
@end

