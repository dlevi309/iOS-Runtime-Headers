/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTrailingNavigationBarButtons:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1 ;
-(id)trailingNavigationBarButtons;
-(NSArray *)voiceControlStates;
-(id)initWithVoiceControlStates:(id)arg1 ;
-(void)activateVoiceControlStateWithIdentifier:(id)arg1 ;
-(NSString *)activeStateIdentifier;
@end

