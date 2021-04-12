/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCFetchedValueManager;

@interface FCAlternateUniversalLinksMappingManager : NSObject {

	FCFetchedValueManager* _updateValueManager;

}

@property (nonatomic,readonly) FCFetchedValueManager * updateValueManager;              //@synthesize updateValueManager=_updateValueManager - In the implementation block
-(id)init;
-(FCFetchedValueManager *)updateValueManager;
-(id)initWithMappingDirectoryFileURL:(id)arg1 contentContext:(id)arg2 ;
-(void)installMappingFilesWithCompletionHandler:(/*^block*/id)arg1 ;
@end

