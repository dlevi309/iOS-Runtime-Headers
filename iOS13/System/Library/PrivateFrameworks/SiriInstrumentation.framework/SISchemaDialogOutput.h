/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaRedactableString, NSData;

@interface SISchemaDialogOutput : PBCodable {

	NSString* _viewID;
	SISchemaRedactableString* _spokenDialogOutput;
	SISchemaRedactableString* _displayedDialogOutput;

}

@property (nonatomic,copy) NSString * viewID;                                               //@synthesize viewID=_viewID - In the implementation block
@property (nonatomic,retain) SISchemaRedactableString * spokenDialogOutput;                 //@synthesize spokenDialogOutput=_spokenDialogOutput - In the implementation block
@property (nonatomic,retain) SISchemaRedactableString * displayedDialogOutput;              //@synthesize displayedDialogOutput=_displayedDialogOutput - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setViewID:(NSString *)arg1 ;
-(void)setSpokenDialogOutput:(SISchemaRedactableString *)arg1 ;
-(void)setDisplayedDialogOutput:(SISchemaRedactableString *)arg1 ;
-(NSString *)viewID;
-(SISchemaRedactableString *)spokenDialogOutput;
-(SISchemaRedactableString *)displayedDialogOutput;
@end

