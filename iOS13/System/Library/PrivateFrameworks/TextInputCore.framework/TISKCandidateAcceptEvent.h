/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardCandidate;

@interface TISKCandidateAcceptEvent : TISKEvent {

	TIKeyboardCandidate* _candidate;

}

@property (nonatomic,retain) TIKeyboardCandidate * candidate;              //@synthesize candidate=_candidate - In the implementation block
-(id)description;
-(TIKeyboardCandidate *)candidate;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)reportToSession:(id)arg1 ;
-(id)init:(id)arg1 order:(long long)arg2 ;
@end

