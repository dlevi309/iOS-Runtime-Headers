/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<FPCollectionDataSourceDelegate>)delegate;
-(void)start;
-(void)setDelegate:(id<FPCollectionDataSourceDelegate>)arg1 ;
-(BOOL)hasMoreIncoming;
-(void)enumerationMightHaveResumed;
-(id)initWithEnumerator:(id)arg1 ;
-(void)handleItems:(id)arg1 nextPage:(id)arg2 ;
-(void)invalidate;
@end

