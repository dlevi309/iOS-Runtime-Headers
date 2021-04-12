/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(NSDictionary *)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(btCollisionShape*)_handle;
-(NSArray *)transforms;
-(id)sourceObject;
-(id)initWithContent:(id)arg1 options:(id)arg2 ;
-(void)_setTransforms:(id)arg1 ;
-(void)_customEncodingOfSCNPhysicsShape:(id)arg1 ;
-(void)_customDecodingOfSCNPhysicsShape:(id)arg1 ;
-(void)setReferenceObject:(id)arg1 ;
-(id)initWithCachedObject:(void*)arg1 options:(id)arg2 ;
-(id)referenceObject;
@end

