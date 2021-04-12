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

@class NSString;

@interface _UIHyperrectangle : NSObject <_UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying> {

	double* __maximumPoint;
	double* __minimumPoint;
	unsigned long long __dimensions;

}

@property (nonatomic,readonly) const double* _minimumPoint; 
@property (nonatomic,readonly) const double* _maximumPoint; 
@property (nonatomic,readonly) unsigned long long _dimensions;              //@synthesize _dimensions=__dimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2 ;
-(unsigned long long)_dimensions;
-(const double*)_minimumPoint;
-(void)_mutateMinimumPoint:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(const double*)_maximumPoint;
-(NSString *)description;
-(id)initWithDimensions:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_mutateMaximumPoint:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

