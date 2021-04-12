/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/SYChange.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface SYChange : PBCodable <SYChange, NSCopying> {

	unsigned long long _version;
	NSData* _changeData;
	NSString* _objectId;
	NSString* _sequencer;
	int _type;

}

@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * objectId;                        //@synthesize objectId=_objectId - In the implementation block
@property (assign,nonatomic) unsigned long long version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasChangeData; 
@property (nonatomic,retain) NSData * changeData;                        //@synthesize changeData=_changeData - In the implementation block
@property (nonatomic,readonly) BOOL hasSequencer; 
@property (nonatomic,retain) NSString * sequencer;                       //@synthesize sequencer=_sequencer - In the implementation block
+(id)changeWithObject:(id)arg1 updateType:(int)arg2 store:(id)arg3 ;
+(id)changeWithChangeObject:(id)arg1 serializer:(id)arg2 encodeUsingVersion:(long long)arg3 ;
+(id)changeWithChangeObject:(id)arg1 serializer:(id)arg2 ;
-(id)dictionaryRepresentation;
-(long long)changeType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(NSString *)objectId;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(NSString *)description;
-(NSString *)sequencer;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(NSString *)objectIdentifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)changeObjectWithSerializer:(id)arg1 encodedByVersion:(long long)arg2 ;
-(id)changeObjectWithSerializer:(id)arg1 ;
-(NSData *)changeData;
-(id)objectForStore:(id)arg1 ;
-(void)setObjectId:(NSString *)arg1 ;
-(void)setChangeData:(NSData *)arg1 ;
-(void)setSequencer:(NSString *)arg1 ;
-(BOOL)hasChangeData;
-(BOOL)hasSequencer;
@end

