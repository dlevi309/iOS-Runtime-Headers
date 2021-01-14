/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLPhotoLibraryBundle;

@interface PLPhotoLibraryBundlePriorityTuple : NSObject {

	PLPhotoLibraryBundle* _bundle;
	unsigned long long _priority;

}

@property (nonatomic,readonly) PLPhotoLibraryBundle * bundle;              //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                //@synthesize priority=_priority - In the implementation block
-(PLPhotoLibraryBundle *)bundle;
-(id)description;
-(id)initWithBundle:(id)arg1 priority:(unsigned long long)arg2 ;
-(unsigned long long)priority;
-(BOOL)isEqual:(id)arg1 ;
@end

