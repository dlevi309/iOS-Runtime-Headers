/*
* Generated on Thursday, January 14, 2021 at 2:23:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBTopStoriesStyleConfig : PBCodable <NSCopying> {

	NSString* _backgroundColor;
	NSString* _foregroundColor;
	NSString* _label;
	NSString* _type;

}

@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasForegroundColor; 
@property (nonatomic,retain) NSString * foregroundColor;              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColor; 
@property (nonatomic,retain) NSString * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(id)dictionaryRepresentation;
-(void)setForegroundColor:(NSString *)arg1 ;
-(BOOL)hasLabel;
-(NSString *)foregroundColor;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasForegroundColor;
-(void)setType:(NSString *)arg1 ;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(NSString *)backgroundColor;
-(id)description;
-(NSString *)type;
-(unsigned long long)hash;
-(BOOL)hasBackgroundColor;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

