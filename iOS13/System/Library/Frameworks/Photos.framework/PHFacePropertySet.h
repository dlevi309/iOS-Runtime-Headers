/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PHFacePropertySet.h>

@protocol PHFacePropertySet <PHObjectPropertySet>
@required
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(BOOL)arg3;

@end


@class PHFace, NSString;

@interface PHFacePropertySet : NSObject <PHFacePropertySet> {

	PHFace* _face;

}

@property (nonatomic,__weak,readonly) PHFace * face;                //@synthesize face=_face - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertiesToFetch;
+(id)entityName;
+(BOOL)isToMany;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToPrefetch;
-(PHFace *)face;
-(id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(BOOL)arg3 ;
@end

