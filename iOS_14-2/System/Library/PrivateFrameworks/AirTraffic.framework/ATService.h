/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/

#import <AirTraffic/AirTraffic-Structs.h>
#import <libobjc.A.dylib/ATMessageLinkObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSHashTable, NSString;

@interface ATService : NSObject <ATMessageLinkObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _messageLinks;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSMutableSet * messageLinks;              //@synthesize messageLinks=_messageLinks - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                  //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)run;
-(NSHashTable *)observers;
-(id)init;
-(BOOL)stop;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)addMessageLink:(id)arg1 ;
-(NSMutableSet *)messageLinks;
-(void)removeMessageLink:(id)arg1 ;
-(id)messageLinkForIdentifier:(id)arg1 ;
-(void)setMessageLinks:(NSMutableSet *)arg1 ;
@end

