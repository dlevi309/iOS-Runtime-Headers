/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <libobjc.A.dylib/BRLTBrailleTranslationDelegateProtocol.h>
#import <libobjc.A.dylib/BRLTBrailleStateManagerDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol BRLTBrailleStateManagerDelegate;
@class NSAttributedString, BRLTBrailleStateManager, NSString;

@interface SCROBrailleFormatter : NSObject <BRLTBrailleTranslationDelegateProtocol, BRLTBrailleStateManagerDelegate, NSCopying> {

	BOOL _outputShowEightDot;
	BOOL _inputShowEightDot;
	BOOL _showDotsSevenAndEight;
	BOOL _currentUnread;
	BOOL _anyUnread;
	int _lineFocus;
	int _outputContractionMode;
	int _inputContractionMode;
	int _displayMode;
	id _appToken;
	long long _lineOffset;
	NSAttributedString* _statusText;
	BRLTBrailleStateManager* _stateManager;
	long long _firstToken;
	long long _lastToken;
	unsigned long long _generationID;
	id<BRLTBrailleStateManagerDelegate> _outputDelegate;

}

@property (assign,nonatomic) int lineFocus;                                                          //@synthesize lineFocus=_lineFocus - In the implementation block
@property (nonatomic,readonly) int outputContractionMode;                                            //@synthesize outputContractionMode=_outputContractionMode - In the implementation block
@property (nonatomic,readonly) int inputContractionMode;                                             //@synthesize inputContractionMode=_inputContractionMode - In the implementation block
@property (nonatomic,readonly) BOOL outputShowEightDot;                                              //@synthesize outputShowEightDot=_outputShowEightDot - In the implementation block
@property (nonatomic,readonly) BOOL inputShowEightDot;                                               //@synthesize inputShowEightDot=_inputShowEightDot - In the implementation block
@property (nonatomic,readonly) BOOL showDotsSevenAndEight;                                           //@synthesize showDotsSevenAndEight=_showDotsSevenAndEight - In the implementation block
@property (assign,nonatomic) int displayMode;                                                        //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic) BOOL currentUnread;                                                     //@synthesize currentUnread=_currentUnread - In the implementation block
@property (assign,nonatomic) BOOL anyUnread;                                                         //@synthesize anyUnread=_anyUnread - In the implementation block
@property (nonatomic,retain) id appToken;                                                            //@synthesize appToken=_appToken - In the implementation block
@property (assign,nonatomic) long long lineOffset;                                                   //@synthesize lineOffset=_lineOffset - In the implementation block
@property (nonatomic,retain) NSAttributedString * statusText;                                        //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,readonly) BRLTBrailleStateManager * stateManager;                               //@synthesize stateManager=_stateManager - In the implementation block
@property (nonatomic,readonly) long long firstToken;                                                 //@synthesize firstToken=_firstToken - In the implementation block
@property (nonatomic,readonly) long long lastToken;                                                  //@synthesize lastToken=_lastToken - In the implementation block
@property (nonatomic,readonly) unsigned long long generationID;                                      //@synthesize generationID=_generationID - In the implementation block
@property (assign,nonatomic,__weak) id<BRLTBrailleStateManagerDelegate> outputDelegate;              //@synthesize outputDelegate=_outputDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)resetEditingManager;
-(NSAttributedString *)statusText;
-(unsigned long long)generationID;
-(id<BRLTBrailleStateManagerDelegate>)outputDelegate;
-(id)deepCopyWithZone:(NSZone*)arg1 ;
-(int)displayMode;
-(void)translate:(BOOL)arg1 ;
-(void)setDisplayMode:(int)arg1 ;
-(BRLTBrailleStateManager *)stateManager;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatusText:(NSAttributedString *)arg1 ;
-(void)translate;
-(id)appToken;
-(void)brailleDisplayInsertedCharacter:(id)arg1 ;
-(void)brailleDisplayStringDidChange:(id)arg1 brailleSelection:(NSRange)arg2 ;
-(id)printBrailleForText:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 textPositionsRange:(NSRange)arg4 locations:(id*)arg5 ;
-(void)brailleDisplayDeletedCharacter:(id)arg1 ;
-(id)textForPrintBraille:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 locations:(id*)arg4 ;
-(void)scriptSelectionDidChange:(NSRange)arg1 ;
-(void)replaceScriptStringRange:(NSRange)arg1 withScriptString:(id)arg2 cursorLocation:(unsigned long long)arg3 ;
-(void)didInsertScriptString:(id)arg1 ;
-(BOOL)showDotsSevenAndEight;
-(int)inputContractionMode;
-(BOOL)anyUnread;
-(BOOL)currentUnread;
-(void)addText:(id)arg1 selection:(NSRange*)arg2 token:(long long)arg3 focus:(NSRange*)arg4 isEditableText:(BOOL)arg5 ;
-(BOOL)inputShowEightDot;
-(BOOL)outputShowEightDot;
-(int)outputContractionMode;
-(long long)firstToken;
-(long long)lastToken;
-(long long)lineOffset;
-(void)addText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(NSRange*)arg4 token:(long long)arg5 focus:(NSRange*)arg6 technical:(BOOL)arg7 isEditableText:(BOOL)arg8 paddingRange:(NSRange)arg9 editingString:(id)arg10 ;
-(id)initWithOutputContractionMode:(int)arg1 inputContractionMode:(int)arg2 outputShowEightDot:(BOOL)arg3 inputShowEightDot:(BOOL)arg4 showDotsSevenAndEight:(BOOL)arg5 ;
-(void)setLineFocus:(int)arg1 ;
-(void)setCurrentUnread:(BOOL)arg1 ;
-(void)setAnyUnread:(BOOL)arg1 ;
-(void)addText:(id)arg1 selection:(NSRange*)arg2 token:(long long)arg3 focus:(NSRange*)arg4 technical:(BOOL)arg5 isEditableText:(BOOL)arg6 ;
-(void)setLineOffset:(long long)arg1 ;
-(void)setAppToken:(id)arg1 ;
-(NSRange)rangeOfBrailleCellRepresentingCharacterAtIndex:(unsigned long long)arg1 ;
-(int)lineFocus;
-(void)addText:(id)arg1 language:(id)arg2 selection:(NSRange*)arg3 token:(long long)arg4 focus:(NSRange*)arg5 isEditableText:(BOOL)arg6 ;
-(void)addText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(NSRange*)arg4 token:(long long)arg5 focus:(NSRange*)arg6 technical:(BOOL)arg7 isEditableText:(BOOL)arg8 ;
-(void)addText:(id)arg1 language:(id)arg2 selection:(NSRange*)arg3 token:(long long)arg4 focus:(NSRange*)arg5 technical:(BOOL)arg6 isEditableText:(BOOL)arg7 ;
-(void)setOutputDelegate:(id<BRLTBrailleStateManagerDelegate>)arg1 ;
@end

