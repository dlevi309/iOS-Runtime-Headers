/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ACProtobufDataclassAction : PBCodable <NSCopying> {

	NSMutableArray* _affectedContainers;
	int _type;
	BOOL _destructive;

}

@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL destructive;                                 //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,retain) NSMutableArray * affectedContainers;              //@synthesize affectedContainers=_affectedContainers - In the implementation block
+(Class)affectedContainersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addAffectedContainers:(id)arg1 ;
-(unsigned long long)affectedContainersCount;
-(void)clearAffectedContainers;
-(id)affectedContainersAtIndex:(unsigned long long)arg1 ;
-(BOOL)destructive;
-(void)setDestructive:(BOOL)arg1 ;
-(NSMutableArray *)affectedContainers;
-(void)setAffectedContainers:(NSMutableArray *)arg1 ;
@end

