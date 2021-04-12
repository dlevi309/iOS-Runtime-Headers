/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBRunShortcutEvent : PBCodable <NSCopying> {

	unsigned _actionCount;
	NSString* _automationType;
	NSString* _key;
	NSString* _runSource;
	int _source;
	BOOL _completed;
	SCD_Struct_WF21 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                             //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL hasRunSource; 
@property (nonatomic,retain) NSString * runSource;                   //@synthesize runSource=_runSource - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomationType; 
@property (nonatomic,retain) NSString * automationType;              //@synthesize automationType=_automationType - In the implementation block
@property (assign,nonatomic) BOOL hasActionCount; 
@property (assign,nonatomic) unsigned actionCount;                   //@synthesize actionCount=_actionCount - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                         //@synthesize completed=_completed - In the implementation block
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
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)hasKey;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(void)setHasCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(NSString *)runSource;
-(void)setRunSource:(NSString *)arg1 ;
-(void)setActionCount:(unsigned)arg1 ;
-(unsigned)actionCount;
-(void)setHasActionCount:(BOOL)arg1 ;
-(BOOL)hasActionCount;
-(BOOL)hasRunSource;
-(BOOL)hasAutomationType;
@end

