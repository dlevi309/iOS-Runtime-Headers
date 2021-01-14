/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIHyperregion_Internal.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIHyperregion;
@class NSString;

@interface _UIAlignmentRegion : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying> {

	unsigned long long __dimensions;
	id<_UIHyperregion> __region;
	double __maximumDistance;
	double* __temp;

}

@property (nonatomic,readonly) double* _temp;                                                  //@synthesize _temp=__temp - In the implementation block
@property (setter=_setRegion:,nonatomic,retain) id<_UIHyperregion> _region;                    //@synthesize _region=__region - In the implementation block
@property (assign,setter=_setMaximumDistance:,nonatomic) double _maximumDistance;              //@synthesize _maximumDistance=__maximumDistance - In the implementation block
@property (nonatomic,readonly) unsigned long long _dimensions;                                 //@synthesize _dimensions=__dimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2 ;
-(unsigned long long)_dimensions;
-(double*)_temp;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setRegion:(id)arg1 ;
-(BOOL)_isBoundaryCrossedFromPoint:(const double*)arg1 toPoint:(const double*)arg2 ;
-(NSString *)description;
-(id<_UIHyperregion>)_region;
-(void)_setMaximumDistance:(double)arg1 ;
-(id)initWithDimensions:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isAlignedForClosestPoint:(double*)arg1 toPoint:(const double*)arg2 ;
-(double)_maximumDistance;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

