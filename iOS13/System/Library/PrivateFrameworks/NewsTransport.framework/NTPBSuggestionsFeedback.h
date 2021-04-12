/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)feedback;
-(void)setFeedback:(NSString *)arg1 ;
-(BOOL)hasFeedback;
-(void)addGrades:(id)arg1 ;
-(void)clearGrades;
-(unsigned long long)gradesCount;
-(id)gradesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)grades;
-(void)setGrades:(NSMutableArray *)arg1 ;
@end

