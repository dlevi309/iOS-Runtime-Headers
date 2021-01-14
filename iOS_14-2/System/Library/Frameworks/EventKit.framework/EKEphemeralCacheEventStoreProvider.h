/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <libobjc.A.dylib/EKEventStoreProvider.h>

@class EKTimedEventStorePurger, NSString;

@interface EKEphemeralCacheEventStoreProvider : NSObject <EKEventStoreProvider> {

	EKTimedEventStorePurger* _eventStorePurger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)eventStore;
-(id)initWithCreationBlock:(/*^block*/id)arg1 ;
@end

