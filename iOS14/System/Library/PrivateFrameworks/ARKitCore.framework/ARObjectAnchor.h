/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARAnchor.h>

@class ARReferenceObject;

@interface ARObjectAnchor : ARAnchor {

	ARReferenceObject* _referenceObject;

}

@property (nonatomic,readonly) ARReferenceObject * referenceObject;              //@synthesize referenceObject=_referenceObject - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithAnchor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isTracked;
-(ARReferenceObject *)referenceObject;
-(id)initWithReferenceObject:(id)arg1 transform:(SCD_Struct_AR1)arg2 ;
@end

