/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_PL15 _has;

}

@property (assign,nonatomic) BOOL hasConjunction; 
@property (assign,nonatomic) int conjunction;                             //@synthesize conjunction=_conjunction - In the implementation block
@property (nonatomic,readonly) BOOL hasFirst; 
@property (nonatomic,retain) PLQuery * first;                             //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) BOOL hasSecond; 
@property (nonatomic,retain) PLQuery * second;                            //@synthesize second=_second - In the implementation block
@property (nonatomic,retain) NSMutableArray * singleQueries;              //@synthesize singleQueries=_singleQueries - In the implementation block
+(Class)singleQueriesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSecond:(PLQuery *)arg1 ;
-(PLQuery *)second;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PLQuery *)first;
-(void)setFirst:(PLQuery *)arg1 ;
-(NSMutableArray *)singleQueries;
-(BOOL)hasSecond;
-(BOOL)hasFirst;
-(unsigned long long)singleQueriesCount;
-(id)logDescription;
-(int)conjunction;
-(void)setSingleQueries:(NSMutableArray *)arg1 ;
-(void)setConjunction:(int)arg1 ;
-(BOOL)hasConjunction;
-(void)addSingleQueries:(id)arg1 ;
-(void)setHasConjunction:(BOOL)arg1 ;
-(void)clearSingleQueries;
-(id)singleQueriesAtIndex:(unsigned long long)arg1 ;
@end

