/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSOrderedSet;

@interface MLMultiArrayShapeConstraint : NSObject <NSSecureCoding> {

	long long _type;
	NSArray* _sizeRangeForDimension;
	NSOrderedSet* _shapeSet;

}

@property (nonatomic,readonly) NSOrderedSet * shapeSet;                      //@synthesize shapeSet=_shapeSet - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * sizeRangeForDimension;              //@synthesize sizeRangeForDimension=_sizeRangeForDimension - In the implementation block
@property (nonatomic,readonly) NSArray * enumeratedShapes; 
+(BOOL)supportsSecureCoding;
-(NSArray *)enumeratedShapes;
-(NSOrderedSet *)shapeSet;
-(id)findAvailableShape:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSizeRangeForDimension:(id)arg1 ;
-(BOOL)isAllowedShape:(id)arg1 error:(id*)arg2 ;
-(id)initUnspecified;
-(NSArray *)sizeRangeForDimension;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEnumeratedShapes:(id)arg1 ;
@end

