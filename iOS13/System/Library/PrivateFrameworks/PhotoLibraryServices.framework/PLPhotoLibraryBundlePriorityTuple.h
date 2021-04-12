/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLPhotoLibraryBundle;

@interface PLPhotoLibraryBundlePriorityTuple : NSObject {

	PLPhotoLibraryBundle* _bundle;
	unsigned long long _priority;

}

@property (nonatomic,readonly) PLPhotoLibraryBundle * bundle;              //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                //@synthesize priority=_priority - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(PLPhotoLibraryBundle *)bundle;
-(unsigned long long)priority;
-(id)initWithBundle:(id)arg1 priority:(unsigned long long)arg2 ;
@end

