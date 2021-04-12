/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, MDLMatrix4x4Array;

@interface MDLSkeleton : MDLObject <NSCopying> {

	NSArray* _jointPaths;
	MDLMatrix4x4Array* _jointBindTransforms;
	MDLMatrix4x4Array* _jointRestTransforms;

}

@property (nonatomic,readonly) NSArray * jointPaths;                                 //@synthesize jointPaths=_jointPaths - In the implementation block
@property (nonatomic,readonly) MDLMatrix4x4Array * jointBindTransforms;              //@synthesize jointBindTransforms=_jointBindTransforms - In the implementation block
@property (nonatomic,readonly) MDLMatrix4x4Array * jointRestTransforms;              //@synthesize jointRestTransforms=_jointRestTransforms - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)jointPaths;
-(MDLMatrix4x4Array *)jointBindTransforms;
-(id)initWithName:(id)arg1 jointPaths:(id)arg2 ;
-(MDLMatrix4x4Array *)jointRestTransforms;
@end

