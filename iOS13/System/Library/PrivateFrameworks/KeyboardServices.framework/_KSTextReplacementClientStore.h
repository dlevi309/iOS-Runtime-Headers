/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

#import <libobjc.A.dylib/_KSTextReplacementStoreProtocol.h>
#import <libobjc.A.dylib/_KSTextReplacementCancellation.h>

@class _KSTextReplacementServerConnection, NSString;

@interface _KSTextReplacementClientStore : NSObject <_KSTextReplacementStoreProtocol, _KSTextReplacementCancellation> {

	_KSTextReplacementServerConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)removeAllEntries;
-(void)performTransaction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)queryTextReplacementsWithCallback:(/*^block*/id)arg1 ;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)queryTextReplacementsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)textReplacementEntries;
-(void)cancelPendingUpdates;
-(void)modifyEntry:(id)arg1 toEntry:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)phraseShortcuts;
@end

