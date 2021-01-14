/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWPBInterface : PBCodable <NSCopying> {

	unsigned _delegateIndex;
	unsigned _generation;
	unsigned _index;
	unsigned _mtu;
	NSString* _name;
	int _subtype;
	int _type;
	BOOL _expensive;
	SCD_Struct_NW34 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasSubtype; 
@property (assign,nonatomic) int subtype;                         //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) unsigned index;                      //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL hasGeneration; 
@property (assign,nonatomic) unsigned generation;                 //@synthesize generation=_generation - In the implementation block
@property (assign,nonatomic) BOOL hasDelegateIndex; 
@property (assign,nonatomic) unsigned delegateIndex;              //@synthesize delegateIndex=_delegateIndex - In the implementation block
@property (assign,nonatomic) BOOL hasMtu; 
@property (assign,nonatomic) unsigned mtu;                        //@synthesize mtu=_mtu - In the implementation block
@property (assign,nonatomic) BOOL hasExpensive; 
@property (assign,nonatomic) BOOL expensive;                      //@synthesize expensive=_expensive - In the implementation block
-(unsigned)mtu;
-(int)subtype;
-(id)dictionaryRepresentation;
-(void)setGeneration:(unsigned)arg1 ;
-(unsigned)index;
-(unsigned)generation;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasName;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasMtu;
-(void)setIndex:(unsigned)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setMtu:(unsigned)arg1 ;
-(NSString *)name;
-(BOOL)hasIndex;
-(id)description;
-(BOOL)expensive;
-(BOOL)hasSubtype;
-(void)setHasMtu:(BOOL)arg1 ;
-(void)setHasSubtype:(BOOL)arg1 ;
-(id)subtypeAsString:(int)arg1 ;
-(int)StringAsSubtype:(id)arg1 ;
-(void)setHasGeneration:(BOOL)arg1 ;
-(BOOL)hasGeneration;
-(void)setDelegateIndex:(unsigned)arg1 ;
-(void)setHasDelegateIndex:(BOOL)arg1 ;
-(BOOL)hasDelegateIndex;
-(void)setExpensive:(BOOL)arg1 ;
-(void)setHasExpensive:(BOOL)arg1 ;
-(BOOL)hasExpensive;
-(unsigned)delegateIndex;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSubtype:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasIndex:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

