/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBRunShortcutEvent : PBCodable <NSCopying> {

	unsigned _actionCount;
	NSString* _automationSuggestionsTrialIdentifier;
	NSString* _automationType;
	NSString* _galleryIdentifier;
	NSString* _key;
	unsigned _numberOfDialogsPresented;
	NSString* _runSource;
	NSString* _shortcutSource;
	BOOL _completed;
	BOOL _didPresentShareSheet;
	BOOL _didRunRemotely;
	BOOL _isFromAutomationSuggestion;
	SCD_Struct_WF17 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                               //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasRunSource; 
@property (nonatomic,retain) NSString * runSource;                                         //@synthesize runSource=_runSource - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomationType; 
@property (nonatomic,retain) NSString * automationType;                                    //@synthesize automationType=_automationType - In the implementation block
@property (assign,nonatomic) BOOL hasActionCount; 
@property (assign,nonatomic) unsigned actionCount;                                         //@synthesize actionCount=_actionCount - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                                               //@synthesize completed=_completed - In the implementation block
@property (assign,nonatomic) BOOL hasDidRunRemotely; 
@property (assign,nonatomic) BOOL didRunRemotely;                                          //@synthesize didRunRemotely=_didRunRemotely - In the implementation block
@property (nonatomic,readonly) BOOL hasShortcutSource; 
@property (nonatomic,retain) NSString * shortcutSource;                                    //@synthesize shortcutSource=_shortcutSource - In the implementation block
@property (nonatomic,readonly) BOOL hasGalleryIdentifier; 
@property (nonatomic,retain) NSString * galleryIdentifier;                                 //@synthesize galleryIdentifier=_galleryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfDialogsPresented; 
@property (assign,nonatomic) unsigned numberOfDialogsPresented;                            //@synthesize numberOfDialogsPresented=_numberOfDialogsPresented - In the implementation block
@property (assign,nonatomic) BOOL hasDidPresentShareSheet; 
@property (assign,nonatomic) BOOL didPresentShareSheet;                                    //@synthesize didPresentShareSheet=_didPresentShareSheet - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromAutomationSuggestion; 
@property (assign,nonatomic) BOOL isFromAutomationSuggestion;                              //@synthesize isFromAutomationSuggestion=_isFromAutomationSuggestion - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomationSuggestionsTrialIdentifier; 
@property (nonatomic,retain) NSString * automationSuggestionsTrialIdentifier;              //@synthesize automationSuggestionsTrialIdentifier=_automationSuggestionsTrialIdentifier - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(BOOL)completed;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(void)setHasCompleted:(BOOL)arg1 ;
-(NSString *)key;
-(unsigned long long)hash;
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
-(void)setGalleryIdentifier:(NSString *)arg1 ;
-(void)setShortcutSource:(NSString *)arg1 ;
-(void)setActionCount:(unsigned)arg1 ;
-(unsigned)actionCount;
-(NSString *)galleryIdentifier;
-(void)setAutomationSuggestionsTrialIdentifier:(NSString *)arg1 ;
-(BOOL)didRunRemotely;
-(void)setDidRunRemotely:(BOOL)arg1 ;
-(unsigned)numberOfDialogsPresented;
-(void)setNumberOfDialogsPresented:(unsigned)arg1 ;
-(void)setIsFromAutomationSuggestion:(BOOL)arg1 ;
-(void)setHasDidRunRemotely:(BOOL)arg1 ;
-(BOOL)hasDidRunRemotely;
-(void)setHasActionCount:(BOOL)arg1 ;
-(BOOL)hasActionCount;
-(BOOL)hasGalleryIdentifier;
-(BOOL)hasShortcutSource;
-(NSString *)shortcutSource;
-(NSString *)automationSuggestionsTrialIdentifier;
-(BOOL)isFromAutomationSuggestion;
-(BOOL)hasAutomationType;
-(BOOL)hasAutomationSuggestionsTrialIdentifier;
-(BOOL)hasRunSource;
-(void)setHasNumberOfDialogsPresented:(BOOL)arg1 ;
-(BOOL)hasNumberOfDialogsPresented;
-(void)setDidPresentShareSheet:(BOOL)arg1 ;
-(void)setHasDidPresentShareSheet:(BOOL)arg1 ;
-(BOOL)hasDidPresentShareSheet;
-(void)setHasIsFromAutomationSuggestion:(BOOL)arg1 ;
-(BOOL)hasIsFromAutomationSuggestion;
-(BOOL)didPresentShareSheet;
@end

