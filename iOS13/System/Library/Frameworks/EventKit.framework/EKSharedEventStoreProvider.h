/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <libobjc.A.dylib/EKEventStoreProvider.h>

@class EKEventStore, NSString;

@interface EKSharedEventStoreProvider : NSObject <EKEventStoreProvider> {

	EKEventStore* _sharedEventStore;

}

@property (nonatomic,readonly) EKEventStore * sharedEventStore;              //@synthesize sharedEventStore=_sharedEventStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)eventStore;
-(id)initWithEventStore:(id)arg1 ;
-(EKEventStore *)sharedEventStore;
@end

