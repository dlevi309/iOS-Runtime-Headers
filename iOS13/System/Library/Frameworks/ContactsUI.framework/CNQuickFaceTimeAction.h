/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNQuickPropertyAction.h>

@interface CNQuickFaceTimeAction : CNQuickPropertyAction {

	BOOL _audioOnly;

}

@property (assign,nonatomic) BOOL audioOnly;              //@synthesize audioOnly=_audioOnly - In the implementation block
+(id)defaultFaceTimeTitle;
+(id)defaultFaceTimeAudioTitle;
-(id)identifier;
-(id)category;
-(unsigned long long)score;
-(id)_coreDuetValue;
-(id)_coreDuetInteractionMechanisms;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)audioOnly;
-(void)setAudioOnly:(BOOL)arg1 ;
@end

