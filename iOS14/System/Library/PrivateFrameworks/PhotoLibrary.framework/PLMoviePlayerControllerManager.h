/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

