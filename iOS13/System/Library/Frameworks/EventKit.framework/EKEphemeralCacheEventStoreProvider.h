/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

