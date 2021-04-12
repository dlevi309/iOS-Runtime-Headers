/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <NeutrinoCore/NURuleSystem.h>

@interface PIReframeRules : NURuleSystem

@property (readonly) BOOL isCandidateForReframe; 
@property (readonly) BOOL isCandidateForPerspective; 
@property (readonly) BOOL isCandidateForHorizon; 
+(id)factCandidateForReframe;
+(id)factCandidateForHorizon;
+(id)factCandidateForPerspective;
+(id)factCandidateForStill;
+(id)factCandidateForVideo;
+(id)pregateRulesSystemWithConstants:(id)arg1 ;
+(id)sharedPregateRules;
-(BOOL)isCandidateForPerspective;
-(BOOL)isCandidateForHorizon;
-(BOOL)isCandidateForReframe;
@end

