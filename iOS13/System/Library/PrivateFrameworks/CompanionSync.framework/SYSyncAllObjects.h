/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)allObjects;
-(unsigned long long)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SYMessageHeader *)header;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(NSString *)syncID;
-(void)setSyncID:(NSString *)arg1 ;
-(unsigned long long)allObjectsCount;
-(void)setAllObjects:(NSMutableArray *)arg1 ;
-(void)addAllObjects:(id)arg1 ;
-(void)clearAllObjects;
-(id)allObjectsAtIndex:(unsigned long long)arg1 ;
@end

