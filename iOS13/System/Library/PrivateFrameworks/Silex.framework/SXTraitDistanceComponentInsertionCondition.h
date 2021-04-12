/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInsertionCondition.h>

@class NSMutableIndexSet, NSString;

@interface SXTraitDistanceComponentInsertionCondition : NSObject <SXComponentInsertionCondition> {

	unsigned long long _componentTrait;
	unsigned long long _otherComponentTrait;
	NSMutableIndexSet* _traitAreas;
	NSMutableIndexSet* _otherTraitAreas;
	SXConvertibleValue _distance;

}

@property (nonatomic,readonly) unsigned long long componentTrait;                   //@synthesize componentTrait=_componentTrait - In the implementation block
@property (nonatomic,readonly) unsigned long long otherComponentTrait;              //@synthesize otherComponentTrait=_otherComponentTrait - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue distance;                         //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * traitAreas;                        //@synthesize traitAreas=_traitAreas - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * otherTraitAreas;                   //@synthesize otherTraitAreas=_otherTraitAreas - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXConvertibleValue)distance;
-(BOOL)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3 ;
-(void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2 ;
-(void)insertedComponent:(id)arg1 approximateLocation:(CGPoint)arg2 ;
-(id)initWithTrait:(unsigned long long)arg1 otherTrait:(unsigned long long)arg2 distance:(SXConvertibleValue)arg3 ;
-(void)inspectTraitAreasForComponents:(id)arg1 layoutProvider:(id)arg2 ;
-(unsigned long long)componentTrait;
-(NSMutableIndexSet *)traitAreas;
-(unsigned long long)otherComponentTrait;
-(NSMutableIndexSet *)otherTraitAreas;
-(void)setTraitAreas:(NSMutableIndexSet *)arg1 ;
-(void)setOtherTraitAreas:(NSMutableIndexSet *)arg1 ;
@end

