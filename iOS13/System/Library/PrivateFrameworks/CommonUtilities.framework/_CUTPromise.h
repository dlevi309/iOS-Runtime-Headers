/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/

#import <CommonUtilities/CUTPromise.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, CUTResult;

@interface _CUTPromise : CUTPromise {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	BOOL _done;
	CUTResult* _result;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) BOOL done;                                       //@synthesize done=_done - In the implementation block
@property (nonatomic,retain) CUTResult * result;                              //@synthesize result=_result - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(CUTResult *)result;
-(void)setResult:(CUTResult *)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(BOOL)done;
-(void)setDone:(BOOL)arg1 ;
-(void)_fulfillWithResult:(id)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
@end

