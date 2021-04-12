/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@interface SPCoreSpotlightExtensionsTask : NSObject {

	/*^block*/id _filterBlock;
	/*^block*/id _performBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id filterBlock;                  //@synthesize filterBlock=_filterBlock - In the implementation block
@property (nonatomic,copy) id performBlock;                 //@synthesize performBlock=_performBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)start;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)filterBlock;
-(id)performBlock;
-(void)setPerformBlock:(id)arg1 ;
-(void)setFilterBlock:(id)arg1 ;
-(void)_performWithExtensionsEnumerator:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

