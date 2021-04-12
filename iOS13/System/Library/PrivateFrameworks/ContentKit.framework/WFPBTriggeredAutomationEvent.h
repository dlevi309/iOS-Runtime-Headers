/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBTriggeredAutomationEvent : PBCodable <NSCopying> {

	NSString* _key;
	NSString* _triggerType;
	BOOL _requiredRuntimeConfirmation;
	SCD_Struct_WF13 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasTriggerType; 
@property (nonatomic,retain) NSString * triggerType;                           //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) BOOL hasRequiredRuntimeConfirmation; 
@property (assign,nonatomic) BOOL requiredRuntimeConfirmation;                 //@synthesize requiredRuntimeConfirmation=_requiredRuntimeConfirmation - In the implementation block
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
-(BOOL)hasKey;
-(NSString *)triggerType;
-(void)setTriggerType:(NSString *)arg1 ;
-(BOOL)hasTriggerType;
-(void)setRequiredRuntimeConfirmation:(BOOL)arg1 ;
-(void)setHasRequiredRuntimeConfirmation:(BOOL)arg1 ;
-(BOOL)hasRequiredRuntimeConfirmation;
-(BOOL)requiredRuntimeConfirmation;
@end

