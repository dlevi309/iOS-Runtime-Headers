/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, SYMessageHeader, NSString;

@interface SYSyncAllObjects : PBCodable <NSCopying> {

	unsigned long long _version;
	NSMutableArray* _allObjects;
	SYMessageHeader* _header;
	NSString* _syncID;

}

@property (nonatomic,retain) SYMessageHeader * header;                 //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * syncID;                        //@synthesize syncID=_syncID - In the implementation block
@property (assign,nonatomic) unsigned long long version;               //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableArray * allObjects;              //@synthesize allObjects=_allObjects - In the implementation block
+(Class)allObjectsType;
-(id)dictionaryRepresentation;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(NSString *)syncID;
-(SYMessageHeader *)header;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)allObjects;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSyncID:(NSString *)arg1 ;
-(unsigned long long)allObjectsCount;
-(void)setAllObjects:(NSMutableArray *)arg1 ;
-(void)addAllObjects:(id)arg1 ;
-(void)clearAllObjects;
-(id)allObjectsAtIndex:(unsigned long long)arg1 ;
@end

