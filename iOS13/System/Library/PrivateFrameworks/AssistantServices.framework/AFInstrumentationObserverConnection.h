/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)invalidate;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithObservation:(/*^block*/id)arg1 filterByInstrumentationTypes:(id)arg2 ;
-(id)initWithObservation:(/*^block*/id)arg1 ;
-(void)waitUntilInvalidated;
@end

