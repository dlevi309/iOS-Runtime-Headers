/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString;

@interface TUITypedStringCandidate : TIKeyboardCandidateSingle {

	NSString* _displayLabel;

}

@property (nonatomic,retain) NSString * displayLabel;              //@synthesize displayLabel=_displayLabel - In the implementation block
+(id)typedStringCandidateWithLocale:(id)arg1 typedString:(id)arg2 ;
-(void)setDisplayLabel:(NSString *)arg1 ;
-(NSString *)displayLabel;
-(id)label;
@end

