/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraWrapper;

@interface TIWordSearchOperationPerformMaintenance : TIWordSearchOperation {

	TIMecabraWrapper* _mecabraWrapper;

}

@property (nonatomic,retain) TIMecabraWrapper * mecabraWrapper;              //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
-(void)perform;
-(id)initWithMecabraWrapper:(id)arg1 ;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
@end

