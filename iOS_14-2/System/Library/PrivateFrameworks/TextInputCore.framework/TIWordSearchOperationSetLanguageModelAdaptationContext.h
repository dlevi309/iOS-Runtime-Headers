/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAdaptationContext:(TILanguageModelAdaptationContext *)arg1 ;
-(void)perform;
-(TILanguageModelAdaptationContext *)adaptationContext;
-(void)cancel;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
-(id)initWithWordSearch:(id)arg1 adaptationContext:(id)arg2 ;
@end

