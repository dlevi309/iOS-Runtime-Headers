/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2EventICSOpportunity : PBCodable <NSCopying> {

	NSString* _key;
	int _recipient;
	int _source;
	BOOL _accountSetup;
	SCD_Struct_SG4 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                        //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasRecipient; 
@property (assign,nonatomic) int recipient;                     //@synthesize recipient=_recipient - In the implementation block
@property (assign,nonatomic) BOOL hasAccountSetup; 
@property (assign,nonatomic) BOOL accountSetup;                 //@synthesize accountSetup=_accountSetup - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)setSource:(int)arg1 ;
-(int)source;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSource;
-(BOOL)hasKey;
-(void)setRecipient:(int)arg1 ;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(int)recipient;
-(BOOL)hasRecipient;
-(void)setHasRecipient:(BOOL)arg1 ;
-(id)recipientAsString:(int)arg1 ;
-(int)StringAsRecipient:(id)arg1 ;
-(void)setAccountSetup:(BOOL)arg1 ;
-(void)setHasAccountSetup:(BOOL)arg1 ;
-(BOOL)hasAccountSetup;
-(BOOL)accountSetup;
@end

