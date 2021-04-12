/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSSpecifier.h>

@class NSString;

@interface PSConfirmationSpecifier : PSSpecifier {

	NSString* _title;
	NSString* _prompt;
	NSString* _okButton;
	NSString* _cancelButton;
	NSString* _alternateButton;

}

@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * prompt;                       //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,retain) NSString * okButton;                     //@synthesize okButton=_okButton - In the implementation block
@property (nonatomic,retain) NSString * alternateButton;              //@synthesize alternateButton=_alternateButton - In the implementation block
@property (nonatomic,retain) NSString * cancelButton;                 //@synthesize cancelButton=_cancelButton - In the implementation block
+(id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7 ;
+(id)specifierWithSpecifier:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isDestructive;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)cancelButton;
-(void)setCancelButton:(NSString *)arg1 ;
-(NSString *)okButton;
-(NSString *)alternateButton;
-(BOOL)isAlternateDestructive;
-(BOOL)isEqualToSpecifier:(id)arg1 ;
-(void)setOkButton:(NSString *)arg1 ;
-(void)setAlternateButton:(NSString *)arg1 ;
-(void)setupWithDictionary:(id)arg1 ;
@end

