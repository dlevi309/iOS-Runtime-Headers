/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBSetupSuggestedAutomationEvent : PBCodable <NSCopying> {

	unsigned _currentStep;
	NSString* _key;
	NSString* _suggestedAutomationIdentifier;
	BOOL _completed;
	SCD_Struct_WF2 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestedAutomationIdentifier; 
@property (nonatomic,retain) NSString * suggestedAutomationIdentifier;              //@synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentStep; 
@property (assign,nonatomic) unsigned currentStep;                                  //@synthesize currentStep=_currentStep - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                                        //@synthesize completed=_completed - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(unsigned)currentStep;
-(BOOL)completed;
-(void)mergeFrom:(id)arg1 ;
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
-(void)setSuggestedAutomationIdentifier:(NSString *)arg1 ;
-(BOOL)hasSuggestedAutomationIdentifier;
-(NSString *)suggestedAutomationIdentifier;
-(void)setCurrentStep:(unsigned)arg1 ;
-(void)setHasCurrentStep:(BOOL)arg1 ;
-(BOOL)hasCurrentStep;
@end

