/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSpringBoardBreadcrumb : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _entityID;
	NSString* _type;
	BOOL _wasTapped;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWasTapped; 
@property (assign,nonatomic) BOOL wasTapped;                            //@synthesize wasTapped=_wasTapped - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityID; 
@property (nonatomic,retain) NSString * entityID;                       //@synthesize entityID=_entityID - In the implementation block
-(NSString *)entityID;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasType;
-(void)setEntityID:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(BOOL)wasTapped;
-(id)description;
-(NSString *)type;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setWasTapped:(BOOL)arg1 ;
-(void)setHasWasTapped:(BOOL)arg1 ;
-(BOOL)hasWasTapped;
-(BOOL)hasEntityID;
@end

