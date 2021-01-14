/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBTodayModuleDescriptor : PBCodable <NSCopying> {

	NSMutableArray* _availableContents;
	NSString* _identifier;
	int _type;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableArray * availableContents;              //@synthesize availableContents=_availableContents - In the implementation block
+(Class)availableContentsType;
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasIdentifier;
-(unsigned long long)availableContentsCount;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setAvailableContents:(NSMutableArray *)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(id)availableContentsAtIndex:(unsigned long long)arg1 ;
-(int)type;
-(NSMutableArray *)availableContents;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)writeTo:(id)arg1 ;
-(void)addAvailableContents:(id)arg1 ;
-(void)clearAvailableContents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

