/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, ICIAMTriggerCondition;

@interface ICIAMMessageRule : PBCodable <NSCopying> {

	NSString* _identifier;
	NSString* _requiredApplicationContextBundleIdentifier;
	int _ruleOperator;
	NSMutableArray* _subrules;
	ICIAMTriggerCondition* _triggerCondition;
	NSString* _triggerEventName;
	int _type;
	SCD_Struct_IC4 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasRuleOperator; 
@property (assign,nonatomic) int ruleOperator;                                                   //@synthesize ruleOperator=_ruleOperator - In the implementation block
@property (nonatomic,retain) NSMutableArray * subrules;                                          //@synthesize subrules=_subrules - In the implementation block
@property (nonatomic,readonly) BOOL hasTriggerCondition; 
@property (nonatomic,retain) ICIAMTriggerCondition * triggerCondition;                           //@synthesize triggerCondition=_triggerCondition - In the implementation block
@property (nonatomic,readonly) BOOL hasTriggerEventName; 
@property (nonatomic,retain) NSString * triggerEventName;                                        //@synthesize triggerEventName=_triggerEventName - In the implementation block
@property (nonatomic,readonly) BOOL hasRequiredApplicationContextBundleIdentifier; 
@property (nonatomic,retain) NSString * requiredApplicationContextBundleIdentifier;              //@synthesize requiredApplicationContextBundleIdentifier=_requiredApplicationContextBundleIdentifier - In the implementation block
+(Class)subrulesType;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(NSMutableArray *)subrules;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(void)addSubrules:(id)arg1 ;
-(unsigned long long)subrulesCount;
-(id)subrulesAtIndex:(unsigned long long)arg1 ;
-(void)clearSubrules;
-(void)setTriggerCondition:(ICIAMTriggerCondition *)arg1 ;
-(void)setTriggerEventName:(NSString *)arg1 ;
-(void)setRequiredApplicationContextBundleIdentifier:(NSString *)arg1 ;
-(int)ruleOperator;
-(void)setRuleOperator:(int)arg1 ;
-(void)setHasRuleOperator:(BOOL)arg1 ;
-(BOOL)hasRuleOperator;
-(id)ruleOperatorAsString:(int)arg1 ;
-(int)StringAsRuleOperator:(id)arg1 ;
-(BOOL)hasTriggerCondition;
-(BOOL)hasTriggerEventName;
-(BOOL)hasRequiredApplicationContextBundleIdentifier;
-(void)setSubrules:(NSMutableArray *)arg1 ;
-(ICIAMTriggerCondition *)triggerCondition;
-(NSString *)triggerEventName;
-(NSString *)requiredApplicationContextBundleIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

