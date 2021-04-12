/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol AFUISiriLanguageDelegate;
@class NSString;

@interface AFUISiriLanguage : NSObject {

	BOOL _setupAssistantHasCompletedInitialRunChecked;
	BOOL _setupAssistantHasCompletedInitialRunAvailable;
	NSString* _spokenLanguageCode;
	id<AFUISiriLanguageDelegate> _delegate;

}

@property (getter=_delegate,nonatomic,__weak,readonly) id<AFUISiriLanguageDelegate> delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setSpokenLanguageCode:,nonatomic,copy) NSString * spokenLanguageCode;                                                            //@synthesize spokenLanguageCode=_spokenLanguageCode - In the implementation block
@property (assign,nonatomic) BOOL setupAssistantHasCompletedInitialRunChecked;                                                                      //@synthesize setupAssistantHasCompletedInitialRunChecked=_setupAssistantHasCompletedInitialRunChecked - In the implementation block
@property (assign,getter=_setupAssistantHasCompletedInitialRunAvailable,nonatomic) BOOL setupAssistantHasCompletedInitialRunAvailable;              //@synthesize setupAssistantHasCompletedInitialRunAvailable=_setupAssistantHasCompletedInitialRunAvailable - In the implementation block
-(id)init;
-(void)dealloc;
-(id)_delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(id)_computeSpokenLanguageCode;
-(void)_spokenLanguageDidChange:(id)arg1 ;
-(void)_updateSpokenLanguageCode;
-(void)_setSpokenLanguageCode:(id)arg1 ;
-(BOOL)_setupAssistantHasCompletedInitialRunAvailable;
-(NSString *)spokenLanguageCode;
-(BOOL)setupAssistantHasCompletedInitialRunChecked;
-(void)setSetupAssistantHasCompletedInitialRunChecked:(BOOL)arg1 ;
-(void)setSetupAssistantHasCompletedInitialRunAvailable:(BOOL)arg1 ;
@end

