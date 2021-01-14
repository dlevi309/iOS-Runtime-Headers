/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXPeopleUISettings : PXSettings {

	BOOL _alwaysShowBootstrap;
	BOOL _alwaysShowCandidateWidget;
	BOOL _alwaysShowMe;
	BOOL _displayBootstrapSuggestionType;
	BOOL _displayConfirmAdditionalSuggestionType;
	BOOL _displayConfirmationPhotoDate;
	BOOL _debugBlurredCells;
	BOOL _showContactSuggestions;
	BOOL _showMaybeContact;
	BOOL _enableBlocking;

}

@property (assign,getter=shouldAlwaysShowBootstrap,nonatomic) BOOL alwaysShowBootstrap;                                                    //@synthesize alwaysShowBootstrap=_alwaysShowBootstrap - In the implementation block
@property (assign,getter=shouldAlwaysShowCandidateWidget,nonatomic) BOOL alwaysShowCandidateWidget;                                        //@synthesize alwaysShowCandidateWidget=_alwaysShowCandidateWidget - In the implementation block
@property (assign,getter=shouldAlwaysShowMe,nonatomic) BOOL alwaysShowMe;                                                                  //@synthesize alwaysShowMe=_alwaysShowMe - In the implementation block
@property (assign,getter=shouldDisplayBootstrapSuggestionType,nonatomic) BOOL displayBootstrapSuggestionType;                              //@synthesize displayBootstrapSuggestionType=_displayBootstrapSuggestionType - In the implementation block
@property (assign,getter=shouldDisplayConfirmAdditionalSuggestionType,nonatomic) BOOL displayConfirmAdditionalSuggestionType;              //@synthesize displayConfirmAdditionalSuggestionType=_displayConfirmAdditionalSuggestionType - In the implementation block
@property (assign,getter=shouldDisplayConfirmationPhotoDate,nonatomic) BOOL displayConfirmationPhotoDate;                                  //@synthesize displayConfirmationPhotoDate=_displayConfirmationPhotoDate - In the implementation block
@property (assign,getter=shouldDebugBlurredCells,nonatomic) BOOL debugBlurredCells;                                                        //@synthesize debugBlurredCells=_debugBlurredCells - In the implementation block
@property (assign,getter=shouldShowContactSuggestions,nonatomic) BOOL showContactSuggestions;                                              //@synthesize showContactSuggestions=_showContactSuggestions - In the implementation block
@property (assign,getter=shouldShowMaybeContact,nonatomic) BOOL showMaybeContact;                                                          //@synthesize showMaybeContact=_showMaybeContact - In the implementation block
@property (assign,nonatomic) BOOL enableBlocking;                                                                                          //@synthesize enableBlocking=_enableBlocking - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(BOOL)shouldDebugBlurredCells;
-(void)setEnableBlocking:(BOOL)arg1 ;
-(BOOL)shouldDisplayConfirmAdditionalSuggestionType;
-(BOOL)shouldDisplayBootstrapSuggestionType;
-(void)setAlwaysShowMe:(BOOL)arg1 ;
-(BOOL)shouldDisplayConfirmationPhotoDate;
-(BOOL)shouldAlwaysShowMe;
-(void)setDebugBlurredCells:(BOOL)arg1 ;
-(void)setDisplayConfirmAdditionalSuggestionType:(BOOL)arg1 ;
-(void)setShowContactSuggestions:(BOOL)arg1 ;
-(BOOL)shouldShowMaybeContact;
-(BOOL)shouldAlwaysShowBootstrap;
-(void)setShowMaybeContact:(BOOL)arg1 ;
-(void)setDisplayConfirmationPhotoDate:(BOOL)arg1 ;
-(BOOL)shouldShowContactSuggestions;
-(BOOL)enableBlocking;
-(void)setDisplayBootstrapSuggestionType:(BOOL)arg1 ;
-(BOOL)shouldAlwaysShowCandidateWidget;
-(void)setAlwaysShowBootstrap:(BOOL)arg1 ;
-(void)setAlwaysShowCandidateWidget:(BOOL)arg1 ;
@end

