/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

