/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)suggestedNamesForDestinationID:(id)arg1 onlySignificant:(BOOL)arg2 error:(id*)arg3 ;
+(id)newestSuggestedContactForDestinationID:(id)arg1 ;
+(void)suggestedNamesForDestinationID:(id)arg1 onlySignificant:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)init;
-(NSObject*<OS_dispatch_semaphore>)suggestionsServiceThrottleSemaphore;
-(void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2 ;
-(void)setSuggestionsServiceThrottleSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)suggestionsContactsObserver;
@end

