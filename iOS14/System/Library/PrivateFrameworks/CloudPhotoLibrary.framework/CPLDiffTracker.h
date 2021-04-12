/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSMutableSet, NSSet;

@interface CPLDiffTracker : NSObject {

	NSMutableSet* _differingProperties;
	BOOL _shouldCompareAllProperties;
	BOOL _objectsAreTotallyDifferent;

}

@property (assign,nonatomic) BOOL shouldCompareAllProperties;                //@synthesize shouldCompareAllProperties=_shouldCompareAllProperties - In the implementation block
@property (nonatomic,readonly) BOOL objectsAreTotallyDifferent;              //@synthesize objectsAreTotallyDifferent=_objectsAreTotallyDifferent - In the implementation block
@property (nonatomic,readonly) NSSet * differingProperties;                  //@synthesize differingProperties=_differingProperties - In the implementation block
-(id)description;
-(id)redactedDescription;
-(void)noteObjectAreTotallyDifferent;
-(void)noteObjectsDifferOnProperty:(id)arg1 ;
-(BOOL)areObjectsDifferentOnProperty:(id)arg1 ;
-(BOOL)shouldCompareAllProperties;
-(void)setShouldCompareAllProperties:(BOOL)arg1 ;
-(BOOL)objectsAreTotallyDifferent;
-(NSSet *)differingProperties;
@end

