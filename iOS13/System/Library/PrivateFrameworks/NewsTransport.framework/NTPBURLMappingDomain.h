/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBURLMappingDomain : PBCodable <NSCopying> {

	double _averageSafariVisitsPerDay;
	NSString* _domain;
	NSMutableArray* _paths;

}

@property (nonatomic,retain) NSString * domain;                             //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSMutableArray * paths;                        //@synthesize paths=_paths - In the implementation block
@property (assign,nonatomic) double averageSafariVisitsPerDay;              //@synthesize averageSafariVisitsPerDay=_averageSafariVisitsPerDay - In the implementation block
+(Class)pathsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)paths;
-(unsigned long long)pathsCount;
-(void)clearPaths;
-(double)averageSafariVisitsPerDay;
-(void)setAverageSafariVisitsPerDay:(double)arg1 ;
-(void)addPaths:(id)arg1 ;
-(id)pathsAtIndex:(unsigned long long)arg1 ;
@end

