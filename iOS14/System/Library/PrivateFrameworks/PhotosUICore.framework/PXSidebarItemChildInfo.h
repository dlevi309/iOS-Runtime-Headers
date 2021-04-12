/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHCollection, PHFetchResult;

@interface PXSidebarItemChildInfo : NSObject {

	PHCollection* _collection;
	PHFetchResult* _fetchResult;
	long long _childIndexInFetchResult;

}

@property (nonatomic,readonly) PHCollection * collection;                      //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) PHFetchResult * fetchResult;                    //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) long long childIndexInFetchResult;              //@synthesize childIndexInFetchResult=_childIndexInFetchResult - In the implementation block
-(PHFetchResult *)fetchResult;
-(PHCollection *)collection;
-(id)initWithListItem:(id)arg1 dataSection:(id)arg2 childIndex:(long long)arg3 ;
-(long long)childIndexInFetchResult;
@end

