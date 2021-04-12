/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeClassificationResult.h>

@class NSMutableDictionary, NSMutableSet;

@interface CHMutableStrokeClassificationResult : CHStrokeClassificationResult {

	NSMutableDictionary* _strokeClassificationsByStrokeIdentifier;
	NSMutableDictionary* _substrokesByStrokeIdentifier;
	NSMutableSet* _nontextCandidates;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 nontextCandidates:(id)arg3 ;
-(void)updateNonTextCandidatesByRemovingSupportFromStrokeIdentifier:(id)arg1 skippingCandidatesWithStrokeIdentifier:(id)arg2 ;
-(void)updateByRemovingStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2 ;
-(void)updateByTransitionedClutterStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2 ;
-(void)updateByAddingNonClutterStroke:(id)arg1 withAllStrokes:(id)arg2 forceText:(BOOL)arg3 ;
-(void)updateByAddingNonClutterStroke:(id)arg1 withClassification:(long long)arg2 ;
-(void)updateByAddingClutterStroke:(id)arg1 ;
@end

