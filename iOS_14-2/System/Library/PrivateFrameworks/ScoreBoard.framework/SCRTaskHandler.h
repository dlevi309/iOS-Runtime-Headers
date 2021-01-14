/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SCRTaskHandler : NSObject <NSCopying> {

	/*^block*/id _syncBlock;
	/*^block*/id _asyncBlock;

}
+(id)asynchronousHandlerWithBlock:(/*^block*/id)arg1 ;
+(id)synchronousHandlerWithBlock:(/*^block*/id)arg1 ;
-(void)performWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithSyncBlock:(/*^block*/id)arg1 asyncBlock:(/*^block*/id)arg2 ;
-(/*^block*/id)_syncHandler;
-(/*^block*/id)_asyncHandler;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

