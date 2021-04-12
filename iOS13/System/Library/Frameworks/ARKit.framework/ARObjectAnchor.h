/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARAnchor.h>

@class ARReferenceObject;

@interface ARObjectAnchor : ARAnchor {

	ARReferenceObject* _referenceObject;

}

@property (nonatomic,readonly) ARReferenceObject * referenceObject;              //@synthesize referenceObject=_referenceObject - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(ARReferenceObject *)referenceObject;
-(BOOL)isTracked;
-(id)initWithReferenceObject:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
@end

