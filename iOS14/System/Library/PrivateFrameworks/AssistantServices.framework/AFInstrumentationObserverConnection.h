/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFInvalidating.h>

@class AFAnalyticsObserverConnection, NSSet, NSString;

@interface AFInstrumentationObserverConnection : NSObject <AFInvalidating> {

	AFAnalyticsObserverConnection* _observerConnection;
	NSSet* _filteredTagIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObservation:(/*^block*/id)arg1 filterByInstrumentationTypes:(id)arg2 ;
-(id)initWithObservation:(/*^block*/id)arg1 ;
-(void)waitUntilInvalidated;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidate;
@end

