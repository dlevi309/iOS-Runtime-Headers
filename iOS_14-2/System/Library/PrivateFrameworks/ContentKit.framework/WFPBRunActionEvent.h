/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBRunActionEvent : PBCodable <NSCopying> {

	NSString* _actionIdentifier;
	NSString* _automationType;
	NSString* _key;
	NSString* _runSource;
	NSString* _shortcutSource;
	BOOL _completed;
	BOOL _didRunRemotely;
	SCD_Struct_WF2 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasRunSource; 
@property (nonatomic,retain) NSString * runSource;                     //@synthesize runSource=_runSource - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                           //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) BOOL hasActionIdentifier; 
@property (nonatomic,retain) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasShortcutSource; 
@property (nonatomic,retain) NSString * shortcutSource;                //@synthesize shortcutSource=_shortcutSource - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomationType; 
@property (nonatomic,retain) NSString * automationType;                //@synthesize automationType=_automationType - In the implementation block
@property (assign,nonatomic) BOOL hasDidRunRemotely; 
@property (assign,nonatomic) BOOL didRunRemotely;                      //@synthesize didRunRemotely=_didRunRemotely - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(BOOL)completed;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(void)setHasCompleted:(BOOL)arg1 ;
-(NSString *)key;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)actionIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)runSource;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRunSource:(NSString *)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setShortcutSource:(NSString *)arg1 ;
-(BOOL)didRunRemotely;
-(void)setDidRunRemotely:(BOOL)arg1 ;
-(BOOL)hasActionIdentifier;
-(void)setHasDidRunRemotely:(BOOL)arg1 ;
-(BOOL)hasDidRunRemotely;
-(BOOL)hasShortcutSource;
-(NSString *)shortcutSource;
-(BOOL)hasAutomationType;
-(BOOL)hasRunSource;
@end

