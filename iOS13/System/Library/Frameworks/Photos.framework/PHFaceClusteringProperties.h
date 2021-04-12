/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHFacePropertySet.h>

@class PHFaceprint, NSString;

@interface PHFaceClusteringProperties : PHFacePropertySet {

	PHFaceprint* _faceprint;
	NSString* _groupingIdentifier;

}

@property (nonatomic,readonly) PHFaceprint * faceprint;                    //@synthesize faceprint=_faceprint - In the implementation block
@property (nonatomic,readonly) NSString * groupingIdentifier;              //@synthesize groupingIdentifier=_groupingIdentifier - In the implementation block
+(id)propertiesToFetch;
+(id)entityName;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
-(PHFaceprint *)faceprint;
-(NSString *)groupingIdentifier;
-(id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(BOOL)arg3 ;
@end

