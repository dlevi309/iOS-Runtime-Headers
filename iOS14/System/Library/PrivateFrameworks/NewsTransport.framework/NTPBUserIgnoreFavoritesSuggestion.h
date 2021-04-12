/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBUserIgnoreFavoritesSuggestion : PBCodable <NSCopying> {

	int _ignoreLocation;
	NSString* _ignoredFeedId;
	int _ignoredFeedType;
	int _suggestionPositionWhenIgnored;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasIgnoredFeedType; 
@property (assign,nonatomic) int ignoredFeedType;                                //@synthesize ignoredFeedType=_ignoredFeedType - In the implementation block
@property (assign,nonatomic) BOOL hasIgnoreLocation; 
@property (assign,nonatomic) int ignoreLocation;                                 //@synthesize ignoreLocation=_ignoreLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasIgnoredFeedId; 
@property (nonatomic,retain) NSString * ignoredFeedId;                           //@synthesize ignoredFeedId=_ignoredFeedId - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionPositionWhenIgnored; 
@property (assign,nonatomic) int suggestionPositionWhenIgnored;                  //@synthesize suggestionPositionWhenIgnored=_suggestionPositionWhenIgnored - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(int)ignoredFeedType;
-(void)setIgnoredFeedId:(NSString *)arg1 ;
-(void)setIgnoredFeedType:(int)arg1 ;
-(void)setHasIgnoredFeedType:(BOOL)arg1 ;
-(BOOL)hasIgnoredFeedType;
-(int)ignoreLocation;
-(void)setIgnoreLocation:(int)arg1 ;
-(void)setHasIgnoreLocation:(BOOL)arg1 ;
-(BOOL)hasIgnoreLocation;
-(BOOL)hasIgnoredFeedId;
-(void)setSuggestionPositionWhenIgnored:(int)arg1 ;
-(void)setHasSuggestionPositionWhenIgnored:(BOOL)arg1 ;
-(BOOL)hasSuggestionPositionWhenIgnored;
-(NSString *)ignoredFeedId;
-(BOOL)readFrom:(id)arg1 ;
-(int)suggestionPositionWhenIgnored;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

