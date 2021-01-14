/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitor.h>

@class NSString;

@interface IMContactStoreChangeHistoryEventsHandler : NSObject <CNChangeHistoryEventVisitor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(void)processContactChangeEventForContact:(id)arg1 ofEventType:(unsigned long long)arg2 ;
-(void)processChangeEventForContact:(id)arg1 contactFromCache:(id)arg2 eventType:(unsigned long long)arg3 handleID:(id)arg4 ;
-(void)postNotificationForCNContact:(id)arg1 eventType:(unsigned long long)arg2 handleIDsToProcess:(id)arg3 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(void)visitDropEverythingEvent:(id)arg1 ;
@end

