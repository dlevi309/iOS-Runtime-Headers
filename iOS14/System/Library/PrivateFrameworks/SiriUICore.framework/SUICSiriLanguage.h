/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/


@protocol SUICSiriLanguageDelegate;
@class NSString;

@interface SUICSiriLanguage : NSObject {

	BOOL _setupAssistantHasCompletedInitialRunChecked;
	BOOL _setupAssistantHasCompletedInitialRunAvailable;
	NSString* _spokenLanguageCode;
	id<SUICSiriLanguageDelegate> _delegate;

}

@property (getter=_delegate,nonatomic,__weak,readonly) id<SUICSiriLanguageDelegate> delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setSpokenLanguageCode:,nonatomic,copy) NSString * spokenLanguageCode;                                                            //@synthesize spokenLanguageCode=_spokenLanguageCode - In the implementation block
@property (assign,nonatomic) BOOL setupAssistantHasCompletedInitialRunChecked;                                                                      //@synthesize setupAssistantHasCompletedInitialRunChecked=_setupAssistantHasCompletedInitialRunChecked - In the implementation block
@property (assign,getter=_setupAssistantHasCompletedInitialRunAvailable,nonatomic) BOOL setupAssistantHasCompletedInitialRunAvailable;              //@synthesize setupAssistantHasCompletedInitialRunAvailable=_setupAssistantHasCompletedInitialRunAvailable - In the implementation block
-(id)_delegate;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg1 ;
-(void)_spokenLanguageDidChange:(id)arg1 ;
-(void)dealloc;
-(id)_computeSpokenLanguageCode;
-(void)_updateSpokenLanguageCode;
-(void)_setSpokenLanguageCode:(id)arg1 ;
-(BOOL)_setupAssistantHasCompletedInitialRunAvailable;
-(NSString *)spokenLanguageCode;
-(BOOL)setupAssistantHasCompletedInitialRunChecked;
-(void)setSetupAssistantHasCompletedInitialRunChecked:(BOOL)arg1 ;
-(void)setSetupAssistantHasCompletedInitialRunAvailable:(BOOL)arg1 ;
@end

