/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroupingResult.h>

@class NSDictionary;

@interface CHBottomUpStrokeGroupingResult : CHStrokeGroupingResult {

	NSDictionary* _substrokePlacementsByStrokeIdentifier;

}

@property (nonatomic,retain,readonly) NSDictionary * substrokePlacementsByStrokeIdentifier;              //@synthesize substrokePlacementsByStrokeIdentifier=_substrokePlacementsByStrokeIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSDictionary *)substrokePlacementsByStrokeIdentifier;
-(id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 substrokePlacementsByStrokeIdentifier:(id)arg4 ;
@end

