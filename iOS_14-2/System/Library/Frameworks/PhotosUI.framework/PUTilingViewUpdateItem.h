/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSIndexPath, PUTilingDataSource;

@interface PUTilingViewUpdateItem : NSObject {

	long long _action;
	NSIndexPath* _indexPathBeforeUpdate;
	NSIndexPath* _indexPathAfterUpdate;
	PUTilingDataSource* _dataSource;

}

@property (nonatomic,readonly) long long action;                                 //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPathBeforeUpdate;              //@synthesize indexPathBeforeUpdate=_indexPathBeforeUpdate - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPathAfterUpdate;               //@synthesize indexPathAfterUpdate=_indexPathAfterUpdate - In the implementation block
@property (nonatomic,readonly) PUTilingDataSource * dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
-(NSIndexPath *)indexPathBeforeUpdate;
-(PUTilingDataSource *)dataSource;
-(long long)action;
-(id)transformedIndexPath:(id)arg1 withDataSource:(id)arg2 ;
-(id)initWithAction:(long long)arg1 indexPathBeforeUpdate:(id)arg2 indexPathAfterUpdate:(id)arg3 dataSource:(id)arg4 ;
-(NSIndexPath *)indexPathAfterUpdate;
@end

