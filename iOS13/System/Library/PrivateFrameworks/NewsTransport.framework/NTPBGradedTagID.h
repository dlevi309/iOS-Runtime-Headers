/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBGradedTagID : PBCodable <NSCopying> {

	int _grade;
	int _source;
	NSString* _tagId;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,readonly) BOOL hasTagId; 
@property (nonatomic,retain) NSString * tagId;              //@synthesize tagId=_tagId - In the implementation block
@property (assign,nonatomic) BOOL hasGrade; 
@property (assign,nonatomic) int grade;                     //@synthesize grade=_grade - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                    //@synthesize source=_source - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(int)arg1 ;
-(int)source;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSource;
-(void)setHasSource:(BOOL)arg1 ;
-(int)grade;
-(void)setGrade:(int)arg1 ;
-(NSString *)tagId;
-(void)setTagId:(NSString *)arg1 ;
-(BOOL)hasTagId;
-(void)setHasGrade:(BOOL)arg1 ;
-(BOOL)hasGrade;
@end

