/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaViewContainer : PBCodable {

	NSString* _viewID;
	NSString* _snippetClass;
	NSString* _dialogIdentifier;
	NSString* _dialogPhase;
	BOOL _hasViewID;
	BOOL _hasSnippetClass;
	BOOL _hasDialogIdentifier;
	BOOL _hasDialogPhase;

}

@property (nonatomic,copy) NSString * viewID;                        //@synthesize viewID=_viewID - In the implementation block
@property (assign,nonatomic) BOOL hasViewID;                         //@synthesize hasViewID=_hasViewID - In the implementation block
@property (nonatomic,copy) NSString * snippetClass;                  //@synthesize snippetClass=_snippetClass - In the implementation block
@property (assign,nonatomic) BOOL hasSnippetClass;                   //@synthesize hasSnippetClass=_hasSnippetClass - In the implementation block
@property (nonatomic,copy) NSString * dialogIdentifier;              //@synthesize dialogIdentifier=_dialogIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDialogIdentifier;               //@synthesize hasDialogIdentifier=_hasDialogIdentifier - In the implementation block
@property (nonatomic,copy) NSString * dialogPhase;                   //@synthesize dialogPhase=_dialogPhase - In the implementation block
@property (assign,nonatomic) BOOL hasDialogPhase;                    //@synthesize hasDialogPhase=_hasDialogPhase - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(NSString *)viewID;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)dialogPhase;
-(void)setDialogPhase:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)dialogIdentifier;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setViewID:(NSString *)arg1 ;
-(void)setSnippetClass:(NSString *)arg1 ;
-(BOOL)hasViewID;
-(void)setHasViewID:(BOOL)arg1 ;
-(BOOL)hasDialogPhase;
-(void)setHasDialogPhase:(BOOL)arg1 ;
-(BOOL)hasDialogIdentifier;
-(void)setHasDialogIdentifier:(BOOL)arg1 ;
-(NSString *)snippetClass;
-(BOOL)hasSnippetClass;
-(void)setHasSnippetClass:(BOOL)arg1 ;
@end

