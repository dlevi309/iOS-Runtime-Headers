/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_CO1 _has;

}

@property (nonatomic,readonly) BOOL hasTagId; 
@property (nonatomic,retain) NSString * tagId;              //@synthesize tagId=_tagId - In the implementation block
@property (assign,nonatomic) BOOL hasGrade; 
@property (assign,nonatomic) int grade;                     //@synthesize grade=_grade - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                    //@synthesize source=_source - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasSource:(BOOL)arg1 ;
-(BOOL)hasSource;
-(int)grade;
-(NSString *)tagId;
-(BOOL)hasGrade;
-(void)setGrade:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSource:(int)arg1 ;
-(id)description;
-(void)setTagId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setHasGrade:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasTagId;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)source;
@end

