/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSSet;

@interface PLAssetCollectionGenerationResult : NSObject {

	BOOL _frequentLocationsDidChange;
	NSSet* _insertedOrUpdatedMoments;

}

@property (nonatomic,readonly) NSSet * insertedOrUpdatedMoments;              //@synthesize insertedOrUpdatedMoments=_insertedOrUpdatedMoments - In the implementation block
@property (nonatomic,readonly) BOOL frequentLocationsDidChange;               //@synthesize frequentLocationsDidChange=_frequentLocationsDidChange - In the implementation block
-(BOOL)frequentLocationsDidChange;
-(NSSet *)insertedOrUpdatedMoments;
-(id)initWithInsertedOrUpdatedMoments:(id)arg1 frequentLocationsDidChange:(BOOL)arg2 ;
@end

