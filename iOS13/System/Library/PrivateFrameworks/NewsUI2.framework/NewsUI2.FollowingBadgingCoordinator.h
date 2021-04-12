/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>
#import <libobjc.A.dylib/FCReadingListObserving.h>

@interface NewsUI2.FollowingBadgingCoordinator : NSObject <FCUserInfoObserving, FCReadingListObserving> {

	 delegate;
	 readingList;
	 userInfo;

}
-(void)userInfoDidChangeDateLastViewedSaved:(id)arg1 fromCloud:(BOOL)arg2 ;
-(void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4 ;
-(id)init;
@end

