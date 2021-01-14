/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>
#import <libobjc.A.dylib/CSSearchableIndexDelegate.h>

@class NSString;

@interface CSIndexExtensionRequestHandler : NSObject <NSExtensionRequestHandling, CSSearchableIndexDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2 ;
-(void)index:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)reindexAllSearchableItemsForIndex:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)searchableIndexDidThrottle:(id)arg1 ;
-(void)searchableIndexDidFinishThrottle:(id)arg1 ;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

