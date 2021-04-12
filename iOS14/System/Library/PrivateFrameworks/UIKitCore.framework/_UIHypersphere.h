/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIHyperregion_Internal.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIHypersphere : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying> {

	double* __center;
	unsigned long long __dimensions;
	double __radius;

}

@property (nonatomic,readonly) const double* _center; 
@property (assign,setter=_setRadius:,nonatomic) double _radius;              //@synthesize _radius=__radius - In the implementation block
@property (nonatomic,readonly) unsigned long long _dimensions;               //@synthesize _dimensions=__dimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(double)_radius;
-(const double*)_center;
-(void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2 ;
-(unsigned long long)_dimensions;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithDimensions:(unsigned long long)arg1 ;
-(void)_setRadius:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_mutateCenter:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

