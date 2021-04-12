/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
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
+(id)WillSpeakDetectedText;
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
+(id)NoItemExists;
+(id)DidChangeVolume;
+(id)DidEnableQuickNav;
+(id)DidDisableQuickNav;
+(id)allOutputEvents;
+(id)eventWithStringValue:(id)arg1 ;
-(id)description;
-(NSString *)localizedName;
-(NSString *)rawValue;
-(BOOL)supportsHaptic;
-(BOOL)supportsSoundEffect;
-(void)setSupportsSoundEffect:(BOOL)arg1 ;
-(void)setSupportsHaptic:(BOOL)arg1 ;
-(id)_initOutputEventWithRawValue:(id)arg1 supportsSoundEffect:(BOOL)arg2 supportsHaptic:(BOOL)arg3 ;
@end

