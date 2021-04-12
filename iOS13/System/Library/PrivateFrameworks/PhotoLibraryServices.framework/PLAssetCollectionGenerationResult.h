/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSSet;

@interface PLAssetCollectionGenerationResult : NSObject {

	BOOL _frequentLocationsDidChange;
	NSSet* _insertedOrUpdatedMoments;

}

@property (nonatomic,readonly) NSSet * insertedOrUpdatedMoments;              //@synthesize insertedOrUpdatedMoments=_insertedOrUpdatedMoments - In the implementation block
@property (nonatomic,readonly) BOOL frequentLocationsDidChange;               //@synthesize frequentLocationsDidChange=_frequentLocationsDidChange - In the implementation block
-(id)initWithInsertedOrUpdatedMoments:(id)arg1 frequentLocationsDidChange:(BOOL)arg2 ;
-(NSSet *)insertedOrUpdatedMoments;
-(BOOL)frequentLocationsDidChange;
@end

