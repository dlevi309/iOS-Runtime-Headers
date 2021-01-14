/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriVideoIntents.framework/SiriVideoIntents
*/

#import <libobjc.A.dylib/RemoveFromWatchListIntentHandling.h>

@interface SiriVideoIntents.RemoveFromWatchListIntentHandler : NSObject <RemoveFromWatchListIntentHandling> {

	 contentResolver;
	 watchListService;
	 analyticsService;

}
-(id)init;
-(void)resolveContentForRemoveFromWatchList:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmRemoveFromWatchList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleRemoveFromWatchList:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

