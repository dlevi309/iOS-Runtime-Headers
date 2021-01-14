/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface PLQuery : PBCodable <NSCopying> {

	int _conjunction;
	PLQuery* _first;
	PLQuery* _second;
	NSMutableArray* _singleQueries;
	SCD_Struct_PL13 _has;

}

@property (assign,nonatomic) BOOL hasConjunction; 
@property (assign,nonatomic) int conjunction;                             //@synthesize conjunction=_conjunction - In the implementation block
@property (nonatomic,readonly) BOOL hasFirst; 
@property (nonatomic,retain) PLQuery * first;                             //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) BOOL hasSecond; 
@property (nonatomic,retain) PLQuery * second;                            //@synthesize second=_second - In the implementation block
@property (nonatomic,retain) NSMutableArray * singleQueries;              //@synthesize singleQueries=_singleQueries - In the implementation block
+(Class)singleQueriesType;
-(PLQuery *)second;
-(id)dictionaryRepresentation;
-(PLQuery *)first;
-(id)logDescription;
-(int)conjunction;
-(NSMutableArray *)singleQueries;
-(void)setFirst:(PLQuery *)arg1 ;
-(void)setSingleQueries:(NSMutableArray *)arg1 ;
-(void)setHasConjunction:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasFirst;
-(id)description;
-(id)singleQueriesAtIndex:(unsigned long long)arg1 ;
-(void)clearSingleQueries;
-(unsigned long long)singleQueriesCount;
-(BOOL)hasSecond;
-(void)addSingleQueries:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasConjunction;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setConjunction:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSecond:(PLQuery *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

