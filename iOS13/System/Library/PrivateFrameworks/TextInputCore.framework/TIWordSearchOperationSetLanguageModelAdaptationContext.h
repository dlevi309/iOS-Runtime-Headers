/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraWrapper, TILanguageModelAdaptationContext;

@interface TIWordSearchOperationSetLanguageModelAdaptationContext : TIWordSearchOperation {

	TIMecabraWrapper* _mecabraWrapper;
	TILanguageModelAdaptationContext* _adaptationContext;

}

@property (nonatomic,retain) TIMecabraWrapper * mecabraWrapper;                               //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
@property (nonatomic,copy) TILanguageModelAdaptationContext * adaptationContext;              //@synthesize adaptationContext=_adaptationContext - In the implementation block
-(void)cancel;
-(void)perform;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
-(TILanguageModelAdaptationContext *)adaptationContext;
-(void)setAdaptationContext:(TILanguageModelAdaptationContext *)arg1 ;
-(id)initWithWordSearch:(id)arg1 adaptationContext:(id)arg2 ;
@end

