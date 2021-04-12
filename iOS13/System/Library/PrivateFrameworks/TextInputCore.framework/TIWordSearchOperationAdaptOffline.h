/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraWrapper, TILanguageModelAdaptationContext, NSString;

@interface TIWordSearchOperationAdaptOffline : TIWordSearchOperation {

	TIMecabraWrapper* _mecabraWrapper;
	TILanguageModelAdaptationContext* _adaptationContext;
	NSString* _paragraph;
	double _timeStamp;

}

@property (nonatomic,retain) TIMecabraWrapper * mecabraWrapper;                               //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
@property (nonatomic,copy) TILanguageModelAdaptationContext * adaptationContext;              //@synthesize adaptationContext=_adaptationContext - In the implementation block
@property (nonatomic,copy) NSString * paragraph;                                              //@synthesize paragraph=_paragraph - In the implementation block
@property (assign,nonatomic) double timeStamp;                                                //@synthesize timeStamp=_timeStamp - In the implementation block
-(void)cancel;
-(double)timeStamp;
-(void)setTimeStamp:(double)arg1 ;
-(void)perform;
-(NSString *)paragraph;
-(void)setParagraph:(NSString *)arg1 ;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
-(id)initWithWordSearch:(id)arg1 paragraph:(id)arg2 adaptationContext:(id)arg3 timeStamp:(double)arg4 ;
-(TILanguageModelAdaptationContext *)adaptationContext;
-(void)setAdaptationContext:(TILanguageModelAdaptationContext *)arg1 ;
@end

