/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableFHIRIdentifier : PBCodable <NSCopying> {

	NSString* _identifier;
	NSString* _resourceType;

}

@property (nonatomic,readonly) BOOL hasResourceType; 
@property (nonatomic,retain) NSString * resourceType;              //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
-(id)dictionaryRepresentation;
-(void)setResourceType:(NSString *)arg1 ;
-(BOOL)hasIdentifier;
-(NSString *)resourceType;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasResourceType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

