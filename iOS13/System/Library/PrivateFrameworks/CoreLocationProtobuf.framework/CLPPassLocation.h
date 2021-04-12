/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPLocation, NSString;

@interface CLPPassLocation : PBCodable <NSCopying> {

	double _age;
	NSMutableArray* _associatedStoreIds;
	CLPLocation* _location;
	int _passSource;
	NSString* _passTypeId;
	int _serverHash;
	SCD_Struct_CL9 _has;

}

@property (nonatomic,retain) NSString * passTypeId;                            //@synthesize passTypeId=_passTypeId - In the implementation block
@property (nonatomic,retain) NSMutableArray * associatedStoreIds;              //@synthesize associatedStoreIds=_associatedStoreIds - In the implementation block
@property (assign,nonatomic) int passSource;                                   //@synthesize passSource=_passSource - In the implementation block
@property (assign,nonatomic) BOOL hasAge; 
@property (assign,nonatomic) double age;                                       //@synthesize age=_age - In the implementation block
@property (nonatomic,retain) CLPLocation * location;                           //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                                   //@synthesize serverHash=_serverHash - In the implementation block
+(Class)associatedStoreIdType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(CLPLocation *)location;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(CLPLocation *)arg1 ;
-(double)age;
-(void)setAge:(double)arg1 ;
-(void)setHasAge:(BOOL)arg1 ;
-(BOOL)hasAge;
-(void)setServerHash:(int)arg1 ;
-(void)setHasServerHash:(BOOL)arg1 ;
-(BOOL)hasServerHash;
-(int)serverHash;
-(void)addAssociatedStoreId:(id)arg1 ;
-(void)setPassTypeId:(NSString *)arg1 ;
-(unsigned long long)associatedStoreIdsCount;
-(void)clearAssociatedStoreIds;
-(id)associatedStoreIdAtIndex:(unsigned long long)arg1 ;
-(NSString *)passTypeId;
-(NSMutableArray *)associatedStoreIds;
-(void)setAssociatedStoreIds:(NSMutableArray *)arg1 ;
-(int)passSource;
-(void)setPassSource:(int)arg1 ;
@end

