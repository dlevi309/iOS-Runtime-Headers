/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/FPCollectionDataSource.h>

@protocol FPXEnumerator, OS_dispatch_queue, FPCollectionDataSourceDelegate;
@class NSObject;

@interface _FPAccessControlDataSource : NSObject <FPCollectionDataSource> {

	id<FPXEnumerator> _enumerator;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _hasMoreIncoming;
	id<FPCollectionDataSourceDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL hasMoreIncoming;                                          //@synthesize hasMoreIncoming=_hasMoreIncoming - In the implementation block
@property (assign,nonatomic,__weak) id<FPCollectionDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)invalidate;
-(id<FPCollectionDataSourceDelegate>)delegate;
-(void)setDelegate:(id<FPCollectionDataSourceDelegate>)arg1 ;
-(void)start;
-(void)enumerationMightHaveResumed;
-(BOOL)hasMoreIncoming;
-(id)initWithEnumerator:(id)arg1 ;
-(void)handleItems:(id)arg1 nextPage:(id)arg2 ;
@end

