/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(long long)changeType;
-(unsigned long long)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(NSString *)objectIdentifier;
-(NSString *)sequencer;
-(id)changeObjectWithSerializer:(id)arg1 encodedByVersion:(long long)arg2 ;
-(id)changeObjectWithSerializer:(id)arg1 ;
-(NSData *)changeData;
-(id)objectForStore:(id)arg1 ;
-(NSString *)objectId;
-(void)setObjectId:(NSString *)arg1 ;
-(void)setChangeData:(NSData *)arg1 ;
-(void)setSequencer:(NSString *)arg1 ;
-(BOOL)hasChangeData;
-(BOOL)hasSequencer;
@end

