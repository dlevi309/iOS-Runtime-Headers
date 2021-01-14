/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPDataDownloadManagerDelegate;
@class TSPObjectContext;

@interface TSPDataDownloadManager : NSObject {

	TSPObjectContext* _context;
	id<TSPDataDownloadManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TSPDataDownloadManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<TSPDataDownloadManagerDelegate>)delegate;
-(id)initWithContext:(id)arg1 ;
-(void)setDelegate:(id<TSPDataDownloadManagerDelegate>)arg1 ;
-(id)documentResourceDataWithDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3 ;
-(id)unmaterializedRemoteData;
@end

