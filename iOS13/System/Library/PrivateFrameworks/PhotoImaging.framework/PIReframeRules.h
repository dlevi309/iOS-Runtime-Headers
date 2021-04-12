/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <NeutrinoCore/NURuleSystem.h>

@interface PIReframeRules : NURuleSystem

@property (readonly) BOOL isCandidateForReframe; 
@property (readonly) BOOL isCandidateForPerspective; 
@property (readonly) BOOL isCandidateForHorizon; 
+(id)factCandidateForHorizon;
+(id)factCandidateForPerspective;
+(id)factCandidateForReframe;
+(id)factCandidateForStill;
+(id)factCandidateForVideo;
+(id)sharedPregateRules;
+(id)pregateRulesSystemWithConstants:(id)arg1 ;
-(BOOL)isCandidateForReframe;
-(BOOL)isCandidateForPerspective;
-(BOOL)isCandidateForHorizon;
@end

