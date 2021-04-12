/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPlaceDataCacheUsageFeedbackCollection : PBCodable <NSCopying> {

	NSMutableArray* _cacheFeedbacks;

}

@property (nonatomic,retain) NSMutableArray * cacheFeedbacks; 
+(BOOL)isValid:(id)arg1 ;
+(Class)cacheFeedbackType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addCacheFeedback:(id)arg1 ;
-(unsigned long long)cacheFeedbacksCount;
-(void)clearCacheFeedbacks;
-(id)cacheFeedbackAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)cacheFeedbacks;
-(void)setCacheFeedbacks:(NSMutableArray *)arg1 ;
@end

