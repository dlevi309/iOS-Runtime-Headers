/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBSuggestAutomationEvent : PBCodable <NSCopying> {

	NSString* _key;
	NSString* _source;
	NSString* _suggestedAutomationIdentifier;
	BOOL _completed;
	BOOL _interacted;
	SCD_Struct_WF2 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestedAutomationIdentifier; 
@property (nonatomic,retain) NSString * suggestedAutomationIdentifier;              //@synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasInteracted; 
@property (assign,nonatomic) BOOL interacted;                                       //@synthesize interacted=_interacted - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                                        //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) NSString * source;                                     //@synthesize source=_source - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(BOOL)hasSource;
-(BOOL)completed;
-(void)mergeFrom:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(void)setHasCompleted:(BOOL)arg1 ;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)source;
-(void)setInteracted:(BOOL)arg1 ;
-(void)setSuggestedAutomationIdentifier:(NSString *)arg1 ;
-(BOOL)hasSuggestedAutomationIdentifier;
-(void)setHasInteracted:(BOOL)arg1 ;
-(BOOL)hasInteracted;
-(NSString *)suggestedAutomationIdentifier;
-(BOOL)interacted;
@end

