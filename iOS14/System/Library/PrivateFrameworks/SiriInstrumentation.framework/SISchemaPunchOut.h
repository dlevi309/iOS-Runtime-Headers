/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaViewContainer, NSData;

@interface SISchemaPunchOut : PBCodable {

	NSString* _appID;
	NSString* _urlScheme;
	SISchemaViewContainer* _viewContainer;
	NSData* _viewElementID;
	BOOL _hasAppID;
	BOOL _hasUrlScheme;
	BOOL _hasViewContainer;
	BOOL _hasViewElementID;

}

@property (nonatomic,copy) NSString * appID;                                     //@synthesize appID=_appID - In the implementation block
@property (assign,nonatomic) BOOL hasAppID;                                      //@synthesize hasAppID=_hasAppID - In the implementation block
@property (nonatomic,copy) NSString * urlScheme;                                 //@synthesize urlScheme=_urlScheme - In the implementation block
@property (assign,nonatomic) BOOL hasUrlScheme;                                  //@synthesize hasUrlScheme=_hasUrlScheme - In the implementation block
@property (nonatomic,retain) SISchemaViewContainer * viewContainer;              //@synthesize viewContainer=_viewContainer - In the implementation block
@property (assign,nonatomic) BOOL hasViewContainer;                              //@synthesize hasViewContainer=_hasViewContainer - In the implementation block
@property (nonatomic,copy) NSData * viewElementID;                               //@synthesize viewElementID=_viewElementID - In the implementation block
@property (assign,nonatomic) BOOL hasViewElementID;                              //@synthesize hasViewElementID=_hasViewElementID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSString *)appID;
-(NSData *)jsonData;
-(NSString *)urlScheme;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasAppID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setAppID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setViewContainer:(SISchemaViewContainer *)arg1 ;
-(void)setUrlScheme:(NSString *)arg1 ;
-(SISchemaViewContainer *)viewContainer;
-(BOOL)hasViewContainer;
-(void)setHasViewContainer:(BOOL)arg1 ;
-(void)setViewElementID:(NSData *)arg1 ;
-(NSData *)viewElementID;
-(BOOL)hasUrlScheme;
-(BOOL)hasViewElementID;
-(void)setHasAppID:(BOOL)arg1 ;
-(void)setHasUrlScheme:(BOOL)arg1 ;
-(void)setHasViewElementID:(BOOL)arg1 ;
@end

