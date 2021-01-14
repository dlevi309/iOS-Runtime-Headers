/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBSuggestionsFeedback : PBCodable <NSCopying> {

	NSString* _feedback;
	NSMutableArray* _grades;

}

@property (nonatomic,retain) NSMutableArray * grades;              //@synthesize grades=_grades - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedback; 
@property (nonatomic,retain) NSString * feedback;                  //@synthesize feedback=_feedback - In the implementation block
+(Class)gradesType;
-(void)setFeedback:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasFeedback;
-(NSString *)feedback;
-(NSMutableArray *)grades;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)addGrades:(id)arg1 ;
-(void)clearGrades;
-(unsigned long long)gradesCount;
-(id)gradesAtIndex:(unsigned long long)arg1 ;
-(void)setGrades:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

