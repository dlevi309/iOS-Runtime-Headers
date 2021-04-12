/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNQuickPropertyAction.h>

@interface CNQuickFaceTimeAction : CNQuickPropertyAction {

	BOOL _audioOnly;

}

@property (assign,nonatomic) BOOL audioOnly;              //@synthesize audioOnly=_audioOnly - In the implementation block
+(id)defaultFaceTimeTitle;
+(id)defaultFaceTimeAudioTitle;
-(unsigned long long)score;
-(id)category;
-(BOOL)audioOnly;
-(id)_coreDuetValue;
-(id)titleForContext:(long long)arg1 ;
-(id)_coreDuetInteractionMechanisms;
-(id)subtitleForContext:(long long)arg1 ;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAudioOnly:(BOOL)arg1 ;
-(id)identifier;
@end

