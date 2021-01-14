/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPrediction;
-(BOOL)isPartialCandidate;
-(void)setPartialCandidate:(BOOL)arg1 ;
-(void)perform;
-(void)setPrediction:(BOOL)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)initWithWordSearch:(id)arg1 mecabraCandidate:(void*)arg2 isPartial:(BOOL)arg3 isPrediction:(BOOL)arg4 ;
-(TIMecabraEnvironment *)mecabraEnvironment;
-(void)setMecabraEnvironment:(TIMecabraEnvironment *)arg1 ;
@end

