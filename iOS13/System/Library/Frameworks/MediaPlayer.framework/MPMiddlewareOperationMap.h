/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSMapTable, NSMutableArray;

@interface MPMiddlewareOperationMap : NSObject {

	NSMapTable* _middlewareOperationMap;
	NSMutableArray* _middleware;
	NSMutableArray* _operations;

}
+(id)mapForRequest:(id)arg1 ;
-(id)_init;
-(id)operationsForMiddleware:(id)arg1 ;
-(id)allMiddleware;
-(id)allOperations;
@end

