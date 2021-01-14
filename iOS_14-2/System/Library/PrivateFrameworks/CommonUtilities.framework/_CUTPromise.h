/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setResult:(CUTResult *)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)done;
-(void)setDone:(BOOL)arg1 ;
-(CUTResult *)result;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_fulfillWithResult:(id)arg1 ;
@end

