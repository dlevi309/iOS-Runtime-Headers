/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface TUSuggestionsMetadataCacheDataProvider : TUMetadataCacheDataProvider {

	NSObject*<OS_dispatch_semaphore> _suggestionsServiceThrottleSemaphore;
	id _suggestionsContactsObserver;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> suggestionsServiceThrottleSemaphore;              //@synthesize suggestionsServiceThrottleSemaphore=_suggestionsServiceThrottleSemaphore - In the implementation block
@property (nonatomic,readonly) id suggestionsContactsObserver;                                                  //@synthesize suggestionsContactsObserver=_suggestionsContactsObserver - In the implementation block
+(id)sharedService;
+(BOOL)canUseSiriSuggestions;
+(void)suggestedNamesForDestinationID:(id)arg1 onlySignificant:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
+(id)suggestedNamesForDestinationID:(id)arg1 onlySignificant:(BOOL)arg2 error:(id*)arg3 ;
+(id)newestSuggestedContactForDestinationID:(id)arg1 ;
-(id)init;
-(void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)suggestionsServiceThrottleSemaphore;
-(void)setSuggestionsServiceThrottleSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)suggestionsContactsObserver;
@end

