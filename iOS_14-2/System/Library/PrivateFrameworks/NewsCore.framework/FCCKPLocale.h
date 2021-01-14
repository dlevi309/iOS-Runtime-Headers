/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface FCCKPLocale : PBCodable <NSCopying> {

	NSString* _activeKeyboard;
	NSMutableArray* _enabledKeyboards;
	NSString* _languageCode;
	NSString* _regionCode;

}

@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                        //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) BOOL hasRegionCode; 
@property (nonatomic,retain) NSString * regionCode;                          //@synthesize regionCode=_regionCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * enabledKeyboards;              //@synthesize enabledKeyboards=_enabledKeyboards - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveKeyboard; 
@property (nonatomic,retain) NSString * activeKeyboard;                      //@synthesize activeKeyboard=_activeKeyboard - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)regionCode;
-(BOOL)hasLanguageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(unsigned long long)enabledKeyboardsCount;
-(void)clearEnabledKeyboards;
-(void)setEnabledKeyboards:(NSMutableArray *)arg1 ;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSString *)languageCode;
-(void)mergeFrom:(id)arg1 ;
-(void)setActiveKeyboard:(NSString *)arg1 ;
-(id)description;
-(NSString *)activeKeyboard;
-(void)addEnabledKeyboards:(id)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)enabledKeyboards;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasActiveKeyboard;
-(void)writeTo:(id)arg1 ;
-(id)enabledKeyboardsAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasRegionCode;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

