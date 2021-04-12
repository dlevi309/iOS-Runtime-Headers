/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHVisualization.h>

@class CHRecognitionSessionResult, NSSet;

@interface CHStrokeGroupBasedVisualization : CHVisualization {

	BOOL _newGroupsDefaultToActive;
	CHRecognitionSessionResult* _resultDrawn;
	NSSet* _activeStrokeGroupAncestorIdentifiers;

}

@property (nonatomic,retain) CHRecognitionSessionResult * resultDrawn;                          //@synthesize resultDrawn=_resultDrawn - In the implementation block
@property (nonatomic,copy) NSSet * activeStrokeGroupAncestorIdentifiers;                        //@synthesize activeStrokeGroupAncestorIdentifiers=_activeStrokeGroupAncestorIdentifiers - In the implementation block
@property (assign,nonatomic) id<CHStrokeGroupBasedVisualizationDelegate> delegate; 
@property (nonatomic,readonly) BOOL newGroupsDefaultToActive;                                   //@synthesize newGroupsDefaultToActive=_newGroupsDefaultToActive - In the implementation block
-(void)dealloc;
-(void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef)arg2 viewBounds:(CGRect)arg3 ;
-(CGRect)dirtyRectForStrokeGroup:(id)arg1 ;
-(CHRecognitionSessionResult *)resultDrawn;
-(NSSet *)activeStrokeGroupAncestorIdentifiers;
-(void)recognitionSessionDidUpdateRecognitionResult;
-(void)toggleVisualizationRegionAtPoint:(CGPoint)arg1 ;
-(void)setResultDrawn:(CHRecognitionSessionResult *)arg1 ;
-(BOOL)newGroupsDefaultToActive;
-(void)_markStrokeGroupsAsActive:(id)arg1 ;
-(void)setActiveStrokeGroupAncestorIdentifiers:(NSSet *)arg1 ;
@end

