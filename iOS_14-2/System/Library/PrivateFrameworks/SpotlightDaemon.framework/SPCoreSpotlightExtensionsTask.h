/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)start;
-(void)setFilterBlock:(id)arg1 ;
-(id)performBlock;
-(void)setPerformBlock:(id)arg1 ;
-(id)filterBlock;
-(void)_performWithExtensionsEnumerator:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

