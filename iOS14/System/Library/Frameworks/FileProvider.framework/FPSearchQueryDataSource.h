/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/FPCollectionDataSource.h>
#import <libobjc.A.dylib/FPSpotlightDataSourceDelegate.h>

@protocol OS_dispatch_queue, FPSpotlightDataSourceDelegate;
@class NSObject, FPSpotlightDataSource, FPExtensionDataSource, FPSearchQueryDescriptor;

@interface FPSearchQueryDataSource : NSObject <FPCollectionDataSource, FPSpotlightDataSourceDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _started;
	BOOL _invalidated;
	FPSpotlightDataSource* _spotlightDataSource;
	FPExtensionDataSource* _serverSearchDataSource;
	id<FPSpotlightDataSourceDelegate> _delegate;
	FPSearchQueryDescriptor* _queryDescriptor;

}

@property (nonatomic,readonly) FPSearchQueryDescriptor * queryDescriptor;                    //@synthesize queryDescriptor=_queryDescriptor - In the implementation block
@property (assign,nonatomic,__weak) id<FPSpotlightDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasMoreIncoming; 
-(id<FPSpotlightDataSourceDelegate>)delegate;
-(void)start;
-(id)initWithQueryDescriptor:(id)arg1 predicate:(id)arg2 ;
-(void)dataSource:(id)arg1 replaceContentsWithItems:(id)arg2 hasMoreChanges:(BOOL)arg3 ;
-(void)dataSource:(id)arg1 receivedUpdatedItems:(id)arg2 deletedItems:(id)arg3 hasMoreChanges:(BOOL)arg4 ;
-(void)dataSource:(id)arg1 wasInvalidatedWithError:(id)arg2 ;
-(BOOL)dataSourceShouldAlwaysReplaceContents:(id)arg1 ;
-(void)dataSource:(id)arg1 didChangeItemsOrigin:(unsigned long long)arg2 ;
-(void)setDelegate:(id<FPSpotlightDataSourceDelegate>)arg1 ;
-(BOOL)hasMoreIncoming;
-(void)enumerationMightHaveResumed;
-(FPSearchQueryDescriptor *)queryDescriptor;
-(void)invalidate;
@end

