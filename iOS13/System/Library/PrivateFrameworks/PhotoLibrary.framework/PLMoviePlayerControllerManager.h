/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


@class NSMutableArray;

@interface PLMoviePlayerControllerManager : NSObject {

	NSMutableArray* _playerStack;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)moveControllerToTopOfStack:(id)arg1 ;
-(void)removeControllerFromStack:(id)arg1 ;
@end

