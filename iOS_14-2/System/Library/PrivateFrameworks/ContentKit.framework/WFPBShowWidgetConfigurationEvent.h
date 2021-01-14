/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBShowWidgetConfigurationEvent : PBCodable <NSCopying> {

	NSString* _appBundleIdentifier;
	NSString* _intentType;
	NSString* _key;
	NSString* _sizeClass;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleIdentifier; 
@property (nonatomic,retain) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentType; 
@property (nonatomic,retain) NSString * intentType;                       //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,readonly) BOOL hasSizeClass; 
@property (nonatomic,retain) NSString * sizeClass;                        //@synthesize sizeClass=_sizeClass - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)setSizeClass:(NSString *)arg1 ;
-(BOOL)hasIntentType;
-(void)setIntentType:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)sizeClass;
-(id)description;
-(NSString *)intentType;
-(NSString *)key;
-(unsigned long long)hash;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAppBundleIdentifier;
-(BOOL)hasSizeClass;
@end

