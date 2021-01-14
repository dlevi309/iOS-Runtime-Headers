/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)hasPlaceholder;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(id)description;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

