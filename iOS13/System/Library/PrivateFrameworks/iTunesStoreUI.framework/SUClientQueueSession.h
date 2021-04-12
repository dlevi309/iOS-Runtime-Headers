/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class NSArray, SSDownloadManagerOptions;

@interface SUClientQueueSession : NSObject {

	long long _count;
	NSArray* _downloadKinds;
	SSDownloadManagerOptions* _managerOptions;
	id _queue;

}

@property (assign,nonatomic) long long count;                                      //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSArray * downloadKinds;                                //@synthesize downloadKinds=_downloadKinds - In the implementation block
@property (nonatomic,copy) SSDownloadManagerOptions * managerOptions;              //@synthesize managerOptions=_managerOptions - In the implementation block
@property (nonatomic,retain) id queue;                                             //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(long long)count;
-(void)setQueue:(id)arg1 ;
-(id)queue;
-(void)setCount:(long long)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)setDownloadKinds:(NSArray *)arg1 ;
-(SSDownloadManagerOptions *)managerOptions;
-(NSArray *)downloadKinds;
-(void)setManagerOptions:(SSDownloadManagerOptions *)arg1 ;
@end

