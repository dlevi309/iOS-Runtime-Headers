/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBSuggestAutomationEvent : PBCodable <NSCopying> {

	NSString* _key;
	NSString* _suggestedAutomationIdentifier;
	BOOL _completed;
	BOOL _interacted;
	SCD_Struct_WF12 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestedAutomationIdentifier; 
@property (nonatomic,retain) NSString * suggestedAutomationIdentifier;              //@synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasInteracted; 
@property (assign,nonatomic) BOOL interacted;                                       //@synthesize interacted=_interacted - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                                        //@synthesize completed=_completed - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)hasKey;
-(void)setHasCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(BOOL)hasSuggestedAutomationIdentifier;
-(void)setInteracted:(BOOL)arg1 ;
-(void)setHasInteracted:(BOOL)arg1 ;
-(BOOL)hasInteracted;
-(NSString *)suggestedAutomationIdentifier;
-(void)setSuggestedAutomationIdentifier:(NSString *)arg1 ;
-(BOOL)interacted;
@end

