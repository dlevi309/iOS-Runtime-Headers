/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@protocol OS_dispatch_queue;
#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSString, BRLTTranslationService, NSObject;

@interface SCROBrailleTranslationManager : NSObject {

	BOOL _tableSupportsContractedBraille;
	BOOL _tableSupportsEightDotBraille;
	BOOL _alwaysUsesNemethCodeForTechnicalText;
	NSString* _queue_defaultLanguage;
	BRLTTranslationService* _translationService;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) BRLTTranslationService * translationService;               //@synthesize translationService=_translationService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL primaryTableSupportsContractedBraille;              //@synthesize tableSupportsContractedBraille=_tableSupportsContractedBraille - In the implementation block
@property (nonatomic,readonly) BOOL primaryTableSupportsEightDotBraille;                //@synthesize tableSupportsEightDotBraille=_tableSupportsEightDotBraille - In the implementation block
@property (assign,nonatomic) BOOL alwaysUsesNemethCodeForTechnicalText;                 //@synthesize alwaysUsesNemethCodeForTechnicalText=_alwaysUsesNemethCodeForTechnicalText - In the implementation block
@property (nonatomic,copy) NSString * defaultLanguage;                                  //@synthesize queue_defaultLanguage=_queue_defaultLanguage - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)defaultLanguage;
-(id)printBrailleForText:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 textPositionsRange:(NSRange)arg4 locations:(id*)arg5 ;
-(id)textForPrintBraille:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 locations:(id*)arg4 ;
-(void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg1 ;
-(BOOL)alwaysUsesNemethCodeForTechnicalText;
-(BOOL)primaryTableSupportsEightDotBraille;
-(BOOL)primaryTableSupportsContractedBraille;
-(void)loadTranslatorWithServiceIdentifier:(id)arg1 ;
-(void)setDefaultLanguage:(NSString *)arg1 ;
-(BOOL)primaryTableSupportsRoundTripping;
-(void)loadTranslatorWithServiceIdentifier:(id)arg1 forUnitTesting:(BOOL)arg2 ;
-(BRLTTranslationService *)translationService;
-(void)setTranslationService:(BRLTTranslationService *)arg1 ;
@end

