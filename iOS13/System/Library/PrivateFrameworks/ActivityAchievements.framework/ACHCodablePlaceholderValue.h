/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
*/

#import <ActivityAchievements/ActivityAchievements-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ACHCodablePlaceholderValue : PBCodable <NSCopying> {

	NSString* _placeholder;
	NSString* _value;

}

@property (nonatomic,readonly) BOOL hasPlaceholder; 
@property (nonatomic,retain) NSString * placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSString * value;                    //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(BOOL)hasValue;
-(BOOL)hasPlaceholder;
@end

