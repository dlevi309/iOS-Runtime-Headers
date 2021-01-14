/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface SCNPhysicsShape : NSObject <NSCopying, NSSecureCoding> {

	id _referenceObject;
	NSDictionary* _options;
	NSArray* _transforms;
	void* _cachedObject;
	btCollisionShape* _collisionShape;

}

@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) id sourceObject;                     //@synthesize referenceObject=_referenceObject - In the implementation block
@property (nonatomic,readonly) NSArray * transforms; 
+(BOOL)supportsSecureCoding;
+(id)shapeWithGeometry:(id)arg1 options:(id)arg2 ;
+(id)shapeWithNode:(id)arg1 options:(id)arg2 ;
+(id)shapeWithShapes:(id)arg1 transforms:(id)arg2 ;
+(id)defaultShapeForGeometry:(id)arg1 ;
-(NSArray *)transforms;
-(btCollisionShape*)_handle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)options;
-(id)copy;
-(id)sourceObject;
-(id)initWithCoder:(id)arg1 ;
-(id)referenceObject;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setReferenceObject:(id)arg1 ;
-(id)initWithContent:(id)arg1 options:(id)arg2 ;
-(void)_setTransforms:(id)arg1 ;
-(void)_customEncodingOfSCNPhysicsShape:(id)arg1 ;
-(void)_customDecodingOfSCNPhysicsShape:(id)arg1 ;
-(id)initWithCachedObject:(void*)arg1 options:(id)arg2 ;
@end

