/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

#import <libobjc.A.dylib/_KSTextReplacementServiceProtocol.h>

@class NSXPCConnection, NSString;

@interface _KSTextReplacementServerConnection : NSObject <_KSTextReplacementServiceProtocol> {

	NSXPCConnection* _serviceConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceConnection;
-(void)removeAllEntries;
-(id)init;
-(id)textReplacementEntries;
-(void)dealloc;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)requestSyncWithReply:(/*^block*/id)arg1 ;
-(void)cancelPendingUpdatesWithReply:(/*^block*/id)arg1 ;
-(void)queryTextReplacementEntriesWithReply:(/*^block*/id)arg1 ;
-(void)queryTextReplacementsWithPredicate:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

