/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraEnvironment;

@interface TIWordSearchOperationContextAcceptCandidate : TIWordSearchOperation {

	void* _mecabraCandidate;
	BOOL _partialCandidate;
	BOOL _prediction;
	TIMecabraEnvironment* _mecabraEnvironment;

}

@property (nonatomic,retain) TIMecabraEnvironment * mecabraEnvironment;                    //@synthesize mecabraEnvironment=_mecabraEnvironment - In the implementation block
@property (assign,getter=isPartialCandidate,nonatomic) BOOL partialCandidate;              //@synthesize partialCandidate=_partialCandidate - In the implementation block
@property (assign,getter=isPrediction,nonatomic) BOOL prediction;                          //@synthesize prediction=_prediction - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)perform;
-(void)setPrediction:(BOOL)arg1 ;
-(BOOL)isPartialCandidate;
-(BOOL)isPrediction;
-(id)initWithWordSearch:(id)arg1 mecabraCandidate:(void*)arg2 isPartial:(BOOL)arg3 isPrediction:(BOOL)arg4 ;
-(TIMecabraEnvironment *)mecabraEnvironment;
-(void)setMecabraEnvironment:(TIMecabraEnvironment *)arg1 ;
-(void)setPartialCandidate:(BOOL)arg1 ;
@end

