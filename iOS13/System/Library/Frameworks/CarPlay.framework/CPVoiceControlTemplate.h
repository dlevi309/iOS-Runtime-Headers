/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPVoiceControlTemplateDelegate.h>

@class NSArray, NSString, NAFuture;

@interface CPVoiceControlTemplate : CPTemplate <CPVoiceControlTemplateDelegate> {

	NSArray* _voiceControlStates;
	NSString* _activeStateIdentifier;

}

@property (nonatomic,retain) NAFuture * templateProviderFuture; 
@property (nonatomic,copy,readonly) NSArray * voiceControlStates;                  //@synthesize voiceControlStates=_voiceControlStates - In the implementation block
@property (nonatomic,copy,readonly) NSString * activeStateIdentifier;              //@synthesize activeStateIdentifier=_activeStateIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1 ;
-(id)trailingNavigationBarButtons;
-(void)setTrailingNavigationBarButtons:(id)arg1 ;
-(NSArray *)voiceControlStates;
-(id)initWithVoiceControlStates:(id)arg1 ;
-(void)activateVoiceControlStateWithIdentifier:(id)arg1 ;
-(NSString *)activeStateIdentifier;
@end

