/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, ICIAMMetricEvent, NSString;

@interface ICIAMMessageAction : PBCodable <NSCopying> {

	NSMutableArray* _actionParameters;
	ICIAMMetricEvent* _clickEvent;
	NSString* _displayText;
	NSString* _identifier;
	int _messageRemovalPolicy;
	NSString* _uRL;
	BOOL _requiresDelegate;
	SCD_Struct_IC3 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayText; 
@property (nonatomic,retain) NSString * displayText;                         //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,readonly) BOOL hasURL; 
@property (nonatomic,retain) NSString * uRL;                                 //@synthesize uRL=_uRL - In the implementation block
@property (assign,nonatomic) BOOL hasRequiresDelegate; 
@property (assign,nonatomic) BOOL requiresDelegate;                          //@synthesize requiresDelegate=_requiresDelegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionParameters;              //@synthesize actionParameters=_actionParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasClickEvent; 
@property (nonatomic,retain) ICIAMMetricEvent * clickEvent;                  //@synthesize clickEvent=_clickEvent - In the implementation block
@property (assign,nonatomic) BOOL hasMessageRemovalPolicy; 
@property (assign,nonatomic) int messageRemovalPolicy;                       //@synthesize messageRemovalPolicy=_messageRemovalPolicy - In the implementation block
+(Class)actionParametersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setURL:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(NSString *)uRL;
-(BOOL)hasURL;
-(BOOL)hasIdentifier;
-(BOOL)hasDisplayText;
-(NSMutableArray *)actionParameters;
-(void)addActionParameters:(id)arg1 ;
-(unsigned long long)actionParametersCount;
-(void)clearActionParameters;
-(id)actionParametersAtIndex:(unsigned long long)arg1 ;
-(void)setClickEvent:(ICIAMMetricEvent *)arg1 ;
-(BOOL)requiresDelegate;
-(void)setRequiresDelegate:(BOOL)arg1 ;
-(void)setHasRequiresDelegate:(BOOL)arg1 ;
-(BOOL)hasRequiresDelegate;
-(BOOL)hasClickEvent;
-(int)messageRemovalPolicy;
-(void)setMessageRemovalPolicy:(int)arg1 ;
-(void)setHasMessageRemovalPolicy:(BOOL)arg1 ;
-(BOOL)hasMessageRemovalPolicy;
-(id)messageRemovalPolicyAsString:(int)arg1 ;
-(int)StringAsMessageRemovalPolicy:(id)arg1 ;
-(void)setActionParameters:(NSMutableArray *)arg1 ;
-(ICIAMMetricEvent *)clickEvent;
@end

