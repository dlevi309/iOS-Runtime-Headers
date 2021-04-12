/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSRange)ic_range;
-(id)initWithRange:(NSRange)arg1 ;
-(id)initWithRange:(NSRange)arg1 csEvaluatorMatchString:(id)arg2 ;
-(NSString *)csEvaluatorMatchString;
-(void)setCsEvaluatorMatchString:(NSString *)arg1 ;
-(void)setIc_range:(NSRange)arg1 ;
@end

