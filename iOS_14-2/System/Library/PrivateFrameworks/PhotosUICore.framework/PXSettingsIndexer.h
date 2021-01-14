/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXSettings, PXSettingsIndex, NSMutableArray, NSProgress;

@interface PXSettingsIndexer : NSObject {

	PXSettings* _rootSettings;
	PXSettingsIndex* _index;
	NSMutableArray* _completionHandlers;
	long long _state;
	NSProgress* _indexingProgress;

}

@property (nonatomic,readonly) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (assign,nonatomic) long long state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSProgress * indexingProgress;                      //@synthesize indexingProgress=_indexingProgress - In the implementation block
@property (nonatomic,retain) PXSettingsIndex * index;                            //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) PXSettings * rootSettings;                        //@synthesize rootSettings=_rootSettings - In the implementation block
-(PXSettingsIndex *)index;
-(id)init;
-(void)setIndex:(PXSettingsIndex *)arg1 ;
-(PXSettings *)rootSettings;
-(id)initWithRootSettings:(id)arg1 ;
-(NSProgress *)indexingProgress;
-(void)setIndexingProgress:(NSProgress *)arg1 ;
-(NSMutableArray *)completionHandlers;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(id)startIndexingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_startIndexingIfNecessary;
-(void)_handleResultIndex:(id)arg1 ;
-(void)_callCompletionHandlersIfNecessary;
@end

