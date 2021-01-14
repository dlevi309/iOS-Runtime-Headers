/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol IDSServiceDelegate, OS_dispatch_queue;
@class NSObject;

@interface BLTTestIDSServiceDelegate : NSObject {

	id<IDSServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) id<IDSServiceDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id<IDSServiceDelegate>)delegate;
-(void)setDelegate:(id<IDSServiceDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

