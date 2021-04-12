/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableArray;

@interface _PPTState : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	int _enteredCount;
	BOOL _hasRendered;
	NSMutableArray* _renderStatistics;

}

@property (assign) BOOL hasRendered;                               //@synthesize hasRendered=_hasRendered - In the implementation block
@property (retain) NSMutableArray * renderStatistics;              //@synthesize renderStatistics=_renderStatistics - In the implementation block
-(id)init;
-(void)setHasRendered:(BOOL)arg1 ;
-(void)enterDispatchGroup;
-(void)leaveDispatchGroup;
-(void)groupNotifyOnQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)renderStatistics;
-(void)setRenderStatistics:(NSMutableArray *)arg1 ;
-(BOOL)hasRendered;
@end

