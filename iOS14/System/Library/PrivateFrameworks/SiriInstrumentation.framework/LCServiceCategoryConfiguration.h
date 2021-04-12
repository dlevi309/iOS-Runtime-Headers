/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class LCServiceLoggingParameters, LCServiceBlacklistedFields, NSData;

@interface LCServiceCategoryConfiguration : PBCodable {

	BOOL _hasEventType;
	BOOL _hasCategoryParameters;
	BOOL _hasBlacklist;
	int _eventType;
	LCServiceLoggingParameters* _categoryParameters;
	LCServiceBlacklistedFields* _blacklist;

}

@property (assign,nonatomic) int eventType;                                                //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasEventType;                                            //@synthesize hasEventType=_hasEventType - In the implementation block
@property (nonatomic,retain) LCServiceLoggingParameters * categoryParameters;              //@synthesize categoryParameters=_categoryParameters - In the implementation block
@property (assign,nonatomic) BOOL hasCategoryParameters;                                   //@synthesize hasCategoryParameters=_hasCategoryParameters - In the implementation block
@property (nonatomic,retain) LCServiceBlacklistedFields * blacklist;                       //@synthesize blacklist=_blacklist - In the implementation block
@property (assign,nonatomic) BOOL hasBlacklist;                                            //@synthesize hasBlacklist=_hasBlacklist - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(void)setEventType:(int)arg1 ;
-(int)eventType;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBlacklist:(LCServiceBlacklistedFields *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(LCServiceBlacklistedFields *)blacklist;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCategoryParameters:(LCServiceLoggingParameters *)arg1 ;
-(LCServiceLoggingParameters *)categoryParameters;
-(BOOL)hasCategoryParameters;
-(void)setHasCategoryParameters:(BOOL)arg1 ;
-(BOOL)hasBlacklist;
-(void)setHasBlacklist:(BOOL)arg1 ;
@end

