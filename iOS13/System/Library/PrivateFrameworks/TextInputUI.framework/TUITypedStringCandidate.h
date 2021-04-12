/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString;

@interface TUITypedStringCandidate : TIKeyboardCandidateSingle {

	NSString* _displayLabel;

}

@property (nonatomic,retain) NSString * displayLabel;              //@synthesize displayLabel=_displayLabel - In the implementation block
+(id)typedStringCandidateWithLocale:(id)arg1 typedString:(id)arg2 ;
-(id)label;
-(NSString *)displayLabel;
-(void)setDisplayLabel:(NSString *)arg1 ;
@end

