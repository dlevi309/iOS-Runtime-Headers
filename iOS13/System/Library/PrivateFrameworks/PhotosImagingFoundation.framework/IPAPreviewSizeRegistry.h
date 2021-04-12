/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/


@class NSString, NSMutableDictionary;

@interface IPAPreviewSizeRegistry : NSObject {

	NSString* _name;
	NSMutableDictionary* _policies;

}
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)initWithName:(id)arg1 ;
-(void)addPolicy:(id)arg1 ;
-(id)policyForStyle:(unsigned long long)arg1 ;
-(id)policyForStyleObject:(id)arg1 ;
@end

