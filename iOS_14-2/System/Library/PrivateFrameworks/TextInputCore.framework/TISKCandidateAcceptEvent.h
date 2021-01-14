/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardCandidate;

@interface TISKCandidateAcceptEvent : TISKEvent {

	TIKeyboardCandidate* _candidate;

}

@property (nonatomic,retain) TIKeyboardCandidate * candidate;              //@synthesize candidate=_candidate - In the implementation block
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(id)description;
-(TIKeyboardCandidate *)candidate;
-(void)reportToSession:(id)arg1 ;
-(id)init:(id)arg1 order:(long long)arg2 ;
@end

