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

@interface _UIHyperspace : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying> {

	unsigned long long __dimensions;

}

@property (nonatomic,readonly) unsigned long long _dimensions;              //@synthesize _dimensions=__dimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2 ;
-(unsigned long long)_dimensions;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithDimensions:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

