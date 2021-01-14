/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class SCRCMathExpression, NSArray;

@interface SCRCMathMultiscriptsExpression : SCRCMathExpression {

	SCRCMathExpression* _base;
	NSArray* _postScripts;
	NSArray* _preScripts;

}

@property (nonatomic,retain) SCRCMathExpression * base;              //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) NSArray * preScripts;                   //@synthesize preScripts=_preScripts - In the implementation block
@property (nonatomic,retain) NSArray * postScripts;                  //@synthesize postScripts=_postScripts - In the implementation block
-(SCRCMathExpression *)base;
-(void)setBase:(SCRCMathExpression *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)_subSuperscriptPairFromDictionary:(id)arg1 ;
-(NSArray *)preScripts;
-(NSArray *)postScripts;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(void)_subSuperScriptsDescriptionFromArray:(id)arg1 withSpeakingStyle:(long long)arg2 arePausesAllowed:(BOOL)arg3 outSubscripts:(id*)arg4 outSuperscripts:(id*)arg5 ;
-(id)_appendString:(id)arg1 toDescription:(id)arg2 arePausesAllowed:(BOOL)arg3 ;
-(void)setPostScripts:(NSArray *)arg1 ;
-(void)setPreScripts:(NSArray *)arg1 ;
@end

