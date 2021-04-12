/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIHyperExtender_Internal.h>
#import <UIKitCore/_UIHyperExtender.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIHyperAsymmetricExtender : NSObject <_UIHyperExtender_Internal, _UIHyperExtender, NSSecureCoding, NSCopying> {

	double* __extentBeyondMinimum;
	double* __extentBeyondMaximum;
	double* __temp;
	unsigned long long __dimensions;

}

@property (nonatomic,readonly) const double* _extentBeyondMinimum; 
@property (nonatomic,readonly) const double* _extentBeyondMaximum; 
@property (nonatomic,readonly) unsigned long long _dimensions;                  //@synthesize _dimensions=__dimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(unsigned long long)_dimensions;
-(void)encodeWithCoder:(id)arg1 ;
-(const double*)_extentBeyondMinimum;
-(NSString *)description;
-(id)initWithDimensions:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_extentVector:(double*)arg1 forUnconstrainedPoint:(const double*)arg2 closestPoint:(const double*)arg3 ;
-(const double*)_extentBeyondMaximum;
-(void)_mutateExtentBeyondMinimum:(/*^block*/id)arg1 ;
-(void)_mutateExtentBeyondMaximum:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

