/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
*/


@class NSString;

@interface VOSOutputEvent : NSObject {

	NSString* _rawValue;
	BOOL _supportsSoundEffect;
	BOOL _supportsHaptic;

}

@property (assign,nonatomic) BOOL supportsSoundEffect;                //@synthesize supportsSoundEffect=_supportsSoundEffect - In the implementation block
@property (assign,nonatomic) BOOL supportsHaptic;                     //@synthesize supportsHaptic=_supportsHaptic - In the implementation block
@property (nonatomic,readonly) NSString * rawValue; 
@property (nonatomic,readonly) NSString * localizedName; 
+(id)DidActivateElement;
+(id)NoResultsFound;
+(id)BoundaryEncountered;
+(id)DidFocusOnElement;
+(id)DidReorderItem;
+(id)UnknownCommand;
+(id)DidWrapBackwards;
+(id)DidWrapForwards;
+(id)DidScrollByPage;
+(id)DidBeginPassthrough;
+(id)DidSelectAutofill;
+(id)DidSelectPreviousRotor;
+(id)DidSelectNextRotor;
+(id)PreviousRotorProgress;
+(id)NextRotorProgress;
+(id)DidEnterTouchContainer;
+(id)DidEnterSecureText;
+(id)DidEnterTargetArea;
+(id)DidLeaveTargetArea;
+(id)DidSyncWithSystemFocus;
+(id)DidChangeTextSelectionDirection;
+(id)AlertDidAppear;
+(id)PopoverDidAppear;
+(id)ScreenDidChange;
+(id)ItemIsLoading;
+(id)ItemDidLoad;
+(id)ScreenDidTurnOff;
+(id)CollaborationOccurred;
+(id)InsertionPointDidMove;
+(id)AutofillDidAppear;
+(id)AutofillDidDismiss;
+(id)FolderWillOpen;
+(id)FolderDidOpen;
+(id)FolderDidClose;
+(id)KeyboardAppeared;
+(id)KeyboardDisappeared;
+(id)BrailleDisplayConnected;
+(id)BrailleDisplayDisconnected;
+(id)ItemMemorizationSucceeded;
+(id)ItemMemorizationFailed;
+(id)ItemMemorizationInProgress;
+(id)DockDidAppear;
+(id)DockDidDisappear;
+(id)ReachabilityDidBegin;
+(id)ReachabilityDidEnd;
+(id)TouchIDAuthenticated;
+(id)TouchIDFailed;
+(id)NoItemExists;
+(id)DidChangeVolume;
+(id)DidRecognizeMLContent;
+(id)DidEnableQuickNav;
+(id)DidDisableQuickNav;
+(id)TVDidBeginInteractionWithRotor;
+(id)TVDidEndInteractionWithRotor;
+(id)SensitiveContent;
+(id)allOutputEvents;
+(id)eventWithStringValue:(id)arg1 ;
-(NSString *)localizedName;
-(NSString *)rawValue;
-(id)description;
-(BOOL)supportsHaptic;
-(BOOL)supportsSoundEffect;
-(void)setSupportsSoundEffect:(BOOL)arg1 ;
-(void)setSupportsHaptic:(BOOL)arg1 ;
-(id)_initOutputEventWithRawValue:(id)arg1 supportsSoundEffect:(BOOL)arg2 supportsHaptic:(BOOL)arg3 ;
@end

