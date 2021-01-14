/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCount:(long long)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(SSDownloadManagerOptions *)managerOptions;
-(long long)count;
-(void)setDownloadKinds:(NSArray *)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(NSArray *)downloadKinds;
-(void)dealloc;
-(void)setManagerOptions:(SSDownloadManagerOptions *)arg1 ;
@end

