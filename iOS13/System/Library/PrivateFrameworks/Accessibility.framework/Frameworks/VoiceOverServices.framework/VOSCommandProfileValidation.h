/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
*/


@class VOSCommand, NSString;

@interface VOSCommandProfileValidation : NSObject {

	long long _validationType;
	VOSCommand* _previouslyBoundCommand;

}

@property (nonatomic,readonly) BOOL isSuccessful; 
@property (nonatomic,readonly) BOOL isGestureAlreadyAssignedToCommand; 
@property (nonatomic,readonly) BOOL isGestureAssignedToOtherCommand; 
@property (nonatomic,readonly) BOOL isKeyboardShortcutAlreadyAssignedToCommand; 
@property (nonatomic,readonly) BOOL isKeyboardShortcutAssignedToOtherCommand; 
@property (nonatomic,readonly) NSString * localizedErrorTitle; 
@property (nonatomic,readonly) NSString * localizedErrorMessage; 
@property (nonatomic,retain) VOSCommand * previouslyBoundCommand;                            //@synthesize previouslyBoundCommand=_previouslyBoundCommand - In the implementation block
+(id)successfulValidation;
+(id)gestureAssignedToOtherCommandValidation:(id)arg1 ;
+(id)keyboardShortcutAssignedToOtherCommandValidation:(id)arg1 ;
-(id)init;
-(id)initWithType:(long long)arg1 ;
-(BOOL)isSuccessful;
-(void)setPreviouslyBoundCommand:(VOSCommand *)arg1 ;
-(VOSCommand *)previouslyBoundCommand;
-(BOOL)isGestureAlreadyAssignedToCommand;
-(BOOL)isGestureAssignedToOtherCommand;
-(BOOL)isKeyboardShortcutAlreadyAssignedToCommand;
-(BOOL)isKeyboardShortcutAssignedToOtherCommand;
-(NSString *)localizedErrorTitle;
-(NSString *)localizedErrorMessage;
@end

