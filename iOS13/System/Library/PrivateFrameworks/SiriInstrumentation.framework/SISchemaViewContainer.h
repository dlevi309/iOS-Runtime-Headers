/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaViewContainer : PBCodable {

	NSString* _viewID;
	NSString* _snippetClass;
	NSString* _dialogIdentifier;
	NSString* _dialogPhase;

}

@property (nonatomic,copy) NSString * viewID;                        //@synthesize viewID=_viewID - In the implementation block
@property (nonatomic,copy) NSString * snippetClass;                  //@synthesize snippetClass=_snippetClass - In the implementation block
@property (nonatomic,copy) NSString * dialogIdentifier;              //@synthesize dialogIdentifier=_dialogIdentifier - In the implementation block
@property (nonatomic,copy) NSString * dialogPhase;                   //@synthesize dialogPhase=_dialogPhase - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)dialogPhase;
-(void)setDialogPhase:(NSString *)arg1 ;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)dialogIdentifier;
-(void)setViewID:(NSString *)arg1 ;
-(void)setSnippetClass:(NSString *)arg1 ;
-(NSString *)viewID;
-(NSString *)snippetClass;
@end

