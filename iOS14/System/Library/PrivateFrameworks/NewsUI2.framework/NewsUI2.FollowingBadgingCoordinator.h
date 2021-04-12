/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCReadingListObserving.h>
#import <libobjc.A.dylib/FCUserInfoObserving.h>

@interface NewsUI2.FollowingBadgingCoordinator : NSObject <FCReadingListObserving, FCUserInfoObserving> {

	 delegate;
	 readingList;
	 userInfo;

}
-(void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4 ;
-(void)userInfoDidChangeDateLastViewedSaved:(id)arg1 fromCloud:(BOOL)arg2 ;
-(id)init;
@end

