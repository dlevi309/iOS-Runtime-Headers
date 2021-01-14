/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ATXPBHomeScreenWidgetIdentifiable : PBCodable <NSCopying> {

	NSString* _appBundleId;
	NSString* _extensionBundleId;
	NSData* _intent;
	int _size;
	NSString* _widgetKind;
	NSString* _widgetUniqueId;
	SCD_Struct_AT1 _has;

}

@property (nonatomic,readonly) BOOL hasExtensionBundleId; 
@property (nonatomic,retain) NSString * extensionBundleId;              //@synthesize extensionBundleId=_extensionBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetKind; 
@property (nonatomic,retain) NSString * widgetKind;                     //@synthesize widgetKind=_widgetKind - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                    //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasIntent; 
@property (nonatomic,retain) NSData * intent;                           //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetUniqueId; 
@property (nonatomic,retain) NSString * widgetUniqueId;                 //@synthesize widgetUniqueId=_widgetUniqueId - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) int size;                                  //@synthesize size=_size - In the implementation block
-(NSString *)extensionBundleId;
-(NSData *)intent;
-(id)dictionaryRepresentation;
-(BOOL)hasAppBundleId;
-(NSString *)widgetKind;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(void)setWidgetUniqueId:(NSString *)arg1 ;
-(int)size;
-(id)sizeAsString:(int)arg1 ;
-(void)setExtensionBundleId:(NSString *)arg1 ;
-(void)setIntent:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSize:(int)arg1 ;
-(BOOL)hasSize;
-(id)description;
-(void)setWidgetKind:(NSString *)arg1 ;
-(unsigned long long)hash;
-(int)StringAsSize:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIntent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasWidgetKind;
-(void)setHasSize:(BOOL)arg1 ;
-(NSString *)widgetUniqueId;
-(BOOL)hasWidgetUniqueId;
-(BOOL)hasExtensionBundleId;
@end

