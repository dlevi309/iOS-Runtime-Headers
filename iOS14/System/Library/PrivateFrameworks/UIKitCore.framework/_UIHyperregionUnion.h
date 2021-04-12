/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIHyperregion_Internal.h>
#import <UIKitCore/_UIHyperregion.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface _UIHyperregionUnion : NSObject <_UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying> {

	unsigned long long __dimensions;
	NSArray* __regions;
	double* __temp;

}

@property (nonatomic,readonly) double* _temp;                                   //@synthesize _temp=__temp - In the implementation block
@property (setter=_setRegions:,nonatomic,copy) NSArray * _regions;              //@synthesize _regions=__regions - In the implementation block
@property (nonatomic,readonly) unsigned long long _dimensions;                  //@synthesize _dimensions=__dimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2 ;
-(unsigned long long)_dimensions;
-(double*)_temp;
-(NSArray *)_regions;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isBoundaryCrossedFromPoint:(const double*)arg1 toPoint:(const double*)arg2 ;
-(unsigned long long)_regionIndexForClosestPoint:(double*)arg1 toPoint:(const double*)arg2 ;
-(NSString *)description;
-(id)initWithDimensions:(unsigned long long)arg1 ;
-(void)_setRegions:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

