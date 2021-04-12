/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface ICSearchTextCheckingResult : NSTextCheckingResult {

	NSString* _csEvaluatorMatchString;
	NSRange _ic_range;

}

@property (assign,nonatomic) NSRange ic_range;                               //@synthesize ic_range=_ic_range - In the implementation block
@property (nonatomic,retain) NSString * csEvaluatorMatchString;              //@synthesize csEvaluatorMatchString=_csEvaluatorMatchString - In the implementation block
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 ;
-(NSRange)ic_range;
-(id)initWithRange:(NSRange)arg1 csEvaluatorMatchString:(id)arg2 ;
-(NSString *)csEvaluatorMatchString;
-(void)setCsEvaluatorMatchString:(NSString *)arg1 ;
-(void)setIc_range:(NSRange)arg1 ;
@end

