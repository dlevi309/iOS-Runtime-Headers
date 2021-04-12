/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)enumeratedShapes;
-(id)initUnspecified;
-(id)initWithSizeRangeForDimension:(id)arg1 ;
-(id)initWithEnumeratedShapes:(id)arg1 ;
-(BOOL)isAllowedShape:(id)arg1 error:(id*)arg2 ;
-(id)findAvailableShape:(id)arg1 ;
-(NSArray *)sizeRangeForDimension;
-(NSOrderedSet *)shapeSet;
@end

