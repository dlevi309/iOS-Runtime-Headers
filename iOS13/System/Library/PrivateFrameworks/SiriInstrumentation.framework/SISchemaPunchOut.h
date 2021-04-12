/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaViewContainer, NSData;

@interface SISchemaPunchOut : PBCodable {

	NSString* _appID;
	NSString* _urlScheme;
	SISchemaViewContainer* _viewContainer;
	NSData* _viewElementID;

}

@property (nonatomic,copy) NSString * appID;                                     //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy) NSString * urlScheme;                                 //@synthesize urlScheme=_urlScheme - In the implementation block
@property (nonatomic,retain) SISchemaViewContainer * viewContainer;              //@synthesize viewContainer=_viewContainer - In the implementation block
@property (nonatomic,copy) NSData * viewElementID;                               //@synthesize viewElementID=_viewElementID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)urlScheme;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)appID;
-(void)setAppID:(NSString *)arg1 ;
-(void)setViewContainer:(SISchemaViewContainer *)arg1 ;
-(void)setUrlScheme:(NSString *)arg1 ;
-(SISchemaViewContainer *)viewContainer;
-(void)setViewElementID:(NSData *)arg1 ;
-(NSData *)viewElementID;
@end

