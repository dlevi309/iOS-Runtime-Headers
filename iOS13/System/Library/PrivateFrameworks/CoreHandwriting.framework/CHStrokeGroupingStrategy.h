/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@protocol CHStrokeProvider;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSString;

@interface CHStrokeGroupingStrategy : NSObject {

	id<CHStrokeProvider> _strokeProvider;

}

@property (nonatomic,retain,readonly) id<CHStrokeProvider> strokeProvider;              //@synthesize strokeProvider=_strokeProvider - In the implementation block
@property (nonatomic,retain,readonly) NSString * strategyIdentifier; 
-(void)dealloc;
-(id<CHStrokeProvider>)strokeProvider;
-(void)getFirstStrokeIdentifier:(id*)arg1 lastStrokeIdentifier:(id*)arg2 inGroup:(id)arg3 addingStrokeIdentifiers:(id)arg4 removingStrokeIdentifiers:(id)arg5 ;
-(id)initWithStrokeProvider:(id)arg1 ;
-(NSString *)strategyIdentifier;
-(id)strokesForIdentifiers:(id)arg1 ;
-(id)strokeGroupFromGroup:(id)arg1 addingStrokes:(id)arg2 ;
-(id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(/*^block*/id)arg6 ;
-(id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(CGVector)arg2 originalDrawing:(id*)arg3 orderedStrokesIDs:(id*)arg4 rescalingFactor:(double*)arg5 ;
@end

