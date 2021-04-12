/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroupingResult.h>

@class NSDictionary;

@interface CHBottomUpStrokeGroupingResult : CHStrokeGroupingResult {

	NSDictionary* _substrokePlacementsByStrokeIdentifier;

}

@property (nonatomic,retain,readonly) NSDictionary * substrokePlacementsByStrokeIdentifier;              //@synthesize substrokePlacementsByStrokeIdentifier=_substrokePlacementsByStrokeIdentifier - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)substrokePlacementsByStrokeIdentifier;
-(id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 substrokePlacementsByStrokeIdentifier:(id)arg4 ;
@end

