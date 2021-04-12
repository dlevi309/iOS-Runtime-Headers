/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
*/

#import <TextInputChinese/TIWordSearchShapeBased.h>

@interface TIWordSearchCangjie : TIWordSearchShapeBased {

	BOOL _suchengEnabled;
	BOOL _supportsEnglish;

}

@property (assign) BOOL suchengEnabled;               //@synthesize suchengEnabled=_suchengEnabled - In the implementation block
@property (assign) BOOL supportsEnglish;              //@synthesize supportsEnglish=_supportsEnglish - In the implementation block
-(int)mecabraInputMethodType;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
-(id)uncachedCandidatesForOperation:(id)arg1 ;
-(BOOL)validateCode:(id)arg1 withOption:(unsigned long long)arg2 ;
-(BOOL)suchengEnabled;
-(void)setSuchengEnabled:(BOOL)arg1 ;
-(BOOL)supportsEnglish;
-(void)setSupportsEnglish:(BOOL)arg1 ;
@end

