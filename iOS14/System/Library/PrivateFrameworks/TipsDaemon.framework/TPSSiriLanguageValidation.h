/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TPSInclusivityValidation.h>

@class NSArray;

@interface TPSSiriLanguageValidation : TPSInclusivityValidation

@property (nonatomic,readonly) NSArray * targetLanguages; 
@property (nonatomic,readonly) NSArray * excludeLanguages; 
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)targetLanguages;
-(NSArray *)excludeLanguages;
-(id)initWithTargetLanguages:(id)arg1 excludeLanguages:(id)arg2 ;
@end

