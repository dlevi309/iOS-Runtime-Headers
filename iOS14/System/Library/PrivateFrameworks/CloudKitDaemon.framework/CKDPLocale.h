/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPLocale : PBCodable <NSCopying> {

	NSString* _languageCode;
	NSString* _regionCode;

}

@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) BOOL hasRegionCode; 
@property (nonatomic,retain) NSString * regionCode;                //@synthesize regionCode=_regionCode - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)regionCode;
-(BOOL)hasLanguageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSString *)languageCode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasRegionCode;
-(BOOL)isEqual:(id)arg1 ;
@end

