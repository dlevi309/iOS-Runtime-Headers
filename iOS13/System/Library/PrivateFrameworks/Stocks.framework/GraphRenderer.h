/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface GraphRenderer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _cancelled;

}
+(void)clearSharedRenderer;
+(id)sharedRenderer;
-(id)init;
-(void)performRenderOperation:(id)arg1 ;
@end

