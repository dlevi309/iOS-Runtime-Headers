/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
*/

#import <libobjc.A.dylib/AERMCSingleAppModeConfigurationRepresentable.h>

@class MCSingleAppModeConfiguration;

@interface AERSingleAppModeConfiguration : NSObject <AERMCSingleAppModeConfigurationRepresentable> {

	BOOL _allowsAutoCorrection;
	BOOL _allowsSmartPunctuation;
	BOOL _allowsSpellCheck;
	BOOL _allowsPredictiveKeyboard;
	BOOL _allowsKeyboardShortcuts;
	BOOL _allowsActivityContinuation;
	BOOL _allowsDictation;
	BOOL _allowsAccessibilitySpeech;
	BOOL _allowsPasswordAutoFill;
	BOOL _allowsContinuousPathKeyboard;

}

@property (assign,nonatomic) BOOL allowsAutoCorrection;                                                                //@synthesize allowsAutoCorrection=_allowsAutoCorrection - In the implementation block
@property (assign,nonatomic) BOOL allowsSmartPunctuation;                                                              //@synthesize allowsSmartPunctuation=_allowsSmartPunctuation - In the implementation block
@property (assign,nonatomic) BOOL allowsSpellCheck;                                                                    //@synthesize allowsSpellCheck=_allowsSpellCheck - In the implementation block
@property (assign,nonatomic) BOOL allowsPredictiveKeyboard;                                                            //@synthesize allowsPredictiveKeyboard=_allowsPredictiveKeyboard - In the implementation block
@property (assign,nonatomic) BOOL allowsKeyboardShortcuts;                                                             //@synthesize allowsKeyboardShortcuts=_allowsKeyboardShortcuts - In the implementation block
@property (assign,nonatomic) BOOL allowsActivityContinuation;                                                          //@synthesize allowsActivityContinuation=_allowsActivityContinuation - In the implementation block
@property (assign,nonatomic) BOOL allowsDictation;                                                                     //@synthesize allowsDictation=_allowsDictation - In the implementation block
@property (assign,nonatomic) BOOL allowsAccessibilitySpeech;                                                           //@synthesize allowsAccessibilitySpeech=_allowsAccessibilitySpeech - In the implementation block
@property (assign,nonatomic) BOOL allowsPasswordAutoFill;                                                              //@synthesize allowsPasswordAutoFill=_allowsPasswordAutoFill - In the implementation block
@property (assign,nonatomic) BOOL allowsContinuousPathKeyboard;                                                        //@synthesize allowsContinuousPathKeyboard=_allowsContinuousPathKeyboard - In the implementation block
@property (nonatomic,readonly) MCSingleAppModeConfiguration * MCSingleAppModeConfigurationRepresentation; 
-(void)setAllowsAutoCorrection:(BOOL)arg1 ;
-(void)setAllowsSmartPunctuation:(BOOL)arg1 ;
-(BOOL)allowsSpellCheck;
-(void)setAllowsSpellCheck:(BOOL)arg1 ;
-(BOOL)allowsPredictiveKeyboard;
-(void)setAllowsPredictiveKeyboard:(BOOL)arg1 ;
-(BOOL)allowsKeyboardShortcuts;
-(void)setAllowsKeyboardShortcuts:(BOOL)arg1 ;
-(BOOL)allowsActivityContinuation;
-(void)setAllowsActivityContinuation:(BOOL)arg1 ;
-(BOOL)allowsDictation;
-(void)setAllowsDictation:(BOOL)arg1 ;
-(BOOL)allowsAccessibilitySpeech;
-(void)setAllowsAccessibilitySpeech:(BOOL)arg1 ;
-(BOOL)allowsPasswordAutoFill;
-(void)setAllowsPasswordAutoFill:(BOOL)arg1 ;
-(BOOL)allowsContinuousPathKeyboard;
-(void)setAllowsContinuousPathKeyboard:(BOOL)arg1 ;
-(BOOL)allowsAutoCorrection;
-(BOOL)allowsSmartPunctuation;
-(MCSingleAppModeConfiguration *)MCSingleAppModeConfigurationRepresentation;
@end

