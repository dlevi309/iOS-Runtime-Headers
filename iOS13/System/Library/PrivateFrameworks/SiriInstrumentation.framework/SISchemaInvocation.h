/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaViewContainer, NSData;

@interface SISchemaInvocation : PBCodable {

	int _invocationAction;
	int _invocationSource;
	SISchemaViewContainer* _viewContainer;

}

@property (assign,nonatomic) int invocationAction;                               //@synthesize invocationAction=_invocationAction - In the implementation block
@property (assign,nonatomic) int invocationSource;                               //@synthesize invocationSource=_invocationSource - In the implementation block
@property (nonatomic,retain) SISchemaViewContainer * viewContainer;              //@synthesize viewContainer=_viewContainer - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setInvocationSource:(int)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setViewContainer:(SISchemaViewContainer *)arg1 ;
-(void)setInvocationAction:(int)arg1 ;
-(int)invocationAction;
-(int)invocationSource;
-(SISchemaViewContainer *)viewContainer;
@end

