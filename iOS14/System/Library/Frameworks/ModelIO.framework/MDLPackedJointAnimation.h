/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MDLJointAnimation.h>

@class NSArray, MDLAnimatedVector3Array, MDLAnimatedQuaternionArray;

@interface MDLPackedJointAnimation : MDLObject <NSCopying, MDLJointAnimation> {

	NSArray* _jointPaths;
	MDLAnimatedVector3Array* _translations;
	MDLAnimatedQuaternionArray* _rotations;
	MDLAnimatedVector3Array* _scales;

}

@property (nonatomic,readonly) NSArray * jointPaths;                                //@synthesize jointPaths=_jointPaths - In the implementation block
@property (nonatomic,readonly) MDLAnimatedVector3Array * translations;              //@synthesize translations=_translations - In the implementation block
@property (nonatomic,readonly) MDLAnimatedQuaternionArray * rotations;              //@synthesize rotations=_rotations - In the implementation block
@property (nonatomic,readonly) MDLAnimatedVector3Array * scales;                    //@synthesize scales=_scales - In the implementation block
-(MDLAnimatedVector3Array *)scales;
-(MDLAnimatedVector3Array *)translations;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MDLAnimatedQuaternionArray *)rotations;
-(NSArray *)jointPaths;
-(id)initWithName:(id)arg1 jointPaths:(id)arg2 ;
@end

