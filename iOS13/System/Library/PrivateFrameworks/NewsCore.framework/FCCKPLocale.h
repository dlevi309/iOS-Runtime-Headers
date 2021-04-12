/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)languageCode;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)activeKeyboard;
-(void)setActiveKeyboard:(NSString *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSString *)regionCode;
-(BOOL)hasLanguageCode;
-(void)setEnabledKeyboards:(NSMutableArray *)arg1 ;
-(void)addEnabledKeyboards:(id)arg1 ;
-(unsigned long long)enabledKeyboardsCount;
-(void)clearEnabledKeyboards;
-(id)enabledKeyboardsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRegionCode;
-(BOOL)hasActiveKeyboard;
-(NSMutableArray *)enabledKeyboards;
@end

