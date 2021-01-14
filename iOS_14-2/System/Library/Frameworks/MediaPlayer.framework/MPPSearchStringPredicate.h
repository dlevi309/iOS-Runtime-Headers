/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface MPPSearchStringPredicate : PBCodable <NSCopying> {

	NSMutableArray* _properties;
	NSString* _searchString;

}

@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                  //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSMutableArray * properties;              //@synthesize properties=_properties - In the implementation block
-(id)dictionaryRepresentation;
-(NSMutableArray *)properties;
-(unsigned long long)propertiesCount;
-(void)clearProperties;
-(void)addProperties:(id)arg1 ;
-(id)description;
-(id)propertiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasSearchString;
-(BOOL)readFrom:(id)arg1 ;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

