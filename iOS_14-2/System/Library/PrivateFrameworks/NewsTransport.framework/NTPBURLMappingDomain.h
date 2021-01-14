/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NSMutableArray *)paths;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(unsigned long long)pathsCount;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(double)averageSafariVisitsPerDay;
-(void)setAverageSafariVisitsPerDay:(double)arg1 ;
-(id)description;
-(void)addPaths:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearPaths;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)pathsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

